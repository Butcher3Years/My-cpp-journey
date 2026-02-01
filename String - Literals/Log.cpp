#include <iostream>
#include <string>

#include <stdlib.h>

int main()
{

    using namespace std::string_literals;//gives no of funtions for convenience
    
    std::string name0 = std::string("Cherno") + "hello!";//cant do cause you cant add 2 raw literals directly 
    std::string name0 = "Cherno"s + "hello!";//this s returns a standard string and u8 for normal string and L infront of the string literals for wide string


    std::u32string name0 = U"Cherno"s + U" hello";//for wide string it is wstring and R for row

    const char* example = R"(Line1
    Line2
    Line3
    Line4)";

      const char* ex = "Line1\n"
           "Line2\n"
            "Line3\n";           
    


    const char* name = u8"Cherno";//made with utf 8 similar to remaining ones [ unicode transformation format ]
    const wchar_t* name2 = L"Cherno";//wide and this is 2 bytes per character[but variable for such as linux and windows]

    const char16_t* name3 = u"Cherno";//2 bytes per character or 16 bits a character using string
    const char32_t* name4 = U"Cherno";//32 bits character or 4 bytes per character



    std::cin.get();
}

/*string literals are always stored in read only memory
       so i cant equate a char pointer to a string litreral 
         which is a READ ONLY MEMORY
         we can use a const char array */ 