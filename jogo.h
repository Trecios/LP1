#ifndef JOGO_H
#define JOGO_H

#define jogadores 2

#include "rpg.h"

class jogo
{
	private:
		rpg * m_jogadores[jogadores];
		int m_total_jogadores;

	public:
		jogo();
		~jogo();

		void addJogador(rpg * jogador_);

		int run();
};

#endif