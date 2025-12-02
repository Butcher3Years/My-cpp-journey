//classes are private and structs are public and in c there are structs
//we use when it is plain old data or pod;some kind of struct which represent a bunch of variables
//we use class for inheritance not struct
#include<iostream>

#define LOG(X) std::cout << X << std::endl

//#define struct class//struct replaced by class here

struct Player
{
 //private://to be private i need to write private    
      int x, y;
      int speed;

      void Move( int xa, int ya)
{
    x += xa * speed;
    y += ya * speed;
}
};


struct Vec2//math vector class simple functionality
{
    float x, y;
};


void Add(const Vec2& other)
{
    x += other.x;
    y += other.y;
}

int main()
{
    Player player;

   player.Move(1, -1);
    
    std::cin.get();
}