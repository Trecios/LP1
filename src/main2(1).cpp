#include "jogosapo.h"

int Sapo::m_distancia_total = 50;

int main(int argc, char const *argv[])
{
	// Instancia um jogo
	JogoSapo jogo(Sapo::getDistanciaTotal());
	// Adiciona os jogadores
	jogo.addSapo(new Sapo("Flash"));
	jogo.addSapo(new Sapo("Mercurio"));
	jogo.addSapo(new Sapo("Superman"));
	jogo.addSapo(new Sapo("Mario"));
	jogo.addSapo(new Sapo("Luigi"));
	// Executa o jogo
	jogo.run();

	return 0;
}