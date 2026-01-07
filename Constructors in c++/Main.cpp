//constructor is basically a special type of method which runs every time we instantiate an object
//this is a method when every time you called an object and it not have return type
//its name must matches the name of the class


#include<iostream>
//we need to always to instantiate whenever contructing an entity
class Entity
{
  public :
      float X, Y;  //just describing the new positions of Entity

      Entity()
      {
          X = 0.0f;
          Y = 0.0f;
      }//after this we can get rid off the init method

     void Init()//this Init method to keep X and Y to 0
      {
         X = 0.0f;
         Y = 0.0f;

      }

      void print()
      {
        std::cout << X << ", " << Y << std::endl;

      }

};

int main()
{
    Entity e;//instantiating the Entity here

    e.Init();//when Entity is constructed
    std::cout << e.X << std::endl;//we manually printed the X

    e.print();//calling the print function and the memory adress finally came is not given by us[we got whatever was left over in that memory space] 

           //we need to initialaize the memory say 0

           Entity e1;//every time we want to create an entity just run the Init function : which is extra and not clean
           e1.Init();

          

    std::cin.get();
}