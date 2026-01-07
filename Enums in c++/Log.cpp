#include<iostream>

class Log//Levelerror and warning and info exists in this logclass  and that Level is not a namespace
{
    //These are just 3 different log levels basically are integers[perfect for enum]

public :

       enum Level
       {
               LevelError = 0, LevelWarning, LevelInfo//no need to write LevelError or any name differ than function!!
       };

     //const int LogLevelError = 0;
     //const int LogLevelWarning = 1;//now enum is just a 4 bits of code and we are restricting the code from type to level
     //const int LogLevelInfo = 2;
                                     


 private :
    Level m_LogLevel =  LevelInfo; //LogLevelInfo;
public :
   void SetLevel(Level level)
   {
    m_LogLevel = level;
   }
   
   void Error(const char* message)
   {
        if(m_LogLevel >= LevelError)//m_level is this enum type which is just an integer i can still do comparisions
         std::cout << "[ERROR]" <<  message << std::endl;

   }
   
   void Warn(const char* message)
   {
       if(m_LogLevel >= LevelWarning)
         std::cout << "[WARNING]" <<  message << std::endl;

   }

   void Info(const char* message)
   {
        if(m_LogLevel >= LevelInfo)
         std::cout << "[INFO]" <<  message << std::endl;

   }
};

int main()
{

    Log log;//instantiate the Log class 

    log.SetLevel(Log::LevelWarning);//setting a log level warning suppose SetLevel(2) assign 2 to memeber variable[not a nice way to relate to object;we need to relate to class itself by ststic Log::]
    log.Warn("Hello!");//we having an enum value called Levelwarning inside our log namespace
    log.Error("Hello!");//that enum level is not a namespace by itself{we will discuss enum class later}
    log.Info("Hello!");

   

    std::cin.get();
}


