#include <iostream>
#include <string>
	using namespace std;
#include "jogo.h"

int main(int argc, const char * argv[])
{
	jogo jogo;

	jogo.addJogador(new rpg("Alice"));
	jogo.addJogador(new rpg("Bob"));
	jogo.addJogador(new rpg("Carl"));
	jogo.run();

}