#include <iostream>
#include <string>

class Example
{
    public :
      Example()
      {
        std::cout << "Created Entity!" << std::endl;

      }

      Example(int x)
      {

        std::cout << "Created Entity with " << x << "!" << std::endl;

      }

};

class Entity
{
           //This is through member initializer list!!
    private :
       std::string m_Name;
       Example m_Example;//created an Entity! like it  is in Entity class


       //int m_Score;
       //int x, y, z;

     public :

     Entity() 
               : m_Example(Example(8)) //we can also use only 8 inside
                //:  x(0), y(0), z(0)//,m_Score(0) //Initialiser list need to list in order of class members declared!!
     {
        //m_Name = "Unknown";//ThiS m_Name object constructed twice [default constrfuctor and with unknown parameter]

            m_Name = std::string("Unknown");
            //m_Example = Example(8);

     }

     Entity(const std::string& name)  //constructor
                : m_Name(name)
     {
     }
         const std::string& GetName() const {
            return m_Name;
         }

};

int main()
{

    Entity e0;
     //std::cout << e0.GetName() << std::endl;

    /*Entity e1("Cherno");
     std::cout << e1.GetName() << std::endl;*/

    std::cin.get();
}

     //this keeps code in the constructor a lot cleaner !!
     //but there is funtional differnce specifically applied to classes