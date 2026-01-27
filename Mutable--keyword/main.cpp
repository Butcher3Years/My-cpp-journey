/*the application of mutable mostly with lambdas and const
   its like mutable reversing the meaning of const*/

#include <iostream>
#include <string>

class Entity
{
  private :
          std::string m_Name;
          mutable int m_DebugCount = 0;

   public :
       const std::string& GetName() const//const and ref
           //making methods const so not to modify the class

       {
        m_DebugCount++;//its for supppose how many times we debugging
        return m_Name;
       }

};

int main()
{

    class Entity e ;
    e.GetName();//we will do if the method is const

    std::cin.get();
}
