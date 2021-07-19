#include <iostream>
using namespace std;
#include "player.h"
#include "util.h"

class Mode:public Player{
    protected:
    string mode;
    public:
    Mode();
    Mode(string);
    void setmode(string);
    string getmode();
    void displaymode();
    
};