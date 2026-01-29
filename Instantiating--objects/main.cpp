#include <iostream>
#include <string>

using string = std::string;


class Entity
{
    private :

      string m_Name;
    public :
    
    Entity() : m_Name("Unknown")
    {
    }

    Entity(const string& name) : m_Name(name)
    {
    }

    const string& GetName() const
    {
      return m_Name;
    }
    
};

/*void Function()
{
    int a = 2;
    Entity entity  = Entity("Cherno");//after this loop this Entity gets destroyed!
}*/

int main()
{

    Entity* e;
    {

   // Function();// Stack frame gets created includes all classes and also primitive types and after that loop its all get destroyed!

     Entity entity("Cherno");    //calls default constructor if there are no parameters[null referncce exception in c# or java ]
     
     //Entity entity  = Entity("Cherno");//same as the previous line
     
     e = &entity;
     std::cout << entity.GetName() << std::endl;
    }

    std::cin.get();
}


/*we need to instantiate a class [not static]
  2 ways of creating by the type of memory used heap and stack
  its all based on lifetime and speedness 
  1.stack is autodeleted after the end of loop and its fast
  2.heap have to deleted manually and its slow
  also we have an area where our source code lives*/
  