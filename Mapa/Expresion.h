#pragma once

namespace MapasKarnaugh 
{
	enum Tokens
	{
		OPEN_PARENTHESIS,           // (
		CLOSE_PARENTHESIS,          // )
		AND,                        // &&
		OR,                         // ||
		NOT,                        // ~
		IF,                         // =>
		ONLY_IF,                    // <=>
		TRUE,                       // T
		FALSE,                      // F
		VARIABLE_A,                 // A
		VARIABLE_B,                 // B
		VARIABLE_C,                 // C
		VARIABLE_D,                 // D
		EQUIVALENT                  // ===
	};
	enum Operador
	{
		O,
		Y,
		NO,
		SI,
		SOLO_SI
	};
	enum Valor
	{
		NaV = -1,
		FALSE = 0,
		TRUE = 1
	};
	class Expresion
	{
	protected:
		Valor value;	//Resultado de la evaluacion de la funcion. For defecto, NaV (Not a Value)
	public:
		Expresion(Valor val = NaV)
		{
			value = val;
		}
		~Expresion() {}
		virtual bool Calcular() {}
	};
}
