#pragma once
#include <iostream>
#include <string>
#include "Bloque.h"
using namespace std;

class Tablero
{
private:
	int filalimiteSuperior;
	int filaActual;
	int numeroFilasEliminadas;
	bloque bloqueSiguiente;
	int rotarBloque;
	Tablero tablero;


	//Metodos
public:
	void inicializarTablero();
	bool rotarBloque();
	void bajarBloque();	//lo baja de golpe
	bool moverBloque(int direccion);

};

