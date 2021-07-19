#include <iostream>
using namespace std;
#include "scoreboard.h"
class Levels:public Scoreboard{
    protected:
    string level;
    public:
    Levels();
    Levels(string);
    void setlevel(int);
    string getlevel();
    void increselvl();
    void display();
};