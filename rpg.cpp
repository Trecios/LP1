#include "rpg.h"
#include <string>
	using namespace std;
#include <random>
#include "tetrahedron.h"
#include "cube.h"
#include "octahedron.h"
#include "dodecahedron.h"
#include "icosahedron.h"

rpg::rpg(string id_)
{
	m_id = id_;
	m_valorAgregado = 0;
}

rpg::~rpg()
{

}

string rpg::getId()
{
	return m_id;
}

int rpg::getValorAgregado()
{
	return m_valorAgregado;
}

int rpg::throwDice()
{
	tetrahedron t;
	cube c;
	octahedron o;
	dodecahedron d;
	icosahedron i;
	m_valorAgregado = t.jogar();
	m_valorAgregado = c.jogar();
	m_valorAgregado = o.jogar();
	m_valorAgregado = d.jogar();
	m_valorAgregado = i.jogar();
	return m_valorAgregado;
}