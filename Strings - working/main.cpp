#include <iostream>
#include <string>

int main()
{
     std::string name = "Suhas";
                  
        /*char pointer[c style of defining]  and we keep it const
         cause to make string immutable;
           will changes to std::string by
                 using header file of string*/
         
     char name2[6] = { 'S', 'u', 'h', 'a', 's', 0 };

         /*0 or '\0' is the null termination character 
         string terminates after hitting 0; without it
         the string goes outside of allocated memory*/


     std::cout << name2 << std::endl;


     name[2] = 'a';

     std::cin.get();

}          
           /*Its just the array of chars
              char is of 1 byte of memory and 
              string generally uses char ;
                wide strings are 2 bytes per character
                std::string is templated version of basic 
                string class which is templated with char */
                
//char is underlying datatype for each chartacter in std::string             
//string has a constructor takes char or const char ptr