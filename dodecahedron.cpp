#include <random>

#include "dodecahedron.h"

dodecahedron::dodecahedron():rd(), gen(rd()), dis(1, 12) {
	valor = std::round(dis(gen));
}

int 
dodecahedron::jogar() {
	valor = std::round(dis(gen));
	return valor;
}

int 
dodecahedron::getValor() {
	return valor;
}
