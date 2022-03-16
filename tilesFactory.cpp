#include "tilesFactory.h"
#include <iostream>

tiles* tilesFactory::createTiles(string type, int X, int Y) {
	tiles* output;
	if (type == "T") {
		output = new TNT;
		output->setCoordinate(X, Y);
		return output;
	}
	else if (type == "R") {
		output = new rocket;
		output->setCoordinate(X, Y);
		return output;
	};
}