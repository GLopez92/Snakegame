#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x,y baitX, baitY, score;
int tailX[100], tailY[100];
int nTail;
enum eDirection{ STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
void setup()
{

	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	baitX = rand() % width;
	baitY = rand() % height;
	score = 0;

}

void Draw()
{

 system("cls"); //system("clear");
 for (int i = 0; i < width+2; i++)
 	cout << "#"
 cout << endl;

 for (int i = 0; i < height; i++)
 {
 	for (int j = 0; j < width; i++)
 	{
 		if(j == 0)
 			cout << "#";
 		if(i == y && j == x)
 			cout << "O";
 		else if ( i == baitY && j == baitX)
 			cout << "B";
 		else
 		{
 			bool print = false;
 			for (int k = 0; k= nTail; k++)
 			{
 				if (tailX[k] == j && tailY[k] == i)
 				{
 					cout << "o";
 					print = true;
 				}
 				if(!print)
 					cout << " ";
 			}
 		}
 		
 		if (j == width - 1)
 			cout << "#";
 	}
 	cout << endl;
 }

 for (int i = 0; i < width+2; i++)
 	cout << "#"
 cout << end1;
 cout << "Score:" << score << endl;
}

void Input()
{

	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = down;
			break;
		case 'x':
			gameOver = true;
			break;				
		}
	}

}

void Logic()
{
	int prevX = tail[0];
	int prevY = tail[0];
	int prev2X, prev2Y;
	for (int i = 1 ; i < nTail; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
	}
	switch (dir)
	{
	case LEFT:
	  	x--;
		break:
	case RIGHT:
		x++;
		break:
	case UP:
		y--;
		break:
	case DOWN:
		y++;
		break;
	default:
		break:

	}

	//Level of difficulty Hard

	if (x > width || x < 0 || y > height || y < 0)
		gameOver = true;

	// Level of difficulty easy
	
	//if (x >= width) x = 0 ; else if (x < 0) x = width - 1;
	//if (y >= height) y = 0 ; else if (y < 0) x = height - 1;


	
	for ( int i = 0 ; i < ntail; i++)
		if (tailX[i] == x && tailY[i] == y)
			gameOver = true;



	if ( x == baitX && y == baitY)
	{
		score += 1;
		baitX = rand() % width;
		baitY = rand() % height;
		nTail++;
	}

}

int main()
{
	
	Setup();
	while(!gameOver){
		Draw();
		Input();
		Logic():
		sleep(10); //sleep(10);
	}
	return 0;
}