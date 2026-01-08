//inheritance is just an extension of a existing class and creating a class having new functionalities

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

   class Player : public Entity//this Player class is a sub class of Entity, it has both types if player and entity[types exist in some runtime flags activated]

   {

    public :

    const char* Name;//extra something than entity class here is a constant char pointer
    
    void PrintName()//extra functionality
    {
        std::cout << Name << std::endl;
    }

        //at this point in player class as it is a sub class we need to look into Entity class and acoording to this anything is not in private in Entity class is in player class

   };

int main()
{

    std::cout << sizeof(Entity) << std::endl;//is 8 cause 2 floats
    std::cout << sizeof(Player) << std::endl;//is 12 cause it contain 2 floaTS AND conatant char pointer each is 4 bytes 32 bits

    //size of classes in this memory varies if we overwrites funtion in Player and maintain v table which carries extra memory 


    Player player;//created the Player class instance
    //player.PrintName()//exists in Player class

    player.Move(5, 5);//this is in Entity class calling move and accessing X AND y
    player.X = 2;//i can acess X and Y as if were in Entity as they are inherited



    std::cin.get();
}

//here we can also use polymorphism[This allows you to treat different objects in the same way, even if they do things differently under the hood(from super class).]
//Player is a super set of Entity means it has whatever Entity has plus some extra funationality or anything
//i can pass a Player object in place of an Entity class on same function
//we can also change the behaviour of class or base class by ovverwriting a method and giving a new code to run instead