#include "C:\Users\haydo\Desktop\VS\C++\ticTacToe\ttt.hpp"

#include<iostream>
#include<vector>

using namespace std;

//declare functions

int main(){
    int win;
    //declare variables
    int user = 2, pos;
    int counter = 1;

    system("cls");
    cout << "X's Goes First:\n";

    gamePlay(user);
    
    return 0;

}
