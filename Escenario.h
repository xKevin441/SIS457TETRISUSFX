#pragma once
#include <iostream>
#include <string>
#include "Tablero.h"
using namespace std;

class Escenario
{
private:
	string nombre;
	int alto;
	int ancho;
	string tipoBorde;
	string fondo;
	int puntaje;
	int mejorpuntaje;
	int nivel;
	int numeroVidas;
	Tablero tablero;

public:
	Escenario() {
		puntaje = 0;
	}

	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }

	void setTablero(Tablero _tablero) { tablero = _tablero; }
	Tablero getTablero() { return tablero; }
};

