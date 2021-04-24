#include "knight.h"
#include "chessPiece.h"

using namespace std;

knight::knight(string name, string type, int id) : chessPiece(name, type, id) {

}

bool knight::move(int fromX, int fromY, int toX, int toY) {
	return true;
}
