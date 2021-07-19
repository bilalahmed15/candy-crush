#include <iostream>
using namespace std;
#include "level.h"
    static int z=1,x=70;
    Levels::Levels(){
         level=Num2Str(1);
    }
    Levels::Levels(string l){
        level=l;
    }
    void Levels::setlevel(int l){
       level=Num2Str(l);
    }
    string Levels::getlevel(){
        return level;
    }
    void Levels::increselvl(){
     int i=0;
     
        //level=0;
        if(currentscore==Num2Str(x)){
            x+=70;
            z+=1;
            
        }
        
        level=Num2Str(z);
       // return level;

    }
    void Levels::display(){
        Scoreboard::display();
    }