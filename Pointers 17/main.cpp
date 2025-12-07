//Theses are the raw pointers not the samrt ones!!!    memory is everything!!!
//pointers(types) manage and manupulate memory(linear 1d line )!
//pointer is just an integer number which stores a memory adreess
//There is nothing in pointer says how big that memory is!!

#include<iostream>

#define LOG(x) std::cout << x << std::endl;

int main()
{
   int var = 8;//(we created memory in stack)
   int* ptr = &var;//where is that var in memory and here assigning to ptr ;here int is 4 bytes 
   //double* ptr = (double*)&var;
   //void* ptr = nullptr;//Not a valid memory adress,a simple pointer
    
   *ptr = 10; //"Deferencing the pointer" to access data

   LOG(var);
   std::cin.get();
}
