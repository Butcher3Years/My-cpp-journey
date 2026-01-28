#include <iostream>
#include <string>

class Entity
{
    private :
           int m_X, m_Y;
           mutable int var;
    public :
          //const int* const GetX() const //[means cant change the content and cant reassign pointer also cant change member variables of the class through methods] 
          int GetX() const
          {

            var = 2;//suppose it needa to modify keep mutable in front of the variable
            return m_X;     
          }      

          int GetX()
          {
            return m_X;
          }

          /*keeping const after method in class means 
              this method cannot modify actual class and its 
                 belonged variables makes just a
                  read only method*/

       void SetX(int x)// const makes no sense its setting
       {
            m_X = x;  
       }         

};

   void PrintEntity(const Entity& e)//pass it by conast refernece to avoid copying [just a read only memory]
   {
       /*  e = nullptr; 
         e = Entity(); 
         
               its not like pointers
               reassigning this object means changing its own
               no separation between pointer and contents of the pointer 
               cause  you are the contents in ref
               you are the entity though you are a ref
               and GetX funtion need to be const otherwise it violates const Entity */

        std::cout << e.GetX() << std::endl;

   }


   int main()
   {

    Entity e;
     const int MAX_AGE = 90;

     const int* const a = new int;

     *a = 2;
     a = (int*)&MAX_AGE;
     a = nullptr;


     std::cout << *a << std::endl;

     std::cin.get();



   }


//int* m_X, *m_Y //its like both considering pointers