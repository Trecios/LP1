#include <random>

#include "tetrahedron.h"

tetrahedron::tetrahedron():rd(), gen(rd()), dis(1, 3) {
	valor = std::round(dis(gen));
}

int 
tetrahedron::jogar() {
	valor = std::round(dis(gen));
	return valor;
}

int 
tetrahedron::getValor() {
	return valor;
}
