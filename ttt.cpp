#include "C:\Users\haydo\Desktop\VS\C++\ticTacToe\ticTacToe\ttt.hpp"

#include<iostream>
using namespace std;

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
