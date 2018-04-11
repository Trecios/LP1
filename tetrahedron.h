#ifndef _TETRAHEDRON_H_
#define _TETRAHEDRON_H_

#include <random>

class tetrahedron {
	private:
		int valor;
		std::random_device rd;
		std::default_random_engine gen;
		std::uniform_int_distribution<> dis;
	public:
		tetrahedron ();
		int jogar();
		int getValor();
};

#endif
