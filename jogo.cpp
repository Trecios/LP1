#include "jogo.h"
#include "rpg.h"
#include<iostream>
	using namespace std;

jogo::jogo()
{
	m_total_jogadores = 0;
}

jogo::~jogo()
{

}

void jogo::addJogador(rpg * jogador_)
{
	if(m_total_jogadores < jogadores)
	{
		m_jogadores[m_total_jogadores++] = jogador_;
	}
}

int jogo::run()
{
	for(int i = 0; i < m_total_jogadores; i++)
	{
		m_jogadores[i]->throwDice();
		if(i == m_total_jogadores)
		{
			if(m_jogadores[i]->getValorAgregado() < m_jogadores[i-1]->getValorAgregado() && m_jogadores[i]->getValorAgregado() < m_jogadores[i-2]->getValorAgregado())
			{
				cout << m_jogadores[i]->getId() << "é o(a) mestre(a)!!" << endl;
			} 
			else if (m_jogadores[i-1]->getValorAgregado() < m_jogadores[i]->getValorAgregado() && m_jogadores[i-1]->getValorAgregado() < m_jogadores[i-2]->getValorAgregado())
			{
				cout << m_jogadores[i-1]->getId() << "é o(a) mestre(a)!!" << endl;
			}
			else
			{
				cout << m_jogadores[i-2]->getId() << "é o(a) mestre(a)!!" << endl;
			}
		}
	}
	return 0;
}