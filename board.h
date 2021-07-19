#include <iostream>
using namespace std;
//#include "scoreboard.h"
#include "level.h"
#include "gems.h"
#include "util.h"
class Board:public Levels,public Gems{
    int **arr;
    int row;
    int col;
    Scoreboard score;
    Levels level; 
    public:
    int mouse;
    Board();
    Board(int,int);
    
    void drawboard();
   // void drawgems();
    void playingfun(int,int);
    void gemsfun();
    ~Board();
};