#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Bloque {
private:
	int numeroTiles;
	int sentidoRotacion;
	vector < vector <bool> > apariencia;
	int angulo;
	bool movimiento;
	string color;
	float velocidad;
	int posicionX;
	int posicionY;

public:
	void rotar(int angulo);
	void moverHorizaontalmente(int posicion);
	void acelerar(float velocidad);
};