//Log class is a way to manage our log messages;i.e to print to the console
//normally used in debugging purposes
//this logclass will maintain some levels;3 log levels what level of log messages we want to send to the console
//error,warning,message (or) trace eg warining level means warings and errors will print out
//we create class according to its usage
//to differentiate local and member variables helps a lot!! FOLLOW  A CONVENTION

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
    log.SetLevel(log.LogLevelWarning);//setting a log level warning suppose SetLevel(2) assign 2 to memeber variable[not a nice way to relate to object;we need to relate to class itself by ststic Log::]
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");
    std::cin.get();
}


