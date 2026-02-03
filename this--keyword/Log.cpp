#include <iostream>
#include <string>

void PrintEntity(const Entity& e);//DECLARED

class Entity
{
    public : 
       int x, y;

       Entity(int x, int y)
       {
           Entity* e = this;
           
          this->x = x;
          this->y = y;

          Entity& e = *this;

          PrintEntity(*this);//pass the current instance of Entity class with  x, y!

          //delete this; avoid this cause you are freeing memory from memeber funtion 
       }

       int GetX() const
       {
           const Entity& e = *this;
       }
};

void PrintEntity(Entity* e)//DEFINED
{
    //PRINTING
}

int main()
{
    std::cin.get();
}


//supppose we want to call a method which is outside class from within entity class