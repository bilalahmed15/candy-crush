#include <iostream>
#include "board.h"
#include "util.h"
using namespace std;

     int x2,y2;
    Board::Board(){
         row=0;
        col=0;
int** array=new int*[row];
        for(int i=0;i<row;i++){
            array[i]=new int[8];
        }
    }
    Board::Board(int x,int y){
        row=x;
        col=y;
        int** array=new int*[row];
        for(int i=0;i<row;++i){
            array[i]=new int[col];
        }
    }
  
    void Board::drawboard(){
        DrawRoundRect(8,550,70,45,colors[DARK_RED]);
        DrawString(16,570,"Back",colors[MISTY_ROSE]);	
	setname("bilal");
	
	DrawString(100,550,"Name:",colors[MISTY_ROSE]);
	DrawString(170,550,getname(),colors[MISTY_ROSE]);
	DrawString(380,550,"Score",colors[MISTY_ROSE]);
	DrawString(450,550,getCscore(),colors[MISTY_ROSE]);
	DrawString(700,550,"Level 1",colors[MISTY_ROSE]);
    DrawRoundRect(700,8,90,45,colors[DARK_RED]);
    DrawString(720,20,"Hint",colors[MISTY_ROSE]);
    
        int a,c=1,d=1,x,y;
        	int count=0;
            int count1=0;
            int k=0;
             
        
         for(int i=0;i<600;i++){
            DrawSquare(0,i,10,colors[GREEN]);
            DrawSquare(790,i,10,colors[GREEN]);
        }
        for(int j=0;j<800;j++){
            DrawSquare(j,0,10,colors[GREEN]);
            DrawSquare(j,592,10,colors[GREEN]);
        }
        srand(0);
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                 x=i*60;
                 y=j*60;
               a=rand()%4;
                if(a==0){
                DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
               array[i][j]=0;
                }
                else if(a==1){
                DrawCircle(170+x,70+y,20,colors[DARK_RED]);
                array[i][j]=1;
                }
                else if(a==2){
                DrawTriangle( 150+x, 50+y , 190+x, 50+y , 170+x , 90+y, colors[DARK_ORANGE] ); 
                array[i][j]=2;
                }
                else if(a==3){
                DrawRoundRect(150+x,50+y,40,30,colors[BLUE]);
                array[i][j]=3;
                }
                //cout<<arr[i][j]<<endl;
                c++;
            }
            d++;
                count=0;
             
        }
        
                   

    }
  /* void Board::playingfun(int x,int y){
             int z;
             int a,b;
             a=(x-150+20)/60;
             b=(y-90+20)/60;
             x2=a;y2=b;
             for(int i=0;i<col;i++){
                 for (int j=0;j<row;j++)
                 {
                      cout<<arr[i][j]<<endl;
                     if(i==a && j==b){
                         
                    cout<<a<<" "<<b<<endl;
                   
                  cout<<arr[a][b]<<endl;
                     
                   
                       
     }
                 }
             }
   }      
      void Board::gemsfun(){
         
           
        int x,y;
          int a,b;
          x=x2*60;
          y=(7-y2)*60;
         

       





       // arr[y2][x2]=0;
       for(int i=0;i<col;i++){
           for(int j=0;j<row;j++){
        if(i==x2 && j==y2){
        
        
        }
           }
           }
       }*/
       Board::~Board(){
           
       }
      