#include<iostream>
#include<cstdlib>
#include<ctime>
#include<conio.h>
#include<windows.h>

using namespace std;

const char Border = '|', Player = '$', Space = ' ';
const int row = 30, col = 20;

int obstacles1 = 1, obstacles2 = 1; // giving a random number for placement
int temprow = 1; // used for coins
int temprow1 = 2; // used for hurdeles 

void GameBoard(char array[row][col], float manRow, float manCol, int life)
{
    system("CLS");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i != row && j == 0)
            {
                array[i][j] = Border;
            }
            else if (j == col - 1)
            {
                array[i][j] = Border;
            }
            else if (i == manRow && j == manCol)
            {
                array[i][j] = Player;
            }
            else
            {
                array[i][j] = ' ';
            }
        }
    }
}
void CharacterMovement(float& manRow, float& manCol)
{
    // kbhit is a function used for taking keyboard input

    if (_kbhit())
    {
        char input = _getch();
        switch (input)
        {
        case 'w': // Move up
            if (manRow > 1)
                manRow--;
            break;
        case 'a': // Move left
            if (manCol > 1)
                manCol--;
            break;
        case 's': // Move down
            if (manRow < row - 2)
                manRow++;
            break;
        case 'd': // Move right
            if (manCol < col - 2)
                manCol++;
            break;
        case ' ': // Jump
            if (manRow > 2)
                manRow = manRow - 2;

            break;
        }
    }
}

void Coins(char array[][col], int row, int col)
{
    if (temprow == row + 1)
    {
        srand(time(0));
        obstacles1 = 1 + rand() % (col - 2);
        temprow = 1;
    }
    array[temprow][obstacles1] = '+';
    temprow++;

}
void Hurdeles(char array[][col], int row, int col)
{
    if (temprow1 == row + 1)
    {
        srand(time(0));
        obstacles2 = 1 + rand() % (col - 2);
        temprow1 = 2;
    }
    array[temprow1][obstacles2] = '*';
    temprow1++;

}
void PrintingGame(char array[row][col])
{
    int points = 0, life = 3;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j];
        }
        cout << endl;
    }
    cout << "points:" << points << endl;
    cout << "life:" << life;
}


int main()
{
    char array[row][col];
    float manRow = row - 2, manCol = col / 2; // placing the player near the bottom center of the screen
    int points = 0, life = 3;

    while (life != 0)
    {

        GameBoard(array, manRow, manCol, life);
        CharacterMovement(manRow, manCol);
        Coins(array, row, col);
        Hurdeles(array, row, col);
        PrintingGame(array);
        Sleep(500);
    }

}
