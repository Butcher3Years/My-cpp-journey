//Just an alternative way of writting if and else statements!!
      //  ? = if    : = else

#include <iostream>
#include <string>

static int s_Level = 1;
static int s_Speed = 2;

int main()
{
       /* if (s_Level > 5)
          s_Speed = 10;
        else
           s_Speed = 5;*/

        //s_Speed = s_Level > 5 ? 10 : 2;   //we need to write the condition first and then ?:
         s_Speed = s_Level > 5 ?  s_Level > 10 ? 15 : 10 : 5;


       std::string rank = s_Level > 10 ? "Master" : "Beginner";//not construct an intermediate string due to return value optimisation and its faster

       std::string otherRank;//without terenary operator and constructing a temporary string and destroying it!
           if(s_Level > 10)
           otherRank = "Master";

           else
             otherRank = "Beginner";


    std::cin.get();
}     



    

