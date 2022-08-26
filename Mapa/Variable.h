#include "Expresion.h"

namespace MapasKarnaugh
{
	class Variable : public Expresion
    {
    public:
		Variable(Valor val) : Expresion(val)
		{
		}
        bool Calcular() override
        {
            return this->value;
        }
        void AsignarValor(bool value)
        {
            if (value)
                this->value = TRUE;
            else
                this->value = FALSE;
        }
    };
}