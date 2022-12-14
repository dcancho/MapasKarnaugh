#pragma once
//Jeremy
#include "Mapa.h"
#include "TablaVerdad.h"
#include "Formula.h"

/*
	Envia texto de funcion (a funcion)
	Recibe funcion simplificada (enviar a form)
	Recibe tabla y mapa (formato vector de filas) (enviar a form)
	Recibe agrupaciones (formato coord inicio,coord final) (enviar a form)
*/

class Control {
	TablaVerdad tablaVerdad;
	Mapa mapa;

	
public:
	Control();
	~Control();
	void EnviarTexto(String^ texto);
	void RecibirFuncionSimplificada(String^ texto);
	void RecibirTabla(String^ texto);
	void RecibirAgrupaciones(String^ texto);
	void Limpiar();
};
};