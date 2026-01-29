#include <iostream>
#include <string>

class Entity
{
  private :
          std::string m_Name;
          mutable int m_DebugCount = 0;

   public :
       const std::string& GetName() const
       {
        m_DebugCount++;
        return m_Name;
       }

};

int main()
{

    class Entity e ;
    e.GetName();

    int x = 8;
    auto f = [=]() mutable
                        //we can write &x or x or = or &
    {
        //std::cout << "Hello" << std::endl;
        //x++;//by value = we get error we need to get it through local variable so better to use mutable keyword

        /*  int y = x;
          y++;
        std::cout << y << std::endl;*/

        x++;//we passed it through value through mutable keyword
        std::cout << x << std::endl;

    };

    f();
             //x = 8 cause we pased through value than reference
    std::cin.get();
}
        /*lambda is a little through away funtion 
               you can write and
        assign it to the variable quickly */
