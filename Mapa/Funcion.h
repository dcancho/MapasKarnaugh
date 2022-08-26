#pragma once
#include <iostream>
#include "Variable.h"

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
	enum Operador
	{
		O,
		Y,
		NO,
		SI,
		SOLO_SI
	};

	template <class T>
	class Funcion
	{
	private:
		T expresionA;	//obligatoria
		T expresionB;	//opcional, no se usa cuando ~A
		Operador Op;	//&& || ~ <=> ->
		Valor Value;	//Resultado de la evaluacion de la funcion. For defecto, NaV (Not a Value)

	public:
		Funcion(T expresionA, T expresionB, Operador Op)
		{
			this->expresionA = expresionA;
			this->expresionB = expresionB;
			this->Op = Op;
			this->Valor = NaV;
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