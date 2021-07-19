#include <iostream>
using namespace std;
#include "util.h"

class Highscore{
int highscore;
public:
Highscore();
Highscore(int);
void sethighscore(int);
int gethighscore();
void displayHscore();
};