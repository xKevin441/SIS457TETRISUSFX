#pragma once
#include <iostream>
#include <string>
using namespace std;

class Bloque {
private:
	int sentidoRotacion;
	int alto;
	int ancho;
	string color;
	float velocidad;
	int posicionX;
	int posicionY;
	string nombre;
	string forma;

public:
	void rotar(int angulo);
	void moverHorizaontalmente(int posicion);
	void acelerar(float velocidad);
};