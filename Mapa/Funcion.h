#pragma once
//Diego
#include <iostream>
#include <vector>

using namespace std;
using namespace System;

//((p || q) && (r && q) -> r) <-> s
//Dada una funcion Booleana de 2, 3 o 4 variables

/*
	Recibir texto
	Devolver resultados 0 y 1 (enviar a tabla de verdad)
	Devolver funcion simplificada (enviar a control)
*/

enum Operador
{
	O,Y,NO,SI,SOLO_SI,
};

struct Proposicion
{
public:
	char varA;
	char varB;
	Operador Op;
};

class Funcion
{
	
};
/*
vector<int>Tabla2Verdad(vector<int>Contenedor) {
	cout << " P        Q" << endl;
	cout << " -------------" << endl;
	cout << "0   |  0 | [0] " << endl;
	cout << "0   |  1 | [1] " << endl;
	cout << "1   |  0 | [2] " << endl;
	cout << "1   |  1 | [3] " << endl;
	cout << "----------------" << endl;

	int n = 4, var;
	for (int i = 0; i < n; i++) {
		do {
			cout << "Ingrese el valor binario para [" << i << "]";
			cin >> var;
		} while (!(var == 0 || var == 1));
		Contenedor.push_back(var);
	}
	return Contenedor;
}

vector<int>Tabla3Verdad(vector<int>Contenedor) {
	cout << " P        Q" << endl;
	cout << " -------------" << endl;
	cout << "0   |  0 |  0  |[0] " << endl;
	cout << "0   |  0 |  1  |[1] " << endl;
	cout << "0   |  1 |  0  |[2] " << endl;
	cout << "0   |  1 |  1  |[3] " << endl;
	cout << "1   |  0 |  0  |[0] " << endl;
	cout << "1   |  0 |  0  |[1] " << endl;
	cout << "1   |  1 |  0  |[2] " << endl;
	cout << "1   |  1 |  1  |[3] " << endl;
	cout << "----------------" << endl;

	int n = 8, var;
	for (int i = 0; i < n; i++) {
		do {
			cout << "Ingrese el valor binario para [" << i << "]";
			cin >> var;
		} while (!(var == 0 || var == 1));
		Contenedor.push_back(var);
	}
	return Contenedor;

}

vector<int>Tabla4Verdad(vector<int>Contenedor) {
	cout << " P        Q" << endl;
	cout << " -------------" << endl;
	cout << "0   |  0 |  0  |  0  | [0] " << endl;
	cout << "0   |  0 |  0  |  1  | [1] " << endl;
	cout << "0   |  0 |  1  |  0  | [2] " << endl;
	cout << "0   |  0 |  1  |  1  | [3] " << endl;
	cout << "0   |  1 |  0  |  0  | [4] " << endl;
	cout << "0   |  1 |  0  |  1  | [5] " << endl;
	cout << "0   |  1 |  0  |  0  | [6] " << endl;
	cout << "0   |  1 |  1  |  0  | [7] " << endl;
	cout << "1   |  0 |  0  |  0  | [8] " << endl;
	cout << "1   |  0 |  0  |  1  | [9] " << endl;
	cout << "1   |  0 |  1  |  0  | [10] " << endl;
	cout << "1   |  0 |  1  |  1  | [11] " << endl;
	cout << "1   |  1 |  0  |  0  | [12] " << endl;
	cout << "1   |  1 |  0  |  1  | [13] " << endl;
	cout << "1   |  1 |  1  |  0  | [14] " << endl;
	cout << "1   |  1 |  1  |  1  | [15] " << endl;
	cout << "----------------" << endl;

	int n = 16, var;
	for (int i = 0; i < n; i++) {
		do {
			cout << "Ingrese el valor binario para [" << i << "]";
			cin >> var;
		} while (!(var == 0 || var == 1));
		Contenedor.push_back(var);
	}
	return Contenedor;

}

void Mapa4Karnau(vector<int>Contenedor) {
	vector<int>fila1, fila2, fila3, fila4;
	string f_simple = " ";

	for (short i = 0; i < 4; i++) {
		fila1.push_back(Contenedor[i]);
		fila1.push_back(Contenedor[i + 4]);
		fila1.push_back(Contenedor[i + (4 * 2)]);
		fila1.push_back(Contenedor[i + (4 * 3)]);

	}

	cout << "\t PQ \\ RS  |  00  |   01  |  11 |  10  |" << endl;
	cout << "\t -----------------------------------------" << endl;
	cout << "\t 00  | " << fila1[0] << "   | " << fila1[1] << "  | " << fila1[2] << " | " << fila1[3] << "  |  " << endl;
	cout << "\t     ---------------------------------------------" << endl;
	cout << "\t 01  | " << fila2[0] << "   | " << fila2[1] << "  | " << fila2[2] << " | " << fila2[3] << "  |  " << endl;
	cout << "\t     ---------------------------------------------" << endl;
	cout << "\t 11  | " << fila3[0] << "   | " << fila3[1] << "  | " << fila3[2] << " | " << fila3[3] << "  |  " << endl;
	cout << "\t     ---------------------------------------------" << endl;
	cout << "\t 10  | " << fila4[0] << "   | " << fila4[1] << "  | " << fila4[2] << " | " << fila4[3] << "  |  " << endl;
	cout << "\t     ---------------------------------------------" << endl;
	cout << "\n\n";

	cout << "\t PQ \\ RS     |  00   |   01  |  11  |  10   |" << endl;
	cout << "\t              -------------------------------" << endl;
	cout << " \t       00     |  [1]  | [2]   | [3]  |  [4]  |" << endl;
	cout << "\t              -------------------------------" << endl;
	cout << " \t       01     |  [5]  | [6]   | [7]  |  [8]  |" << endl;
	cout << " \t              -------------------------------" << endl;
	cout << " \t       11     |  [9]  | [10]  | [11] |  [12] |" << endl;
	cout << " \t              -------------------------------" << endl;
	cout << " \t       10     |  [13] | [14]  | [15] |  [16] |" << endl;
	cout << " \t             --------------------------------" << endl;

	int auxi = 0;
	for (int i = 0; i < 4; i++) {
		auxi += fila1[i] + fila2[i] + fila3[i] + fila4[i];
	}
	//CASOS ESPECIALES DE MAPA
	switch (auxi) {

	}
}*/