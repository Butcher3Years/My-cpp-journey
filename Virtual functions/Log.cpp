#include <iostream>
#include <string>

    class  Entity
    {
        public :
          virtual std::string GetName() { return "Entity"; }//getName is going to return string

    };
    
    class Player : public Entity
    {
        private :
          std::string m_Name;//stores a name
      public :
          Player(const std::string& name)//constructor allows to specify a name
               : m_Name(name) {}

               std::string GetName() override { return m_Name; }//Mark the overriden function with keyword override and this helps the funtion came from the base class
    };

    void PrintName(Entity* entity)
    {
          std::cout << entity->GetName() << std::endl;
    }


int main()
{

    Entity* e = new Entity();
    PrintName(e);
    //std::cout << e->GetName() <<std::endl;
    
    Player* p = new Player("Suhas");
    PrintName(p);

    //std::cout << p->GetName() << std::endl;


    //Entity* entity = p;//p is pointer to a player type but this is a instance in the player class
    //std::cout << entity->GetName();//we expect player to be printed

    std::cin.get();
}

//v table contain a mapping for all the virtual functions in our base class so we can map it to correct overwritten function at runtime 
//if i want to override a funtion you need to mark the base funtion in the base class as virtual
//virtual funtions need extra memory to store v table to dispatch to the right funtion includes member pointer in the base class
//and if we call virtual funtion we have to go through table to see which matches [additional performace penalty] ]