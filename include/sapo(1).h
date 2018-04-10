#ifndef SAPO_H
#define SAPO_H

#include <string>
#include <random>

#define SAPO_PULO_MAX 3

class Sapo
{
private:
	std::string 	m_id;
	int 			m_distancia;
	int 			m_pulos;

	static int 		m_distancia_total;

	std::random_device 				rd; 
	std::default_random_engine 		gen; 
	std::uniform_int_distribution<> dis;
public:
	Sapo(std::string id);
	~Sapo();

	std::string getId();
	void setId(std::string id_);

	int getDistancia();

	int getPulos();

	static int getDistanciaTotal();

	void pular();

	void showStatus();
};

#endif
