#include "sapo.h"

#include <iostream>

Sapo::Sapo(std::string id_):m_distancia(0), m_pulos(0), rd(), gen(rd()), dis(1, SAPO_PULO_MAX) {
	m_id =id_;
}

Sapo::~Sapo(){}

std::string 
Sapo::getId(){
	return m_id;
}

void 
Sapo::setId(std::string id_){
	m_id = id_;
}

int 
Sapo::getDistancia(){
	return m_distancia;
}

int 
Sapo::getPulos(){
	return m_pulos;
}

int 
Sapo::getDistanciaTotal(){
	return m_distancia_total;
}

void 
Sapo::pular(){
	m_pulos++;
	m_distancia += std::round(dis(gen));
}

void 
Sapo::showStatus(){
	for (int i = 0; i < m_distancia; ++i)
	{
		std::cout << ".";
	}
	std::cout << m_id << "(" << m_distancia << "m)" << std::endl;
}
