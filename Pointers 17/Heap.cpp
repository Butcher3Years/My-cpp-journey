#include <iostream>
#include <cstring>

#define LOG(x) std::cout << x << std::endl;

int main()
{
      char* buffer = new char[8];//created variable in heap(strechable memory)
//char is of 1 byte; so this new char has 8 bytes of memory and returning a ptr to the beggining

    std::memset(buffer, 0, 8);//fills the data that we specify[ptr, value, size]

    char** ptr = &buffer;//ptr to a ptr

    delete[] buffer;//delete data when we are done with[]array operator we used for allocate same with delete
    buffer = nullptr;   
    std::cin.get();
}