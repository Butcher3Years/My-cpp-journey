#include<iostream>

class Log
{

public :

     const int LogLevelError = 0;
     const int LogLevelWarning = 1;
     const int LogLevelInfo = 2;
                                     //public methods in one section and public variables in other section


 private :
    int m_LogLevel = LogLevelInfo;//to set a LogLevel(it is a class member variable and its private)and everything gets printed

public :
   void SetLevel(int level)
   {
    m_LogLevel = level;//set member variable to a parameter
   }
   
   void Error(const char* message)//strings
   {
        if(m_LogLevel >= LogLevelError)
         std::cout << "[ERROR]" <<  message << std::endl;

   }
   
   void Warn(const char* message)//strings
   {
       if(m_LogLevel >= LogLevelWarning)
         std::cout << "[WARNING]" <<  message << std::endl;

   }

   void Info(const char* message)//strings
   {
        if(m_LogLevel >= LogLevelInfo)
         std::cout << "[INFO]" <<  message << std::endl;

   }
};

int main()
{

    Log log;//instantiate the Log class 
    log,SetLevel(log.LogLevelWarning);//setting a log level warning suppose SetLevel(2) assign 2 to memeber variable
    log.Warn("Hello!");
    std::cin.get();
}


