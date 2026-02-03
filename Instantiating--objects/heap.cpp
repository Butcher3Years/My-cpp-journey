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

int main()
{

    Entity* e;

    {

        Entity* entity = new Entity("Cherno");//we should make an Entity pointer called entity nand this new Entity returns a Entity pointer! and this is common code in c# or java by removing pointer
        e = entity;//not copying just assigning[storing memory adress]
        std::cout << entity->GetName() << std::endl;//also can be (*entity) dereferncing or with arrow operator

    }

    std::cin.get();
    delete e;//variable name,until this Cherno exits through objects
}

//in c# there is struct which is value based type kind of allocated on stack eventhough you used new keyword
//in java everything is in heap
//in c# all classes on heap
//with smart pointers we can allocate on heap also get objects get autodeleted after scope like shed pointers 