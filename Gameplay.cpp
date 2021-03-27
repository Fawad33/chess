#include<iostream>
#include "chessBoard.h"
#include"gameplay.h"

using namespace std;

chessBoard chessBoardObj;
void gameplay::display() {
	for (int i = 0; i < 8; i++) {
		cout << endl;
		for (int j = 0; j < 8; j++) {
			cout << chessBoardObj.board[i][j]->getType() << chessBoardObj.board[i][j]->getName() << chessBoardObj.board[i][j]->getID() << " ";
		}
	}
}
void gameplay::playGame() {
	bool isBlackKingChecked = false, isWhiteKingChecked = false;
	int fromX, fromY, toX, toY;
	while (isBlackKingChecked == false && isWhiteKingChecked == false) {
		cout << "White's Turn. \n Enter the co-ordinates from which you want to move: ";
		cin >> fromX;
		cin >> fromY;
		cout << "Enter the co-ordinates to which you want to move: ";
		cin >> toX;
		cin >> toY;
		//function to move to be added here. should return king check to be true or false
		chessBoardObj.setBoardValue(fromX, fromY, toX, toY);
		cout << "Black's Turn. \n Enter the co-ordinates from which you want to move: ";
		cin >> fromX;
		cin >> fromY;
		cout << "Enter the co-ordinates to which you want to move: ";
		cin >> toX;
		cin >> toY;
		//function to move to be added here
		chessBoardObj.setBoardValue(fromX, fromY, toX, toY);
	}
}