#pragma once
#include <iostream>
#include <string>
#include "Bloque.h"
using namespace std;

class Tablero
{
private:
	string nombre;
	int filaLimiteSuperior;
	int filaActual;
	int numeroFilasEliminadas;
	Bloque bloqueSiguiente;


	//Metodos
public:
	Tablero() {
		nombre = "tablero sin nombre";
	}

	void incializarTablero();

	bool rotarBloque();
	void bajarBloque();
	bool moverBloque(int direccion);


	//Metodos accesores
	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }
};

