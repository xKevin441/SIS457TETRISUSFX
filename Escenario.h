#pragma once
#include <iostream>
#include <string>
using namespace std;

class Escenario
{
private:
	string nombre = "a";
	int alto;
	int ancho;
	string tipoBorde;
	string fondo;
	int puntaje;
	int mejorpuntaje;
	int nivel;
	int numeroVidas;
	string forma;

public:
	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre()
};

