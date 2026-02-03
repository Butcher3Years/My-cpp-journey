//this keyword only applicable to member funtion[funtion in the class i.e, method!!]
//this is a pointer to the current object instance!!
//in order to call a method we need to instantiate the object!

#include <iostream>
#include <string>

class Entity
{
    public : 
       int x, y;

       Entity(int x, int y)
               //: x(x), y(y) we can use member initisaliser list! without it it cannot be differentiated;so we need to give reference to the class member varaible!!
       {
           Entity* e = this;//Entity pointer const and we cannot reassign the adrress
           //Entity* const&  e = this; to assign it to a ref this is the way
          // e->x = x; or
          this->x = x;//or (* this).x = x;
          this->y = y;
       }

       int GetX() const
       {

            //Entity* e =  this; not valid
            const Entity* e = this; //in const funtion e->x = 5; cant be done :  this is const Entity * const 

            return x;
       }


};

int main()
{
    std::cin.get();
}


