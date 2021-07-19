//============================================================================
// Name        : .cpp
// Author      : Sibt ul Hussain
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Centipede...
//============================================================================

#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> 
#include <sstream>// for basic math functions such as cos, sin, sqrt
//#include "player.h"
#include "board.h"
#include "menu.h"
#include "highscore.h"
using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */


void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}


/*
 * Main Canvas drawing function.
 * */


Board b(8,8);
void GameDisplay()/**/{
	Highscore h;
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
//Fire Gun
	
	if(b.mouse==0)
	{

	menu m;
	//DrawSquare(50)
	m.creatmenu();
	}else if(b.mouse==1){
	b.drawboard();
	b.gemsfun();
	}
	else if(b.mouse==5){
		b.playerdisplay();
		b.chardisplay();
	}
	else if(b.mouse==2){
	
		 h.displayHscore();
		 	
	}
	else if(b.mouse==3){
		for(int i=0;i<600;i++){
            DrawSquare(0,i,10,colors[YELLOW]);
            DrawSquare(790,i,10,colors[YELLOW]);
        }
        for(int j=0;j<800;j++){
            DrawSquare(j,0,10,colors[YELLOW]);
            DrawSquare(j,590,10,colors[YELLOW]);
        }
		DrawString(390,400,"Setting",colors[DARK_SLATE_BLUE]);
		  DrawRoundRect(300.0,300.0,250,50,colors[DARK_RED],10.0);
        DrawString(390,320,"Sound",colors[MISTY_ROSE]);
		  DrawRoundRect(300.0,220.0,250,50,colors[DARK_RED],10.0);
        DrawString(390,235,"Mode",colors[MISTY_ROSE]);
		 DrawRoundRect(300.0,140.0,250,50,colors[DARK_RED],10.0);
		DrawString(390,155,"Back",colors[MISTY_ROSE]);	
		
	}
	if(b.mouse==4){
			 b.displaymode();
		}
		
	
	glutSwapBuffers(); // do not modify this line..
}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
			
	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
				
	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {

	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}
	if(key!=13){
		b.input(key);
		
	}
		
	if(key==13){
		b.mouse=1;
		}	


	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1000.0, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	//cout << x << " " << y << endl;
	//glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	//glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */

void MouseClicked(int button, int state, int x, int y) {
	static int i=0;

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
	
		if(x>=250 && x<=550 && y>=220 && y<=300 && b.mouse==0)
		{
		    b.mouse=5;
		}else if(x>=250 && x<=550 && y>=330 && y<=400 && b.mouse==0)
		{
		    b.mouse=2;
		}
		else if(x>=300 && x<=500 && y>=360 && y<=400 && b.mouse==5)
		{
		    b.mouse=1;
		}
		else if(x>=250 && x<=550 && y>=430 && y<=500 && b.mouse==0)
		{
		    b.mouse=3;
		}
		else if(x>=15 && x<=70 && y>=10 && y<=30 && b.mouse==1)
		{
		    b.mouse=0;
		}
		
		else if(x>=300 && x<=550 && y>=330 && y<=375 && b.mouse==3)
		{
		    b.mouse=4;
		}
		else if(x>=300 && x<=500 && y>=400 && y<=450 && b.mouse==4)
		{
		    b.mouse=3;
		}
		else if(x>=300 && x<=550 && y>=410 && y<=460 && b.mouse==3)
		{
		    b.mouse=0;
		}
			else if(x>=300 && x<=500 && y>=400 && y<=450 && b.mouse==2)
		{
		    b.mouse=0;
		}
		else if(x>=300 && x<510 && y>200 && y<250 && b.mouse==4)
		{
			  b.mouse=1;
			b.modesetting(x,y);
		  
			
		}
		else if(x>=300 && x<510 && y>305 && y<350 && b.mouse==4)
		{
			b.mouse=1;
		   b.modesetting(x,y);
		    
		}
		

		 if(b.mouse==1)
		{
			if(i==2){
				cout<<"First Gem:";
				//cout<<x<<" "<<y<<endl;
				b.playingfun(x,y);
				//b.Progressbar();
			}
			else if(i==4){
				//cout<<x<<" y"<<y<<endl;
				cout<<"Second Gem:";
				b.playingfun(x,y);
				
				i=0;
			}
			i+=1;
			
	}
	 else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	
		}
    glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {
	
	int width = 800, height = 600; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("OOP Project"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...
	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.
	
	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);
	glutPopWindow();
	glutSetWindowTitle("Candy crush");
	glutEstablishOverlay();
	glutMouseFunc(MouseClicked);

	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved);
	 // Mouse
	

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */
