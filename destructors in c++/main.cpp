//destructor runs when you destroy an object[uses to un initialize anything that you clean any memory that you've used ;because it causes memory leaks]
//destructor applies to both stack and heap allocated objects
//if you allocate an object using new when you call delete destructor get called
//if you have stackk based object when the scope ends the object gets deleted and thus destructor called
//heap allocated objects need to manually clean it up


#include<iostream>

class Entity
{
  public :
      float X, Y; //two floats allocated in space with our class and no clean up need for memory here at 
 
     Entity()
     {
        X = 0.0f;//initializing
        Y = 0.0f;
        std::cout << "Created Entity" << std::endl;
     }

      /*Entity(float x, float y)
       { 
        X = x;
        Y = y;
    }*/

      ~Entity()//destructors denoted by tilda
      {
        std::cout << "destroyed Entity" << std::endl;
      }

      void print()
      {
        std::cout << X << ", " << Y << std::endl;

      }

};

    void Function()
 {
     Entity e;
     e.print();
     e.~Entity();//call the destructor
 }


int main()
{

    //it is stack allocated i.e destructor only get called when main funtion exits and it not happens here cause our program closes immedistely after that
       
    Function();
    std::cin.get();
}
