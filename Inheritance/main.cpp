//this is even in oops[huge paradigm] and this inheritance means inheritance betweeen the classes is ine of the most powerful features
//inheritance allows us to have a base class which contain common functionality and this allows like branchoff from the class and create sub classes from parent class
//this reduces code duplication [multiple times code repeat with slightly different things]
//common functionality to a parent class and make sub classes from base class which may change their functionality or create one


#include<iostream>

class Entity//this is the parent class or base Entity class having the common functionalities with other classses such as position
{
public :
    float X, Y;

    void Move(float xa, float ya)//move function

    {

        X += xa;
        Y += ya;

    }
};

   class Player

   {

    public :

    const char* Name;//extra something than entity class
    float X, Y;//we get 4 floats after assigning player as a sub class of Entity

    void Move(float xa, float ya)//move function

    {

        X += xa;
        Y += ya;

    }

    void PrintName()//extra functionality
    {
        std::cout << Name << std::endl;

    }
   };

int main()
{

    std::cout << sizeof(Player) << std::endl;

    std::cin.get();
}