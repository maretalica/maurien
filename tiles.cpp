#include "tiles.h"

void tiles::setSymbol(char sym) {
	symbol = sym;
}
string tiles::getSymbol() {
	return symbol;
}
void tiles::setCoordinate(int X, int Y) {
	x = X;
	y = Y;
}
int tiles::getX() {
	return x;
}
int tiles::getY() {
	return y;
}