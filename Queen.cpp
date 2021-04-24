#include "queen.h"
#include "chessPiece.h"

using namespace std;

queen::queen(string name, string type, int id) : chessPiece(name, type, id) {

}

bool queen::move(int fromX, int fromY, int toX, int toY) {
	return true;
}
