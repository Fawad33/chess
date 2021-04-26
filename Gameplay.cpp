#include<iostream>
#include "chessBoard.h"
#include"gameplay.h"

using namespace std;

extern chessBoard chessBoardObj;
void gameplay::display() {
	for (int i = 0; i < 8; i++) {
		cout << endl;
		for (int j = 0; j < 8; j++) {
			if (chessBoardObj.board[i][j] != nullptr) {
				cout << chessBoardObj.board[i][j]->getType() << chessBoardObj.board[i][j]->getName() << chessBoardObj.board[i][j]->getID() << " ";
			}
			else
				cout << "NULL ";
		}
	}
}

void gameplay::playGame() {
	bool isBlackKingChecked = false, isWhiteKingChecked = false;
	int fromX, fromY, toX, toY;
	string turn = "white";
	while (isBlackKingChecked == false && isWhiteKingChecked == false) {
		cout << turn << "'s Turn. \n Enter the co-ordinates from which you want to move: ";
		cin >> fromX;
		cin >> fromY;
		cout << "Enter the co-ordinates to which you want to move: ";
		cin >> toX;
		cin >> toY;
		//function to move to be added here. should return king check to be true or false
		if (chessBoardObj.board[fromX][fromY]->getType() != turn) {
			cout << "Select valid chess piece." << endl;
		}
		else if (chessBoardObj.board[fromX][fromY]->move(fromX, fromY, toX, toY) == true) {
			chessBoardObj.setBoardValue(fromX, fromY, toX, toY);
			if (turn == "white")
				turn = "black";
		}			
		else
			cout << "Invaild move, enter a valid move." << endl;
	}
}