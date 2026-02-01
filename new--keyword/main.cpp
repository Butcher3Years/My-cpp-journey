#include <iostream>
#include <string>

using string = std::string;


class Entity
{
  private :
     string m_Name;
  public :
    Entity() : m_Name("Unknown"){}
    Entity(const string& name) : m_Name(name) {}
    
    const string& GetName() const { return m_Name; }
};


int main()
{

    int a = 2;
    int* b = new int [50]; // 200 bytes and returns a pointer 

    Entity* e = new(b) Entity();//returns a void pointer and the aloocated to b memory adress
    //Entity* e = (Entity*)malloc(sizeof(Entity));//malloc(50); and this returns a Entity pointer

    //free (e);
   
   
    delete e;//calls destructor and free funtion that "malloc"ed
    delete[] b;

//scope based pointing and ref counting for using it in advanced way!!

    std::cin.get();
}

//This new is a heap allocated keyword which returns a pointer 
//This can be applied to  classes, primitive types and also arrays
//This memory allocated in heap contigously from the freeelist which have the memory adresses
//we cannot take the malloc rather than new Entity(); cause this calls conatructor 
