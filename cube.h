#ifndef _CUBE_H_
#define _CUBE_H_

#include <random>

class cube {
	private:
		int valor;
		std::random_device rd;
		std::default_random_engine gen;
		std::uniform_int_distribution<> dis;
	public:
		cube ();
		int jogar();
		int getValor();
};

#endif
