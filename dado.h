#ifndef _ICOSAHEDRON_H_
#define _ICOSAHEDRON_H_

#include <random>

class icosahedron {
	private:
		int valor;
		std::random_device rd;
		std::default_random_engine gen;
		std::uniform_int_distribution<> dis;
	public:
		icosahedron ();
		int jogar();
		int getValor();
};

#endif
