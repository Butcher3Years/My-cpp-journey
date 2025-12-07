//classes are way to group data and gives functionality together
//c is not that much oops where as c++ is as c has no concept of classes and objects
//classes have a unique names as we basically creating a new variable types
    //int PlayerX0,  PlayerY1;
    // int Playerspeed = 2;

     //these makes the code messy and bunch of variables arent grouped together so using classes helps

     //int PlayerX,  PlayerY;
     //int Playerspeed = 2;

//variables that made from class types are called objects and new object variable is called instance
//functions inside classes are called methods

#include<iostream>

#define LOG(X) std::cout << X << std::endl

class Player
{
public:     
      int x, y;
      int speed;
};

void Move(Player& player, int xa, int ya)
{
    player.x += xa * player.speed;
    player.y += ya * player.speed;
}

int main()
{
    Player player;
    Move(player, 1, -1);
    //player.x = 5;

    std::cin.get();
}