#include <iostream>

#include "professor.h"

Professor::Professor(){

}

Professor::~Professor(){

}

string 
Professor::getNome(){
	return m_nome;
}

int 
Professor::getIdade(){
	return m_idade;
}

std::istream& 
operator>> (std::istream &i, Professor &p) { 
	std::cout << "Entre com o nome do professor: ";
	i >> p.m_nome; 
	std::cout << "Entre com a idade: ";
	i >> p.m_idade;
	return i;
}

std::ostream& operator<< (std::ostream &o, Professor const p) { 
	o << p.m_nome << " - " << p.m_idade;
	return o;
} 
