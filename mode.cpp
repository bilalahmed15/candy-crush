#include <iostream>
using namespace std;
#include "mode.h"
    static int i=0;
   Mode::Mode(){

   }
    Mode::Mode(string m){
        mode=m;
    }
    void Mode::setmode(string m){
        mode=m;
    }
    string Mode::getmode(){
        return mode;
    }
    void Mode::displaymode(){
        for(int i=0;i<600;i++){
            DrawSquare(0,i,10,colors[DARK_RED]);
            DrawSquare(790,i,10,colors[DARK_RED]);
        }
        for(int j=0;j<800;j++){
            DrawSquare(j,0,10,colors[DARK_RED]);
            DrawSquare(j,590,10,colors[DARK_RED]);
        }
        DrawString(350,450,"Mode Setup",colors[WHITE]);
        DrawRoundRect(300,350,210,50,colors[DARK_RED],10.0);
        DrawString(340,370,"Normal Mode",colors[WHITE]);
         DrawRoundRect(300,250,210,50,colors[DARK_RED],10.0);
         DrawString(320,270,"Time Trial Mode",colors[WHITE]);
          DrawRoundRect(300,150,210,50,colors[DARK_RED],10.0);
         DrawString(380,170,"Back",colors[WHITE]);

    }

   