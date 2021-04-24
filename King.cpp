#include "king.h"
#include "chessPiece.h"

using namespace std;

king::king(string name, string type, int id) : chessPiece(name, type, id) {

}

bool king::move(int fromX, int fromY, int toX, int toY) {
	if ((fromX || fromY || toX || toY > 7) || (fromX || fromY || toX || toY < 0))
		return false;
	else if(abs(fromX - toX) == 1)
	return true;
}
