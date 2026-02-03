#include <iostream>
#include <string>

class Entity
{
        protected :
             int X, Y;


         void Print(){}    


public :
     Entity()
     {
        X = 0;
        Print();
     }

};

class Player : public Entity//Player is a subclass of Entity
{
   public :
       Player()
       {
        X = 2; 
        Print();
       }
};

int main()
{
     Entity e;
     e.X = 2;
    e.Print();//its completly different funtion and is outside of class and not even part of sub class
    
    std::cin.get();
}

//protected means parent and sub classes along can acccess the symbols
//public means we know everything can access the subjects ina class
