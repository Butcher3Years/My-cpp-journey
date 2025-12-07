#include<iostream>

#define LOG(X)  std::cout << X << std::endl

void Increment(int& value)
{
    value++;
}

int main()
{
   int a = 5;
   int b = 8;


   int* ref = &a;
   *ref = 2;
   ref = &b;
   *ref = 1;
   //int& ref = a;//when we declared a refernce we need to assign it
   //ref = b;//we cant do this
   
   // a = 8, b = 8

   //Increment(a);
    LOG(a);
    LOG(b);

    std::cin.get();
}
//one we declare a reference we cant change to what it references to