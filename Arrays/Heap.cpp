//there is no way of knowing the size of array in c++;but there is a way cause when you delete this heap memory compiler needs to know the size of array but its comprimising

#include <iostream>
#include <array>

class Entity
{
    public :

      static const int exampleSize = 5;//constexpr will explained later which is constant expression
      int* example[exampleSize];//suppose we changed it to a heap we first get the Entity memory adress which leads to the array  its a jumping across the memory so [better to switch it to stack]

    std::array<int, 5> another;//type and size

      Entity()
      {
         

         int a[5];

        int count =  sizeof(a) / sizeof(int);//size means bytes ,count means no of elements 

        //example->size();//we cant do like this like some other languages for heap in Entity class
           for(int i = 0; i < another.size(); i++)
             example[i] = 2;//constructor which initializes

      }
};

int main()
{

    Entity e;

    /*int example[5];
    for(int i = 0; i < 5; i++)
    example[i] = 2;*///we moved into the Entity class


    //int* another = new int[5];
    //for(int i = 0; i < 5; i++)
    //another[i] = 2;


    //delete[] another;


    std::cin.get();
}
//this is based on heap allocated memory with new keyword
//we  need to manually delete this
//stack created it will ends when we get out of curly bracket int example[5]
//heap created more over the stack cause of the life times most probably suppose if we need to return the array inside of our funtion

//in c++ 11 there is called standard array which has inbuilt datastructures  used rather than the normal raw array
//it includes bounds checking and it keeps tracking size of arrray