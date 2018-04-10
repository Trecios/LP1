#include <iostream>

#include "sapo.h"

int Sapo::m_distancia_total = 50;

int main(int argc, char const *argv[])
{
	Sapo s1("Flash");
	Sapo s2("Mercurio");
	Sapo s3("SuperMan");
	
	bool ganhou = false;
	Sapo * vencedor;

	int rodada = 0;

	while (!ganhou) {
		rodada++;
		std::cout << "--------------- RODADA " << rodada << " -------------------" << std::endl;

		s1.pular();
		s1.showStatus();
		if (!ganhou && s1.getDistancia() >= Sapo::getDistanciaTotal()) {
			ganhou = true;
			vencedor = &s1;
		}
		s2.pular();
		s2.showStatus();
		if (!ganhou && s2.getDistancia() >= Sapo::getDistanciaTotal()) {
			ganhou = true;
			vencedor = &s2;
		}
		s3.pular();
		s3.showStatus();
		if (!ganhou && s3.getDistancia() >= Sapo::getDistanciaTotal()) {
			ganhou = true;
			vencedor = &s3;
		}
	}
	std::cout << "--------------------------- FIM DO JOGO -------------------------" << std::endl;

	std::cout << "Eu, " << vencedor->getId() 
			<< ", sou o vencedor com " << vencedor->getPulos() 
			<< " pulos e uma distancia total de " << vencedor->getDistancia() 
			<< "m!! Claro!!!" << std::endl;

	return 0;
}