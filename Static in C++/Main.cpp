#include<iostream>

extern int s_Variable;//external linkage ;looks for that s variable in another transalational unit


 void Function()
 {
    
 }

int main()
{

    std::cout << s_Variable << std::endl;
    std::cin.get();
}

//Best way is to declare the static variable in a header file and use that header file in different cpp files leads to using that variable in different translational units its gonna work!! 