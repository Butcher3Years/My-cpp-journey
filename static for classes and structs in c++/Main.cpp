//what if static is present inside of class or struct == A certain thing
//if it is variable we can only use for one instatnce! across all instances in a class!
//no point of referring a variable through a class instance
//similar applies to static methods;you dont have access to class instance since you dont have class instance!!
//Global variable is external where as static global is internal

#include<iostream>


 struct Entity
 {
   static int x, y;


   void print ()
    {
        std::cout << x << ", " << y << std::endl;

    }
 };

 int Entity::x;
 int Entity::y;

int main()
{


    Entity e;
    //e.x = 2;
    //e.y = 3;

     Entity::x = 2;
     Entity::y = 3;
 

    //Entity e1 = { 5, 8 };//another instance of that class through intialiazer
    //initiailizer not works(if static variables) because x and y are no longer class members
    //we need to define static variables somewhere
    //both are just in namespace!
    Entity e1;

    //e1.x = 5;
    //e1.y = 8;   no point of doing this we are just modifying the same variable
    //The both instances sharing same x and y which is not the way static works  

    Entity::x = 5;
    Entity::y = 8;



    e.print();
    e1.print();
    std::cin.get();
}