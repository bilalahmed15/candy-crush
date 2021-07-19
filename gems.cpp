#include <iostream>
#include "gems.h"
using namespace std;

    Gems::Gems(){

    }
    Gems::Gems(string c,string t)
    {
        color=c;
        type=t;
    }
    void Gems::setcolor(string c){
        color=c;
    }
    string Gems::getcolor(){
        return color;
    }
    void Gems::settype(string t){
        type=t;
    }
    string Gems::gettype(){
            return type;
    }
    void Gems::drawgems(int i,int j,int a){
        if(a==0){
             DrawRoundRect(150+i,50+j,40,30,colors[BLUE]);
              DrawRoundRect(150+i,50+j,40,30,colors[BLUE]);
               DrawRoundRect(150+i,50+j,40,30,colors[BLUE]);
        }
        else if(a==1){
           
                DrawCircle(170+i,70+j,20,colors[DARK_RED]);
            DrawCircle((170+i)+60,70+j,20,colors[DARK_RED]);
            DrawCircle((170+i)+120,70+j,20,colors[DARK_RED]);
        }
        else if(a==2){
             DrawSquare(150+i,50+j,40,colors[DARK_GREEN]);
             DrawSquare(150+i,50+j,40,colors[DARK_GREEN]);
             DrawSquare(150+i,50+j,40,colors[DARK_GREEN]);

        }
        else if(a==3){
            DrawTriangle( 150+i, 50+j , 190+i, 50+j , 170+i , 90+j, colors[DARK_ORANGE] );
            DrawTriangle( 150+i, 50+j , 190+i, 50+j , 170+i , 90+j, colors[DARK_ORANGE] );
            DrawTriangle( 150+i, 50+j , 190+i, 50+j , 170+i , 90+j, colors[DARK_ORANGE] );


        }
    }