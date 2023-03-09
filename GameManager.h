#pragma once
#include <iostream>
#include <string>
using namespace std;

class gameManager
{
private:
	bool iniciar;
	bool pausarJuego;

public:
	bool iniciarJuego();
	bool pausar();
	bool reiniciar();
	
};