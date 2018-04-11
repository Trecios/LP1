#include <random>

#include "octahedron.h"

octahedron::octahedron():rd(), gen(rd()), dis(1, 8) {
	valor = std::round(dis(gen));
}

int 
octahedron::jogar() {
	valor = std::round(dis(gen));
	return valor;
}

int 
octahedron::getValor() {
	return valor;
}
