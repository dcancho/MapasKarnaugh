#include "Funcion.h"
#include <vector>

using namespace std;

enum Tokens
{
    OPEN_PARENTHESIS,           // (
    CLOSE_PARENTHESIS,          // )
    AND,                        // &&
    OR,                         // ||
    NOT,                        // ~
    IF,                         // ->
    ONLY_IF,                    // <->
    TRUE,                       // T
    FALSE,                      // F
    VARIABLE_A,                 // A
    VARIABLE_B,                 // B
    VARIABLE_C,                 // C
    VARIABLE_D,                 // D
    EQUIVALENT                  // ===
};

static class Formula
{
    vector<Tokens> Tokenize(string formula)
    {
        vector<Tokens> tokens;
        for (int i = 0; i < formula.length(); i++)
        {
            if (formula[i] == '(')
            {
                tokens.push_back(OPEN_PARENTHESIS);
            }
            else if (formula[i] == ')')
            {
                tokens.push_back(CLOSE_PARENTHESIS);
            }
            else if (formula[i] == '&' && formula[i + 1] == '&')
            {
                tokens.push_back(AND);
                i++;
            }
            else if (formula[i] == '|' && formula[i + 1] == '|')
            {
                tokens.push_back(OR);
                i++;
            }
            else if (formula[i] == '~')
            {
                tokens.push_back(NOT);
            }
            else if (formula[i] == '-' && formula[i + 1] == '>')
            {
                tokens.push_back(IF);
                i++;
            }
            else if (formula[i] == '<' && formula[i + 1] == '-' && formula[i + 2] == '>')
            {
                tokens.push_back(ONLY_IF);
                i++; i++;
            }
            else if (formula[i] == 'T')
            {
                tokens.push_back(TRUE);
            }
            else if (formula[i] == 'F')
            {
                tokens.push_back(FALSE);
            }
            else if (formula[i] == 'A')
            {
                tokens.push_back(VARIABLE_A);
            }
            else if (formula[i] == 'B')
            {
                tokens.push_back(VARIABLE_B);
            }
            else if (formula[i] == 'C')
            {
                tokens.push_back(VARIABLE_C);
            }
            else if (formula[i] == 'D')
            {
                tokens.push_back(VARIABLE_D);
            }
            else if (formula[i] == '=' && formula[i + 1] == '=' && formula[i + 1] == '=')
            {
                tokens.push_back(EQUIVALENT);
                i++; i++;
            }
            else
            {
                cout << "Invalid token at position " << i << endl;
            }
        }
        return tokens;
    }


};