#ifndef GRAPHIC_H
#define GRAPHIC_H


//macro colors definition
#define RED "\033[0;31m"
#define BOLDRED "\033[1;31m"
#define GREEN "\033[0;32m"
#define BOLDGREEN "\033[1;32m"
#define YELLOW "\033[0;33m"
#define BOLDYELLOW "\033[1;33m"
#define BLUE "\033[0;34m"
#define BOLDBLUE "\033[1;34m"
#define MAGENTA "\033[0;35m"
#define BOLDMAGENTA "\033[1;35m"
#define CYAN "\033[0;36m"
#define BOLDCYAN "\033[1;36m"
#define NC "\033[0m"

//functions that manage the graphic of the greetings and other stuff
void printGreetings();
void welcomeToHome();
void graphicBulbOn();


#endif