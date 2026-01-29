//Its a way for us to initialiaze our class member funtions in the constructor

#include <iostream>
#include <string>

class Entity
{

    private :
       std::string m_Name;
     public :

     Entity() //Default constructor 
     {
            m_Name = "Unknown";
     }

     Entity(const std::string& name)  //constructor
     {
           m_Name = name;

     }
         const std::string& GetName() const {
            return m_Name;
         }

};

int main()
{

    Entity e0;
     std::cout << e0.GetName() << std::endl;

    Entity e1("Cherno");
     std::cout << e1.GetName() << std::endl;

    std::cin.get();
}