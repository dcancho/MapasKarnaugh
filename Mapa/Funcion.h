#pragma once
#include <iostream>
#include "Expresion.h"

// Diego
using namespace std;

namespace MapasKarnaugh
{
	//((p || q) && (r && q) -> r) <-> s
	// Dada una funcion Booleana de 2, 3 o 4 variables
	/*
		Recibir texto
		Devolver resultados 0 y 1 (enviar a tabla de verdad)
		Devolver funcion simplificada (enviar a control)
	*/

	class Funcion : public Expresion
	{
	private:
		Expresion expresionA;	//obligatoria
		Expresion expresionB;	//opcional, no se usa cuando ~A
		Operador Op;	//&& || ~ <=> =>
	public:
		Funcion(Expresion expresionA, Expresion expresionB, Operador Op) : Expresion()
		{
			this->expresionA = expresionA;
			this->expresionB = expresionB;
			this->Op = Op;
		}
		Funcion(string formula)
		{
			string expAtemp = "";
			string expBtemp = "";
			bool open = false;
			for (int i = 0; i < formula.length(); i++)
			{
				if (formula[i] == '(')
				{
					open = true;
					if (open)
					{
						expAtemp += formula[i];
					}
				}
				if (formula[i] == ')')
				{
					open = false;
				}
			}
		}
		bool Calcular()
		{
			switch (Op)
			{
			case O:
				this->Valor = expresionA.Calcular() || expresionB.Calcular();
				break;
			case Y:
				this->Valor = expresionA.Calcular() && expresionB.Calcular();
				break;
			case NO:
				this->Valor = !expresionA.Calcular();
				break;
			case SI:
				this->Valor = (expresionA.Calcular() && expresionB.Calcular()) || !(expresionA.Calcular() && expresionB.Calcular()) || (!expresionA.Calcular() && expresionB.Calcular());
				break;
			case SOLO_SI:
				this->Valor = (expresionA.Calcular() && expresionB.Calcular()) || !(expresionA.Calcular() && expresionB.Calcular());
				break;
			}
			return this->Valor;
		}
	};
}