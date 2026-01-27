#include <iostream>
#include <string>

int main()
{
      const int MAX_AGE = 5;//this integer is a constant you cannot change it!
      
      int* a = new int; //created on heap tO acquire a pointer

      *a = 2;
      a = (int*)&MAX_AGE;

      int const* a = new int;//contents cant be changed '*a'
      const int* a = new int;//same as the above

      int*const a = new int;//cant reassign the pointer 'a'
      const int*const a = new int;//contents and assigning of pointer cant be changed


      
            /*dereferencing and equating to 2 [contents]
            reassigning pointer to some other memory adress*/

      std::cout << *a << std::endl;//reading 'a' is fine



    std::cin.get();
}