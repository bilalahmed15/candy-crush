#include <iostream>
#include "menu.h"
#include "util.h"

    menu::menu(){

    }
    void menu::creatmenu(){
        for(int i=0;i<600;i++){
            DrawSquare(0,i,10,colors[RED]);
            DrawSquare(790,i,10,colors[DARK_BLUE]);
        }
        for(int j=0;j<800;j++){
            DrawSquare(j,0,10,colors[DARK_RED]);
            DrawSquare(j,592,10,colors[DARK_GREEN]);
        }
        DrawString(330,450,"Game Menu",colors[DARK_VIOLET]);
        DrawRoundRect(250.0,300.0,300,80,colors[DARK_RED],10.0);
        DrawString(320,330,"Start new game",colors[MISTY_ROSE]);
        DrawRoundRect(250.0,200.0,300,80,colors[DARK_RED],10.0);
        DrawString(350,230,"high score",colors[MISTY_ROSE]);
        DrawRoundRect(250.0,100.0,300,80,colors[DARK_RED],10.0);
        DrawString(360,130,"Setting",colors[MISTY_ROSE]);

    }
