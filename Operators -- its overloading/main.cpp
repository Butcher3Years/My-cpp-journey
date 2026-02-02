#include <iostream>
#include <string>


struct Vector2
{
     float x, y;

     Vector2(float x,float y)
            : x(x), y(y) {}

      Vector2 Add(const Vector2& other) const  
      {
            return Vector2(x + other.x, y + other.y);
      }    

      Vector2 Multiply(const Vector2& other) const
      {
            return Vector2(x * other.x, y * other.y );
      }
      

};

int main()
{
     Vector2 position(4.0f, 4.0f);
     Vector2 speed(0.5f, 1.5f);
     Vector2 powerup(1.1f, 1.1f);//Multiplies the result!!


    Vector2 result = position.Add(speed.Multiply(powerup));//without operator overloading

    std::cin.get();
}


//Operators are just funtions!!
//Operator overloading is just giving new funtionality to the operator
//This is not supported on java and partially on c# and use when only its needed!