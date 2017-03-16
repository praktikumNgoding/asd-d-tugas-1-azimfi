// tugas no 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cmath>

using namespace std;

typedef struct bilangankompleks
{
	int bil;
	char kar;
};
bilangankompleks A, B, C, D;
void inisialisasi()
{

	A.bil = 2;
	B.bil = 4;
	B.kar = 'i';
	C.bil = 3;
	D.bil = 5;
	D.kar = 'i';

	cout << "A = " << A.bil << endl;
	cout << "B = " << B.bil << B.kar << endl;
	cout << "C = " << C.bil << endl;
	cout << "D = " << D.bil << D.kar << endl;
}
void penambahan() {
	cout << A.bil + C.bil << " + " << B.bil + D.bil << D.kar << endl;
}
void pengurangan() {
	cout << A.bil - C.bil << " + " << B.bil - D.bil << D.kar << endl;
}
void perkalian() {
	int h1 = (A.bil * C.bil) - (B.bil * D.bil);
	int h2 = (A.bil * D.bil) - (B.bil * C.bil);
	cout << h1 + h2 << D.kar << endl;
}
void pembagian() {
	int n, m, o, p;
	n = ((A.bil * C.bil) + (B.bil * D.bil));
	m = (pow(A.bil, 2) + pow(B.bil, 2));
	o = ((B.bil * C.bil) - (A.bil * D.bil));
	p = (pow(C.bil, 2) + pow(D.bil, 2));

	cout << ((n / m) + (o / p)) << D.kar << endl;
}
int main()
{
	inisialisasi();
	int pilih;
	do
	{
		cout << "\n MENU PILIHAN : " << endl;
		cout << "1. PENJUMLAHAN" << endl;
		cout << "2. PENGURANGAN" << endl;
		cout << "3. PERKALIAN" << endl;
		cout << "4. PEMBAGIAN" << endl;
		cout << "5. KELUAR" << endl;
		cout << "MENU : "; cin >> pilih;

		if (pilih == 1)
		{
			penambahan();
		}
		else if (pilih == 2)
		{
			pengurangan();
		}
		else if (pilih == 3)
		{
			perkalian();
		}
		else if (pilih == 4)
		{
			pembagian();
		}
		else if (pilih == 5)
		{
			break;
		}
		else
		{
			cout << "Pilihan hanya 1 - 5" << endl;
		}
	} while (true);
	return 0;
}
