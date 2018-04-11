#include <random>

#include "icosahedron.h"

icosahedron::icosahedron():rd(), gen(rd()), dis(1, 3) {
	valor = std::round(dis(gen));
}

int 
icosahedron::jogar() {
	valor = std::round(dis(gen));
	return valor;
}

int 
icosahedron::getValor() {
	return valor;
}
