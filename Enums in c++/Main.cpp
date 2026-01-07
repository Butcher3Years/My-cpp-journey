//its about enumuration(DEFINE) basically a set of values
//enum is a way to give a name for a value(used when we want to integers with certain states or names)
//at the end enums just are integers 

#include<iostream>

enum Example : char //enum name as actual type ;in general it is 32 bit int (specifying which type of integer you want this in enum)unsigned char is just 8 bit
{
     A =  5, B, C//remain all increment by 1
};

//int a = 0;//these A,B,C re not grouped and just integers;at some place if you declare such as int A = 2;there is a bit of issue
//int b = 1;//int these A,B,C we only using one here!!
//int c = 2;


int main()
{
//int value = B;//if we equal to 5 it doesnt make any sense for ungrouping

   Example value = B;//if we try to assign it to 3 we get error;it needed to one of those in enum
   
   if(value == B)
   {
           //DO SOMETHING HERE
   }


    std::cin.get();
}


