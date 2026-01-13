/*Pure virtual function in C++ is the key feature that lets you create interfaces (or abstract classes that behave like interfaces).
What is a Pure Virtual Function?
A pure virtual function is a virtual function that:

Has = 0 at the end
Has no implementation in the base class (or sometimes just a dummy one)
Forces every derived (child) class to provide its own implementation
we cant instantiate the interface class [only sub classes we can and have to]
Interfaces are just classes in c++ with unimplemented methods acting as template of source unlike other languages as java or c#*/


#include <iostream>
#include <string>

  class Printable

    {
  public :
     virtual std::string GetClassName() = 0;//now every class have to contain GetClassName function to implement
        
    };

      class Entity : public Printable//made a sub class
    {
        public :
          virtual std::string GetName() { return "Entity"; }//by removing body and equating to 0 makes a pure virtal funtion
          std::string GetClassName() override { return "Entity"; } 
  
        };
    
    class Player : public Entity //no need of printable 
    {
        private :
          std::string m_Name;
      public :
          Player(const std::string& name)
               : m_Name(name) {}

               std::string GetName() override { return m_Name; }
               std::string GetClassName() override { return "Player"; } 
    };

    void PrintName(Entity* entity)
    {
          std::cout << entity->GetName() << std::endl;
    }

    class A : public Printable 
    {
       public :
           std::string GetClassName() override {return "A"; }

    };


    void Print(Printable* obj)//this is for printing names of class and type which has GetClassName funtion and make Printable a pointer 
{
    std::cout << obj->GetClassName() << std::endl;
}
int main()
{

    Entity* e = new Entity();//cant instantiate the Entity class if it is pure virtual funtion and we need to give a sub class where the funtion is implemented eg Player("")
   // PrintName(e);
    
    
    Player* p = new Player("Suhas");
    //PrintName(p);

    Print(e);
    Print(p);
    Print(new A());//it is a memory leak


   
    std::cin.get();
}
    //we can only instantiate the class if it actually has all those pure virtual functions implemented[all funtions implemented]