#include <iostream>
#include "board.h"
#include "util.h"
#include "time.h"
#include <fstream>
using namespace std;

     static int x2,y2;
    Board::Board(){
        row=0;
        col=0;
int** arr=new int*[row];
        for(int i=0;i<row;i++){
            arr[i]=new int[8];
        }
    }
    Board::Board(int x,int y){
        row=x;
        col=y;
        mouse=0;
        int** arr=new int*[row];
        for(int i=0;i<row;i++){
            arr[i]=new int[col];
        }
    }

    void Board::drawboard(){
        int** arr=new int*[row];
        for(int i=0;i<row;i++){
            arr[i]=new int[col];
        }
        
        DrawRoundRect(8,550,70,45,colors[DARK_RED]);
        DrawString(16,570,"Back",colors[MISTY_ROSE]);	
	//setname("bilal");
	//int countx=3,z=20,cs=20;
	DrawString(100,550,"Name:",colors[MISTY_ROSE]);
	DrawString(170,550,getname(),colors[MISTY_ROSE]);
	DrawString(380,550,"Score",colors[MISTY_ROSE]);
	DrawString(450,550,getCscore(),colors[MISTY_ROSE]);
    DrawString(630,550,"Level",colors[MISTY_ROSE]);
	DrawString(700,550,getlevel(),colors[MISTY_ROSE]);
    DrawRoundRect(700,8,90,45,colors[DARK_RED]);
    DrawString(720,20,"Hint",colors[MISTY_ROSE]);
    ofstream file;
  file.open ("name.txt", ios::out | ios::in | ios::app );
  // Writing on file
  file << getname() << " "<<getCscore()<<endl;

  file.close();
    int X;
        Progressbar();
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
        if(getlevel()==Num2Str(1)){
            X=0;
        }
        else if (getlevel()==Num2Str(2))
        {
           /// glutPostRedisplay();
            X=1;
        }
        
        srand(X);
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                 x=i*60;
                 y=j*60;
               a=rand()%4;
                if(a==0){
                DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
               arr[x2][y2]=0;
                }
                else if(a==1){
                DrawCircle(170+x,70+y,20,colors[DARK_RED]);
                arr[x2][y2]=1;
                }
                else if(a==2){
                DrawTriangle( 150+x, 50+y , 190+x, 50+y , 170+x , 90+y, colors[DARK_ORANGE] ); 
                arr[x2][y2]=2;
                }
                else if(a==3){
                DrawRoundRect(150+x,50+y,40,30,colors[BLUE]);
                arr[x2][y2]=3;
                }
               //cout<<arr[i][j]<<endl;
                c++;
            }
            d++;
             
        }
        
    
    }
   void Board::playingfun(int x,int y){
       
        int** arr=new int*[row];
        for(int i=0;i<row;i++){
            arr[i]=new int[col];
        }
             int i,j;
             int a,b;
             a=(x-150+20)/60;
             b=(y-90+20)/60;
             x2=a;y2=b;
             srand(0);  
                    cout<<a<<" "<<b<<endl;
                   for(int i=0;i<col;i++){
                       for(int j=0;j<row;j++){
                           
                          int z;
                           z=rand()%4;
                           arr[i][7-j]=z;
                       }
                   }
                 //cout<<arr[a][b]<<endl;
                i=x2;j=y2;
                     
                   if(i==col){
                        if(j==0){
                             if(arr[i][j]==arr[i-1][j] && arr[i-1][j]==arr[i-2][j]){
                                 

                        }
                            else if(arr[i][j]==arr[i][j+1] && arr[i][j+1]==arr[i][j+2]){
                            //gemsfun();
                        }
                        }
                         else if(j==row){
                             if(arr[i][j]==arr[i-1][j] && arr[i-1][j]==arr[i-2][j]){

                        }
                            else if(arr[i][j]==arr[i][j-1] && arr[i][j-1]==arr[i][j-2]){
                            
                        }
                        }
                       else{
                        if(arr[i][j]==arr[i-1][j] && arr[i-1][j]==arr[i-2][j]){

                        }
                        else if(arr[i][j]==arr[i+1][j] && arr[i+1][j]==arr[i+2][j]){

                        }
                        else if(arr[i][j]==arr[i][j-1] && arr[i][j-1]==arr[i][j-2]){

                        }
                    }
                    }

                    else if(i==col-1){
                         if(arr[i][j]==arr[i-1][j] && arr[i-1][j]==arr[i-2][j]){

                        }
                        else if(arr[i][j]==arr[i][j+1] && arr[i+1][j]==arr[i][j+2]){

                        }
                        else if(arr[i][j]==arr[i-1][j] && arr[i][j]==arr[i+1][j]){

                        }
                   }

                     else if(i==0){
                         if(j==0){
                             if(arr[i][j]==arr[i+1][j] && arr[i+1][j]==arr[i+2][j]){

                        }
                        else if(arr[i][j]==arr[i][j+1] && arr[i][j+1]==arr[i][j+2]){

                        }
                         }
                        else if(j==row){
                            if(arr[i][j]==arr[i+1][j] && arr[i+1][j]==arr[i+2][j]){

                        }
                        else if(arr[i][j]==arr[i][j-1] && arr[i][j-1]==arr[i][j-2]){

                        }
                      } 
                        else{
                        if(arr[i][j]==arr[i][j-1] && arr[i][j-1]==arr[i][j-2]){

                        }
                        else if(arr[i][j]==arr[i][j+1] && arr[i][j+1]==arr[i][j+2]){

                        }
                        else if(arr[i][j]==arr[i+1][j] && arr[i+1][j]==arr[i+2][j]){
                        }
                        }
                     }
                   /*  }
                     
                    


                        else if(i==1){
                         if(arr[i][j]==arr[i-1][j] && arr[i][j]==arr[i+1][j]){

                        }
                        else if(arr[i][j]==arr[i][j+1] && arr[i][j+1]==arr[i][j+2]){

                        }
                        else if(arr[i][j]==arr[i][j-1] && arr[i][j-1]==arr[i][j-2]){

                        }
                    }
                    else if(j==row){
                         if(i==0){
                            if(arr[i][j]==arr[i][j-1] && arr[i][j-1]==arr[i][j-2]){

                            }
                            else if(arr[i][j]==arr[i+1][j] && arr[i+1][j]==arr[i+2][j]){

                            }
                        }
                       else{
                        if(arr[i][j]==arr[i-1][j] && arr[i][j]==arr[i+1][j]){

                        }
                        else if(arr[i][j]==arr[i][j+1] && arr[i][j+1]==arr[i][j+2]){

                        }
                       else if(arr[i][j]==arr[i][j-1] && arr[i][j-1]==arr[i][j-2]){

                        }
                    }
                    }

                    else if(j==row-1){
                         if(arr[i][j]==arr[i][j+1] && arr[i][j]==arr[i][j-1]){

                        }
                        else if(arr[i][j]==arr[i+1][j] && arr[i+1][j]==arr[i+2][j]){

                        }
                       /* else if(arr[i][j]==arr[i][j-1] && arr[i][j-1]==arr[i][j-2]){

                        }*/
                    
                   /*else{
                       if(arr[i][j]==arr[i+1][j] && arr[i+1][j]==arr[i+2][j]){
                           
                       }
                       else if(arr[i][j]==arr[i-1][j] && arr[i-1][j]==arr[i-2][j]){

                       }
                       else if(arr[i][j]==arr[i][j-1] && arr[i][j-1]==arr[i][j-2]){

                       }
                        else if(arr[i][j]==arr[i][j+1] && arr[i][j+1]==arr[i][j+2]){

                        }
                       
                }
                 
                
            }   
            
          }*/
     
     
   }       
      void Board::gemsfun(){
         
        int** arr=new int*[row];
        for(int i=0;i<row;i++){
            arr[i]=new int[col];
        }
        int x,y;
           int z,n;
          int a,b;
          x=x2*60;
          y=(7-y2)*60;
          
                 srand(0);  
                   for(int i=0;i<col;i++){
                       for(int j=0;j<row;j++){
                           
                       
                           z=rand()%4;
                           arr[i][7-j]=z;
                       }
                   }
                   //cout<<arr[x2][y2]<<endl;
        /*if(arr[y2][x2]==arr[y2+1][x2] && arr[y2+1][x2]==arr[y2+2][x2]){

        }  
        else if(arr[y2][x2]==arr[y2-1][x2] && arr[y2-1][x2]==arr[y2-2][x2]){

        }   
        else if(arr[y2][x2]==arr[y2][x2+1] && arr[y2][x2+1]==arr[y2][x2+2]){

        }   
        else if(arr[y2][x2]==arr[y2][x2-1] && arr[y2][x2-1]==arr[y2][x2-2]){

        }*/




         int a1=rand()%4;
            
      // arr[x2][y2]=a1;
      // cout<<arr[x2][y2]<<endl;
     // cout<<n<<endl;
     if(arr[x2][y2]==0){
             
         if(arr[x2][y2]==arr[x2+1][y2] && arr[x2+1][y2]==arr[x2+2][y2]){
                DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawSquare((150+x)+60,50+y,40,colors[DARK_GREEN]);
             DrawSquare((150+x)+120,50+y,40,colors[DARK_GREEN]);  
             incresescore();
             increselvl();    
                }

             /* else if(arr[x2][y2]==arr[x2-1][y2] && arr[x2-1][y2]==arr[x2-2][y2]){
                DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawSquare((150+x)-60,50+y,40,colors[DARK_GREEN]);
             DrawSquare((150+x)-120,50+y,40,colors[DARK_GREEN]);
                }
                
                 else if(arr[x2][y2]==arr[x2][y2+1] && arr[x2][y2+1]==arr[x2][y2+2]){
                 DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawSquare(150+x,(50+y)+60,40,colors[DARK_GREEN]);
             DrawSquare(150+x,(50+y)+120,40,colors[DARK_GREEN]);
                }
                else if(arr[x2][y2]==arr[x2][y2-1] && arr[x2][y2-1]==arr[x2][y2-2]){
                   DrawCircle(170+x,70+y,20,colors[DARK_RED]);
              DrawCircle(170+x,(70+y)-60,20,colors[DARK_RED]);
              DrawCircle(170+x,(70+y)-120,20,colors[DARK_RED]);
                }
                 else if(arr[x2][y2]==arr[x2-1][y2] && arr[x2][y2]==arr[x2+1][y2-2]){
                   DrawCircle(170+x,70+y,20,colors[DARK_RED]);
              DrawCircle((170+x)+60,70+y,20,colors[DARK_RED]);
              DrawCircle((170+x)-60,70+y,20,colors[DARK_RED]); 
                }
                 else if(arr[x2][y2]==arr[x2][y2-1] && arr[x2][y2]==arr[x2][y2+1]){
              DrawCircle(170+x,70+y,20,colors[DARK_RED]);
              DrawCircle(170+x,(70+y)+60,20,colors[DARK_RED]);
              DrawCircle(170+x,(70+y)-60,20,colors[DARK_RED]);
                }*/
        } 
      else if(arr[x2][y2]==1){ 
               if(arr[x2][y2]==arr[x2+1][y2] && arr[x2+1][y2]==arr[x2+2][y2]){
                 // 	arr[x2+1][y]=
             DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawCircle((170+x)+60,70+y,20,colors[DARK_RED]);
              DrawTriangle( (150+x)+120, 50+y , (190+x)+120, 50+y , (170+x)+120 , 90+y, colors[DARK_ORANGE] ); 
             arr[x2][y2]=0;
              arr[x2+1][y2]=0;
              arr[x2+2][y2]=0;
             incresescore();
             increselvl();
             
              }
        
              else if(arr[x2][y2]==arr[x2-1][y2] && arr[x2-1][y2]==arr[x2-2][y2]){
             DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawCircle((170+x)-60,70+y,20,colors[DARK_RED]);
            DrawTriangle( (150+x)-120, 50+y , (190+x)-120, 50+y , (170+x)-120 , 90+y, colors[DARK_ORANGE] ); 
             arr[x2][y2]=0;
              arr[x2+1][y2]=0;
               arr[x2+2][y2]=0;
              // Progressbar();
             incresescore();
             increselvl();
                }

              
               else if(arr[x2][y2]==arr[x2][y2+1] && arr[x2][y2+1]==arr[x2][y2+2]){
                    DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawCircle(170+x,(70+y)-60,20,colors[DARK_RED]);
             DrawSquare(150+x,(50+y)-120,40,colors[DARK_GREEN]);
             arr[x2][y2]=0;
              arr[x2+1][y2]=0;
               arr[x2+2][y2]=0;
              // Progressbar();
             incresescore();
             increselvl();
                
               }
                else if(arr[x2][y2]==arr[x2][y2-1] && arr[x2][y2-1]==arr[x2][y2-2]){
                        DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawCircle(170+x,(70+y)+60,20,colors[DARK_RED]);
             DrawSquare(150+x,(50+y)+120,40,colors[DARK_GREEN]);
             arr[x2][y2]=0;
              arr[x2+1][y2]=0;
               arr[x2+2][y2]=0;
              // Progressbar();
             incresescore();
             increselvl();
                }
            
     }
                       
        else if(arr[x2][y2]==2){
            
              if(arr[x2][y2]==arr[x2+1][y2] && arr[x2+1][y2]==arr[x2+2][y2]){
                 // 	arr[x2+1][y]=
             DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawCircle((170+x)+60,70+y,20,colors[DARK_RED]);
             DrawSquare((150+x)+120,50+y,40,colors[DARK_GREEN]);
             arr[x2][y2]=0;
              arr[x2+1][y2]=0;
              arr[x2+2][y2]=0;
             incresescore();
             increselvl();
             
              }
        
              else if(arr[x2][y2]==arr[x2-1][y2] && arr[x2-1][y2]==arr[x2-2][y2]){
             DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawCircle((170+x)-60,70+y,20,colors[DARK_RED]);
             DrawSquare((150+x)-120,50+y,40,colors[DARK_GREEN]);
             arr[x2][y2]=0;
              arr[x2+1][y2]=0;
               arr[x2+2][y2]=0;
              // Progressbar();
             incresescore();
             increselvl();
                }

              
               else if(arr[x2][y2]==arr[x2][y2+1] && arr[x2][y2+1]==arr[x2][y2+2]){
                    DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawCircle(170+x,(70+y)-60,20,colors[DARK_RED]);
             DrawSquare(150+x,(50+y)-120,40,colors[DARK_GREEN]);
             arr[x2][y2]=0;
              arr[x2+1][y2]=0;
               arr[x2+2][y2]=0;
              // Progressbar();
             incresescore();
             increselvl();
                
               }
                else if(arr[x2][y2]==arr[x2][y2-1] && arr[x2][y2-1]==arr[x2][y2-2]){
                        DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawCircle(170+x,(70+y)+60,20,colors[DARK_RED]);
             DrawSquare(150+x,(50+y)+120,40,colors[DARK_GREEN]);
             arr[x2][y2]=0;
              arr[x2+1][y2]=0;
               arr[x2+2][y2]=0;
              // Progressbar();
             incresescore();
             increselvl();
                }
        }
      
       else if(arr[x2][y2]==3){
            
              if(arr[x2][y2]==arr[x2+1][y2] && arr[x2+1][y2]==arr[x2+2][y2]){
                  	
             DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawCircle((170+x)+60,70+y,20,colors[DARK_RED]);
             DrawSquare((150+x)+120,50+y,40,colors[DARK_GREEN]);
             arr[x2][y2]=0;
              arr[x2+1][y2]=0;
               arr[x2+2][y2]=0;
              // Progressbar();
             incresescore();
             increselvl();
             
              }
        
              else if(arr[x2][y2]==arr[x2-1][y2] && arr[x2-1][y2]==arr[x2-2][y2]){
                DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawCircle((170+x)-60,70+y,20,colors[DARK_RED]);
             DrawSquare((150+x)-120,50+y,40,colors[DARK_GREEN]);
             arr[x2][y2]=0;
              arr[x2+1][y2]=0;
               arr[x2+2][y2]=0;
              // Progressbar();
             incresescore();
             increselvl();
                }

              
               else if(arr[x2][y2]==arr[x2][y2+1] && arr[x2][y2+1]==arr[x2][y2+2]){
                    DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawCircle(170+x,(70+y)-60,20,colors[DARK_RED]);
             DrawSquare(150+x,(50+y)-120,40,colors[DARK_GREEN]);
             arr[x2][y2]=0;
              arr[x2+1][y2]=0;
               arr[x2+2][y2]=0;
              // Progressbar();
             incresescore();
             increselvl();
                
               }
                else if(arr[x2][y2]==arr[x2][y2-1] && arr[x2][y2-1]==arr[x2][y2-2]){
                        DrawSquare(150+x,50+y,40,colors[DARK_GREEN]);
             DrawCircle(170+x,(70+y)+60,20,colors[DARK_RED]);
             DrawSquare(150+x,(50+y)+120,40,colors[DARK_GREEN]);
             arr[x2][y2]=0;
              arr[x2+1][y2]=0;
               arr[x2+2][y2]=0;
              // Progressbar();
             incresescore();
             increselvl();
                }
        } 
        
      }
         Board::~Board(){
             delete arr;
         }  
           
       
      