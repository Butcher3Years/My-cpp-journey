//Implicit means without explicitly telling what to do [automatically]
//To explicit a constructor we keep explicit keyword before the constructor
//compiler can perform one implicit conversion in our code[without casting]

#include <iostream>
#include <string>

class Entity
{
  private :
    std::string m_Name;
    int m_Age;
  public :
    explicit Entity(const std::string& name)
           : m_Name(name), m_Age(-1) {}
    explicit Entity(int age)
           : m_Name("Unknown"), m_Age(age) {}


};

void PrintEntity(const Entity& entity)
{
    //Printing
}

int main()
{

    PrintEntity(22);
    //PrintEntity("Cherno"); //Cherno string is not a std string its a  const char array of 7 characaters and c++ have to convert 2 [char array to string and string to Entity]
    PrintEntity(std::string("Cherno"));
    PrintEntity(Entity("Cherno"));//both are the same

    //Entity a ("Cherno"); //or Entity a = Entity("Cherno");
    Entity a = Entity("Cherno");//cant cause iam equating string literal to a Entity object!!
    Entity b = 22;//we cannot do when it is explicit we have to do Entity b(22); or Entity b = (Entity)22;[explicitly casting to a Entity] or Entity b = Entity(22);

    std::cin.get();
}


//c++ cannot perform 2 implicit conversions at a time!!