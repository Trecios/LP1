#ifndef _OCTAHEDRON_H_
#define _OCTAHEDRON_H_

#include <random>

class octahedron {
	private:
		int valor;
		std::random_device rd;
		std::default_random_engine gen;
		std::uniform_int_distribution<> dis;
	public:
		octahedron ();
		int jogar();
		int getValor();
};

#endif
