#include "board.h"
#include "rocket.h"
#include "TNT.h"
#include "tiles.h";
#include <iostream>;
using namespace std;

int main() {
	board a;
	a.getTiles(1, 1)->explode();
	a.getTiles(2, 2)->explode();
}