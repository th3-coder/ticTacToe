
#include<iostream>
using namespace std;

int gamePlay();
int takeInput(char);
void invalidCheck(int&, bool);
char decidePlayer(int counter, int player);
void checkWin(char board[3][3], char, int&);


int main(){

    system("cls");
    cout << "X Goes First:\n";

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
        //bool invalid = false;
        //outputs array in a 3x3 fashion
        for(int i = 0; i < 3; i++) //columns - iterates 3 times total
        {
            for(int j = 0; j < 3; j++) //rows - iterates 3 times for every one loop of the first for loop
            {
                if(i == 0 && j == 0 && board[i][j] != 'O' && board[i][j] != 'X')
                {
                    if(userInput == 1)
                    {
                        board[0][0] = xo;
                        userInput = 10; //resets input
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
        
        checkWin(board, xo, win);
        xo = decidePlayer(counter, player);     
        if(!win)
            userInput = takeInput(xo);   
        //invalidCheck(counter, invalid);
    } while(win == 0);

    return 1;
}
char decidePlayer(int counter, int player){
    //makes decision for which players turn it is
    //uses counter which increments for every move
    if(counter % 2 == 0)
            return 'X';
        else
            return 'O';
}
int takeInput(char xo){
    int userInput;
        cout << xo << " Move - Enter where you want to go(1-9): ";
        cin >> userInput;
        return userInput;
}

void invalidCheck(int& counter, bool invalid){
    //check if X or O is already in position
    if(invalid){
        cout << "Invalid Move - Go again" << endl;
    
        counter--;
    }
}

void checkWin(char board[3][3], char xo, int& win){
    //takes the board, player character, and win signal as inputs
    //direct reference to win to change in memory
    int k = 0;
    if(board[0][0] == board[0][1] && board[0][1] == board[0][2])
    {
        
        if(board[0][0] == 'X')
            win = 1;
        else
            win = 2;

    }
    else if(board[1][0] == board[1][1] && board[1][1] == board[1][2])
    {
        if(board[1][0] == 'X')
            win = 1;
        else
            win = 2;
    }
    else if(board[2][0] == board[2][1] && board[2][1] == board[2][2])
    {
        if(board[2][0] == 'X')
            win = 1;
        else
            win = 2;
    }
    else if(board[0][0] == board[1][0] && board[1][0] == board[2][0])
    {   
        if(board[0][0] == 'X')
            win = 1;
        else
            win = 2;
    }
    else if(board[0][1] == board[1][1] && board[1][1] == board[2][1])
    {   
        if(board[0][1] == 'X')
            win = 1;
        else
            win = 2;
    }
    else if(board[0][2] == board[1][2] && board[1][2] == board[2][2])
    {   
        if(board[0][2] == 'X')
            win = 1;
        else
            win = 2;
    }
    else if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {   
        if(board[0][0] == 'X')
            win = 1;
        else
            win = 2;
    }
    else if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        if(board[0][2] == 'X')
            win = 1;
        else
            win = 2;
    }
    else
    {
        win = 0;
    }

    //checks for tie
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(board[i][j] == 'X' || board[i][j] == 'O')
                k++;
        }
    }
    if(win){
        cout << "---------- ";
        cout << xo << " Wins!";
        cout << " ----------";
        cout << endl;
    } else if(k > 8)
        cout << "whoops... Cats game" <<endl;
    
}
