#include <random>

#include "cube.h"

cube::cube():rd(), gen(rd()), dis(1, 3) {
	valor = std::round(dis(gen));
}

int 
cube::jogar() {
	valor = std::round(dis(gen));
	return valor;
}

int 
cube::getValor() {
	return valor;
}
