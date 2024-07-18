
#include<iostream>
using namespace std;

int gamePlay();
int checkWin(char board[3][3]);

int main(){
    //declare variables
    int win;
    int counter = 1;

    system("cls");
    cout << "X - Player 1" << endl
         << "Y - Player 2" << endl;
    cout << "Player 1 Goes First:\n";

    gamePlay();

    return 0;

}

int gamePlay()
{
    int player, userInput, win;
    int counter = 1;
    char xo, board[3][3];
    
    do 
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(i == 0 && j == 0 && board[i][j] != 'O' && board[i][j] != 'X')
                {
                    if(userInput == 1)
                    {
                        board[0][0] = xo;
                        userInput = 10;
                    }                    
                    else
                        board[i][j] = '1';
                }
                else if(i == 0 && j == 1 && board[i][j] != 'O' && board[i][j] != 'X')
                {
                    if(userInput == 2)
                    {
                        board[0][1] = xo;
                        userInput = 10;
                    }          
                    else
                        board[i][j] = '2';
                }
                else if(i == 0 & j == 2 && board[i][j] != 'O' && board[i][j] != 'X')
                {
                    if(userInput == 3)
                    {
                        board[0][2] = xo;
                        userInput = 10;
                    }
                    else
                        board[i][j] = '3';
                }
                else if(i == 1 && j == 0 && board[i][j] != 'O' && board[i][j] != 'X')
                {
                    if(userInput == 4)
                    {
                        board[1][0] = xo;
                        userInput = 10;
                    }
                    else
                        board[i][j] = '4';
                }
                else if(i == 1 && j == 1 && board[i][j] != 'O' && board[i][j] != 'X')
                {
                    if(userInput == 5)
                    {
                        board[1][1] = xo;
                        userInput = 10;
                    }
                    else
                        board[i][j] = '5';
                }
                else if(i == 1 && j == 2 && board[i][j] != 'O' && board[i][j] != 'X')
                {
                    if(userInput == 6)
                    {         
                        board[i][j] = xo;
                        userInput = 10;
                    }
                    else
                        board[i][j] = '6';
                }
                else if(i == 2 && j == 0 && board[i][j] != 'O' && board[i][j] != 'X')
                {
                    if(userInput == 7)
                    {
                        board[2][0] = xo;
                        userInput = 10;
                    }
                    else
                        board[i][j] = '7';
                }
                else if(i == 2 && j == 1 && board[i][j] != 'O' && board[i][j] != 'X')
                {
                    if(userInput == 8)
                    {
                        board[2][1] = xo;
                        userInput = 10;
                    }
                    else
                        board[i][j] = '8';
                }
                else if(i == 2 && j == 2 && board[i][j] != 'O' && board[i][j] != 'X')
                {
                    if(userInput == 9)
                    {
                        board[2][2] = xo;
                        userInput = 10;
                    }
                    else
                    board[i][j] = '9';
                }
            
                    cout << " | " << board[i][j] << " | ";
            }    
                cout << endl;
            }
        cout << endl;
        counter++;
        win = checkWin(board);

        if(counter % 2 == 0)
            player = 1;
        else
            player = 2;
        if(player == 1)
            xo = 'X';   
        else
            xo = 'O';

        if(win == 0)
        {
        cout << xo << " - Enter where you want to go(1-9): ";
        cin >> userInput;
        }
    } while(win == 0);

    return 1;
}

int checkWin(char board[3][3]){

    int win = 0;

    if(board[0][0] == board[0][1] && board[0][1] == board[0][2])
    {
        win = 1;
        if(board[0][0] == 'X')
            cout << "Player 1 Wins!";
        else
            cout << "Player 2 Wins!";

    }
    else if(board[1][0] == board[1][1] && board[1][1] == board[1][2])
    {
        win = 1;
        if(board[1][0] == 'X')
            cout << "Player 1 Wins!";
        else
            cout << "Player 2 Wins!";
    }
    else if(board[2][0] == board[2][1] && board[2][1] == board[2][2])
    {
        win = 1;
        if(board[2][0] == 'X')
            cout << "Player 1 Wins!";
        else
            cout << "Player 2 Wins!";
    }
    else if(board[0][0] == board[1][0] && board[1][0] == board[2][0])
    {
        win = 1;
        if(board[0][0] == 'X')
            cout << "Player 1 Wins!";
        else
            cout << "Player 2 Wins!";
    }
    else if(board[0][1] == board[1][1] && board[1][1] == board[2][1])
    {
        win = 1;
        if(board[0][1] == 'X')
            cout << "Player 1 Wins!";
        else
            cout << "Player 2 Wins!";
    }
    else if(board[0][2] == board[1][2] && board[1][2] == board[2][2])
    {
        win = 1;
        if(board[0][2] == 'X')
            cout << "Player 1 Wins!";
        else
            cout << "Player 2 Wins!";
    }
    else if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        win = 1;
        if(board[0][0] == 'X')
            cout << "Player 1 Wins!";
        else
            cout << "Player 2 Wins!";
    }
    else if(board[0][2] == board[1][1] && board[1][1] == board[0][2])
    {
        win = 1;
        if(board[0][2] == 'X')
            cout << "Player 1 Wins!";
        else
            cout << "Player 2 Wins!";
    }
    else
    {
        win = 0;
    }

    return win;
}