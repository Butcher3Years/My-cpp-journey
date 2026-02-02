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


      Vector2 operator+(const Vector2& other) const
       {
          return Add(other);
       }

    


      Vector2 Multiply(const Vector2& other) const
      {
            return Vector2(x * other.x, y * other.y );
      }

      Vector2 operator*(const Vector2& other) const
      {
            return Multiply(other);
      }


    //equals(),Tostring in case of java 

    bool operator==(const Vector2& other) const//EQUATING
    {
            return x == other.x && y == other.y;
    }

     bool operator!=(const Vector2& other) const
    {

           // return !operator==(other); not preferrable!!!!
            return !(*this == other);//to reverse how it works!!
    }


};

  std::ostream& operator<<(std::ostream& stream, const Vector2& other)
  {
    stream << other.x << ", " << other.y;
      return stream;
  }

int main()
{
     Vector2 position(4.0f, 4.0f);
     Vector2 speed(0.5f, 1.5f);
     Vector2 powerup(1.1f, 1.1f);


     Vector2 result1 = position.Add(speed.Multiply(powerup));
     Vector2 result2 = position + (speed * powerup);//BODMAS

     //if (!result1.equals(result2))//this is how you equate in a java 
      if(result1 == result2)
      {

      }


     std::cout << result2 << std::endl;//no overload for << operator to take in an output string and also Vector2

}


//This is about the leftshift operator!!!

