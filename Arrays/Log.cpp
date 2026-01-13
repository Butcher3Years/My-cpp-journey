#include <iostream>

int main()
{ 
    int example[5];
    int* ptr = example;

    
    for (int i = 0; i < 5; i++)
            //example[i] = 2;//this is a text an offset to this memory of array
        


     example[2] = 5;//for index 2 its start at 9th byte we are writting an offset of 8 bytes from a pointer
    *(ptr + 2) = 6;//we are dereferencing this pointer way of writting and changing value from 5 to 6
    *(int*)((char*)ptr + 8) = 6;//this is the way of writting in single bit[char] and even in int data type of 4 bytes


    std::cin.get();
}

//arrays are always stored in rows ; each integer of 4 bytes total 20 bytes;
//array is just a pointer here it is a int pointer