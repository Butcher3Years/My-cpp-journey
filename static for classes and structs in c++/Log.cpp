//static methods cannot access non static variables!!
//only static method cannot have a class instance(hidden parameter for non static classes) similar to writtng a method outside a class
//in normal a non static method always gets a instance of the current class as a parameter

#include<iostream>


 struct Entity
 {
         int x, y;


  static void print ()//for static method
    {
        std::cout << x << ", " << y << std::endl;//we cannot access these unless x and y are static variables

    }
 };

 static void print (Entity e)//classs method non static when its compiled ; if we removes instance its not get compiled same as static keyword in method;it doesnt know which entities x and y are you accesing as we not given refernece to an entity 
    {
        std::cout << e.x << ", " << e.y << std::endl;

    }
 

 //int Entity::x;
 //int Entity::y;definition of static variables

int main()
{

 
    //Entity e; in this we even dont need class instances because everything we are doing is static
    
    Entity e;

     //Entity::x = 2;
     //Entity::y = 3;
  
     e.x = 2;
     e.y = 5;


    
    Entity e1;

    
    //Entity::x = 5;
    //Entity::y = 8;

    e1.x = 5;
    e1.y = 8;




    //e.print();
    //e1.print();

    Entity::print();
    Entity::print();//for static methods :we running the same exact method twice
    std::cin.get();
}