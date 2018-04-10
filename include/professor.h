#ifndef PROFESSOR_H
#define PROFESSOR_H

using std::string;

class Professor
{
private:
	string m_nome;
	int m_idade;
public:
	Professor();
	~Professor();

	string getNome();
	int getIdade();

	friend std::istream& operator>> (std::istream &i, Professor &p);

	friend std::ostream& operator<< (std::ostream &o, Professor const p);
	
};

#endif