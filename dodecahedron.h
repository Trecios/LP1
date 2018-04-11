#ifndef _DODECAHEDRON_H_
#define _DODECAHEDRON_H_

#include <random>

class dodecahedron {
	private:
		int valor;
		std::random_device rd;
		std::default_random_engine gen;
		std::uniform_int_distribution<> dis;
	public:
		dodecahedron ();
		int jogar();
		int getValor();
};

#endif
