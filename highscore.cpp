#include <iostream>
#include "highscore.h"
using namespace std;


Highscore::Highscore(){

}
Highscore::Highscore(int h){
highscore=h;
}
void Highscore::sethighscore(int h){
highscore=h;
}
int Highscore::gethighscore(){
    return highscore;
}
void Highscore::displayHscore(){
   	 for(int i=0;i<600;i++){
            DrawSquare(0,i,10,colors[DARK_BLUE]);
            DrawSquare(790,i,10,colors[DARK_BLUE]);
        }
        for(int j=0;j<800;j++){
            DrawSquare(j,0,10,colors[DARK_BLUE]);
            DrawSquare(j,590,10,colors[DARK_BLUE]);
        }
		DrawString(320,500,"HIGH SCORE",colors[MISTY_ROSE]);
		 DrawRoundRect(300,150,210,50,colors[DARK_RED],10.0);
         DrawString(380,170,"Back",colors[WHITE]);
            DrawString(200,420,"Name",colors[MISTY_ROSE]);
             DrawString(550,420,"Score",colors[MISTY_ROSE]);

        }
    
