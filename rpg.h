#ifndef RPG_H
#define RPG_H
#include <string>
	using namespace std;
#include <random>
#include "tetrahedron.h"
#include "cube.h"
#include "octahedron.h"
#include "dodecahedron.h"
#include "icosahedron.h"

class rpg
{
	private:
		string m_id;
		int m_valorAgregado;
	public:
		rpg(string id_);
		~rpg();

		string getId();

		int getValorAgregado();

		int throwDice();
};

#endif