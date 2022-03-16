#include "board.h"
#include <iostream>
using namespace std;

board::board() {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			if (i % 2 == 1)
				brd[i][j] = factory.createTiles("R", i, j);
			else
				brd[i][j] = factory.createTiles("T", i, j);
		}
}
tiles* board::getTiles(int x, int y) {
	return brd[x][y];
}