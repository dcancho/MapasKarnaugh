namespace MapasKarnaugh
{
    enum Valor
    {
        NaV = -1,
        FALSE = 0,
        TRUE = 1
    };

    class Variable
    {
    private:
        Valor Value;

    public:
        Variable()
        {
            Value = NaV;
        }
        bool Calcular()
        {
            return Value;
        }
        void AsignarValor(bool value)
        {
            if (value)
                Value = TRUE;
            else
                Value = FALSE;
        }
    };
}