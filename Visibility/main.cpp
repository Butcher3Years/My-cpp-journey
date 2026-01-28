/*Visibility in C++ refers to access specifiers — they control who can see and use (access) the members (variables, functions, etc.) of a class.
In simple words:
Visibility decides which parts of your class are public, private, or protected — i.e., who is allowed to touch them.*/
//classes are generally private and structs are generally public
//this visibility has no affect on performance or running or the program and generation of code [not related with CPU]
//there are even called friends which can access the private

#include <iostream>
#include <string>

class Entity
{
        private :
             int X, Y;


         void Print(){}    


public :
     Entity()
     {
        X = 0;//constructor
        Print();
     }

};

class Player : public Entity//sub class of Entity
{
   public :
       Player()
       {
        X = 2;// Even this constructor cant access the data cause it is private
        Print();
       }
};

int main()
{
     Entity e;
     e.X = 2;// we cant access the subjects from a priavte class
    e.Print();
    
    std::cin.get();
}

//protected is more visible than Private and less visible than public
//we keep classes public and private according to goal of not breaking the code [such as UIs]USER INTERFACE