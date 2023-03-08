#pragma once
#include <iostream>
#include <string>
using namespace std;

class bloque {
private:
	string forma;
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
};