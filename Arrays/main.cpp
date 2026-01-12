//in java we have no modifier = default modifier
//in c# we have such as internal[these are topics in visibility]
/*Arrays in C++ are a collection of multiple elements of the same type stored in contiguous memory locations (one after another).[in rows]
They are one of the most basic and important data structures in C++.*/
//lua language starts from index 1;c++ is 0 
//its like having multiple variables in a single variable
//arrays mostly work with for loops[indexable loops];without it we need to set manually the example array

#include <iostream>

int main()
{
    int example[5]; //array type and name mentioned its contain 5 integers
    example[0] = 2;
    example[4] = 4;//last index

    example[-1] = 5;
    example[17] = 21;//we get memory access violation [in debug mode we get errors not in release mode]
    

    std::cout << example[0] << std::endl;//with mentioning index, we get underlying data type
    std::cout << example << std::endl;//actual array print memory adress cause its a pointer type



    std::cin.get();
}
