#pragma once
//Carlos
#include <vector>
#include "Fila.h"
#include "Funcion.h"
using namespace std;
/*
	Recibe resultados (0 y 1)
	Devolver tabla de verdad (vector de n filas, de m longitud) (enviar a control)
*/
class TablaVerdad
{
private:
	vector<Fila> Filas;
public:
	TablaVerdad();
	~TablaVerdad();
};