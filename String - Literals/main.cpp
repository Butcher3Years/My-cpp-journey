#include <iostream>
#include <string>

#include <stdlib.h>
#include <cstring>

        /*just a standard c library include 3 funtions and 
               its a string literal also written as
                    "Suhas"; 0[this is numeric zero]*/

int main()
{
    const char name[8] = "Che\0rno";

              /*8 cause it even ends with \0*/
                                                        
    std::cout << strlen(name) << std::endl;
                                                      
    std::cin.get();
}