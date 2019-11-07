#include "CPoint.h"
#include <stdlib.h>
#include <cstdlib>
#include <iostream>

using namespace std ;

Cpoint::Cpoint(float abs, float ord) {
	x = abs; y = ord; 
}
void Cpoint::deplace(float nX, float nY) {
	x = x + nX; y = +nY; 
}

void Cpoint::affiche(){
	std::cout << "Mes coordonnées " << x << " " << y << "\n";
}
