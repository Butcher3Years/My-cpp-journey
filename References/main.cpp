//these are not new variables ;they dont have storage; with the same memory allocated adress
//they reference to already existing variable

#include<iostream>

#define LOG(X) std::cout << X << std::endl

void Increment(int* value)
{
    (*value)++;//dref and then increment
}

int main()
{
   int a = 5;

   //int* b = &a;this is to aquire memory address of a variable
   //int& ref = a;//&is part of variable declaration;we created sommething called allias
   //ref = 2;


    Increment(&a);
    LOG(a);

    std::cin.get();
}