#include<iostream>

class Entity
{
  public :
      float X, Y;  


      /*Entity()
      {
      }    this is like a default constructor and not initializes the variables otherwise it gives whatever leftover in memery
      */

      /*Entity()
       {
          X = 0.0f;
          Y = 0.0f;
      }*/

      Entity(float x, float y)//constructor with parameters its like a method with samename providing different overloads
    {
        
        X = x;//asiigning parameter with member variable
        Y = y;


    }
      void print()
      {
        std::cout << X << ", " << Y << std::endl;

      }

};

class Log//here it having only static methods
{
Log() = delete;//deletes the defualt constructor


    /*private :  hiding the constructor
    Log() {}*/
  public:
    static void Write()
     {

     }
};

int main()
{

    Log::Write();//only allow people to use class so i didnt want preparing the instances 
    Log l;//clearly it constructs due to defualt constructor

    //Entity e;

    
    //std::cout << e.X << std::endl;//we manually printed the X

    Entity e(10.0f, 5.0f);
    e.print();    

    std::cin.get();
}
//constructors dont run if you do not instantiate the object like static methods from a class [heap allocator later]
//using a new keyword and create an object instance also called constructor 
//there are types of constructors such as copy and move constructors