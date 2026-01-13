#include <iostream>
#include <string>

void PrintString(const std::string& string)//creating copy of that std::string class

{
   // string += "h"; by removing the const and the refernce keywords and its just a read only function
    std::cout << string << std::endl;

}

int main()
{
     std::string name = "Suhas";// + "hello!";process of appending strings
     name += "hello!";

     std::string name = std::string("Suhas") + "hello";
     PrintString(name);
     bool contains = name.find("no") != std::string::npos;//to find text in our string
         
       /*npos is the illegal position for that find
       and name.find returns position of that no thing*/


     name.size();
               
            /*strlen(s) for the length of the string char* s
                and strcpy for copying of the strings*/



     std::cout << name << std::endl;

     std::cin.get();

}          /* string copying in funtions are quite slow
        strings can be addable than char ptrs  */