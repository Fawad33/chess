#include<iostream>

using namespace std;

class gameplay {
public:
	void playGame() {
		bool isBlackKingChecked = false, isWhiteKingChecked = false;
		int fromX, fromY, toX, toY;
		while (isBlackKingChecked == false && isWhiteKingChecked == false) {
			cout << "Whites Turn. \n Enter the co-ordinates from which you want to move: ";
			cin >> fromX;
			cin >> fromY;
			cout << "Enter the co-ordinates to which you want to move: ";
			cin >> toX;
			cin >> toY;

		}
	}
	
};