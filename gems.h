#include <iostream>
using namespace std;
#include "util.h"



class Gems{
    string color;
    string type;
    public:
    Gems();
    Gems(string,string);
    void setcolor(string);
    string getcolor();
    void settype(string);
    string gettype();
    void drawgems(int,int,int);
    
};