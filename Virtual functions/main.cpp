//binding means which functions to call
//if not virtual it is static binding : The compiler decides at compile time which function to call, based only on the type of the pointer/reference, not the actual object it points to.
//if it is virtual it is dynamic or runtime binding means the decision of which function to call happens at runtime, based on the actual type of the object.
//Made possible by virtual functions and the hidden vtable mechanism

//virtual functions allows up to ovverride the methods in the sub classes
//if parent class has some virtual function then sub class can ovverride it to change the method

#include <iostream>
#include <string>

    class  Entity
    {
        public :
           std::string GetName() { return "Entity"; }//getName is going to return string

    };
    
    class Player : public Entity
    {
        private :
          std::string m_Name;//stores a name
      public :
          Player(const std::string& name)//constructor allows to specify a name
               : m_Name(name) {}

               std::string GetName() { return m_Name; }//return the name member
    };


int main()
{

    Entity* e = new Entity();
    std::cout << e->GetName() <<std::endl;//created a entity and try to print the getname
    
    Player* p = new Player("Suhas");
    std::cout << p->GetName() << std::endl;
//no need to bothering of objects as program terminates it anyway

    std::cin.get();
}

//everything goes bad whenever i start introduce polymorphism
//referring player like its not entity