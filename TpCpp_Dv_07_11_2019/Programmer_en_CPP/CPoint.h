#pragma once

class Cpoint {
	private :
		float x, y;//coordonn�es 

public:
	Cpoint(float abs, float ord);   // constructeur   
	void deplace (float nX, float nY) ;  // deplacement  
	void affiche ();              // affichage
} ;