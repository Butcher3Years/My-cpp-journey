//this is using static outside of a class
//outside of class means internal linkage; visible to only that translational unit!!
//where as intrenal ststic is shared across all instances in n class(but applicable to only one instance!!)


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