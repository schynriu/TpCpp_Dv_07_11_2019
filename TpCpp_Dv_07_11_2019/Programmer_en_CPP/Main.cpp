#include <iostream>
#include <cstdlib>
#include "CPoint.h"


int main()
{
	Cpoint point(1, 2); 
	point.affiche () ;    // affichage point   
	point.deplace (2, 3) ; // d�placement point  
	point.affiche () ;         // affichage 2
}