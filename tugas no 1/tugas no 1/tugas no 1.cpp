// tugas no 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



#include <iostream>

using namespace std;

typedef struct  polinom
{
	int bil, pangkat;
	char x;
};
polinom H1[5], H2[6], H3[2];
polinom PENJUMLAH[8], PENGKALI[5 * 2], RUN[5];
int i = 0, ik = 0, ikur = 0;

void fung_H1()
{
	H1[0].bil = 6;
	H1[0].x = 'x';
	H1[0].pangkat = 8;

	H1[1].bil = 8;
	H1[1].x = 'x';
	H1[1].pangkat = 7;

	H1[2].bil = 5;
	H1[2].x = 'x';
	H1[2].pangkat = 5;

	H1[3].bil = 1;
	H1[3].x = 'x';
	H1[3].pangkat = 3;

	H1[4].bil = 15;

}
void fung_H2()
{
	H2[0].bil = 3;
	H2[0].x = 'x';
	H2[0].pangkat = 9;

	H2[1].bil = 4;
	H2[1].x = 'x';
	H2[1].pangkat = 7;

	H2[2].bil = 3;
	H2[2].x = 'x';
	H2[2].pangkat = 4;

	H2[3].bil = 2;
	H2[3].x = 'x';
	H2[3].pangkat = 3;

	H2[4].bil = 2;
	H2[4].x = 'x';
	H2[4].pangkat = 2;

	H2[5].bil = 10;
}
void fung_H3()
{

	H3[0].bil = 1;
	H3[0].x = 'x';
	H3[0].pangkat = 2;

	H3[1].bil = 5;
}
void pengisian_polinom() {
	fung_H1();
	fung_H2();
	fung_H3();
}
void penjumlahan() {
	for (int a = 0; a < sizeof(H1) / sizeof(polinom); a++)
	{
		for (int b = 0; b < sizeof(H2) / sizeof(polinom); b++)
		{
			if (H1[a].pangkat == H2[b].pangkat)
			{
				PENJUMLAH[i].bil = H1[a].bil + H2[b].bil;
				PENJUMLAH[i].x = H1[a].x;
				PENJUMLAH[i].pangkat = H1[a].pangkat;i++;
			}
		}
	}
	for (int a = 0; a < sizeof(H1) / sizeof(polinom); a++)
	{
		if (H1[a].pangkat != PENJUMLAH[0].pangkat)
		{
			if (H1[a].pangkat != PENJUMLAH[1].pangkat)
			{
				if (H1[a].pangkat != PENJUMLAH[2].pangkat)
				{
					PENJUMLAH[i].bil = H1[a].bil;
					PENJUMLAH[i].x = H1[a].x;
					PENJUMLAH[i].pangkat = H1[a].pangkat;
					i++;
				}
			}
		}
	}
	for (int a = 0; a < sizeof(H2) / sizeof(polinom); a++)
	{
		if (H2[a].pangkat != PENJUMLAH[0].pangkat)
		{
			if (H2[a].pangkat != PENJUMLAH[1].pangkat)
			{
				if (H2[a].pangkat != PENJUMLAH[2].pangkat)
				{
					PENJUMLAH[i].bil = H2[a].bil;
					PENJUMLAH[i].x = H2[a].x;
					PENJUMLAH[i].pangkat = H2[a].pangkat;
					i++;
				}
			}
		}
	}
	for (i = 0; i < sizeof(PENJUMLAH) / sizeof(polinom); i++)
	{
		cout << PENJUMLAH[i].bil << PENJUMLAH[i].x << PENJUMLAH[i].pangkat << endl;
	}
}
void pengurangan() {
	for (int a = 0; a < sizeof(H1) / sizeof(polinom); a++)
	{
		for (int b = 0; b < sizeof(H2) / sizeof(polinom); b++)
		{
			if (H1[a].pangkat == H2[b].pangkat)
			{
				PENJUMLAH[ikur].bil = H1[a].bil - H2[b].bil;
				PENJUMLAH[ikur].x = H1[a].x;
				PENJUMLAH[ikur].pangkat = H1[a].pangkat;
				ikur++;
			}
		}
	}
	for (int a = 0; a < sizeof(H1) / sizeof(polinom); a++)
	{
		if (H1[a].pangkat != PENJUMLAH[0].pangkat)
		{
			if (H1[a].pangkat != PENJUMLAH[1].pangkat)
			{
				if (H1[a].pangkat != PENJUMLAH[2].pangkat)
				{
					PENJUMLAH[ikur].bil = H1[a].bil;
					PENJUMLAH[ikur].x = H1[a].x;
					PENJUMLAH[ikur].pangkat = H1[a].pangkat;
					ikur++;
				}
			}
		}
	}
	for (int a = 0; a < sizeof(H2) / sizeof(polinom); a++)
	{
		if (H2[a].pangkat != PENJUMLAH[0].pangkat)
		{
			if (H2[a].pangkat != PENJUMLAH[1].pangkat)
			{
				if (H2[a].pangkat != PENJUMLAH[2].pangkat)
				{
					PENJUMLAH[ikur].bil = H2[a].bil;
					PENJUMLAH[ikur].x = H2[a].x;
					PENJUMLAH[ikur].pangkat = H2[a].pangkat;
					ikur++;
				}
			}
		}
	}
	for (ikur = 0; ikur < sizeof(PENJUMLAH) / sizeof(polinom); ikur++)
	{
		cout << PENJUMLAH[ikur].bil << PENJUMLAH[ikur].x << PENJUMLAH[ikur].pangkat << endl;
	}
}
void perkalian()
{
	for (int a = 0; a < sizeof(H1) / sizeof(polinom); a++)
	{
		for (int b = 0; b < sizeof(H3) / sizeof(polinom); b++)
		{
			PENGKALI[ik].bil = H1[a].bil * H3[b].bil;
			PENGKALI[ik].x = H1[a].x;
			PENGKALI[ik].pangkat = H1[a].pangkat + H3[b].pangkat;
			ik++;
		}
	}
	for (ik = 0; ik < sizeof(PENGKALI) / sizeof(polinom); ik++)
	{
		if (PENGKALI[ik].pangkat == 2)
		{
			PENGKALI[ik].x = 'x';
		}

		cout << PENGKALI[ik].bil << PENGKALI[ik].x << PENGKALI[ik].pangkat << endl;
	}
}
void turunan()
{
	for (int a = 0; a < sizeof(H2) / sizeof(polinom); a++)
	{
		if (H2[a].pangkat == 0)
		{
			break;
		}
		else
		{
			RUN[a].bil = H2[a].bil * H2[a].pangkat;
			RUN[a].x = 'x';
			RUN[a].pangkat = H2[a].pangkat - 1;
		}
	}
	for (int a = 0; a < sizeof(RUN) / sizeof(polinom); a++)
	{
		cout << RUN[a].bil << RUN[a].x << RUN[a].pangkat << endl;
	}
}
int main()
{
	pengisian_polinom();

	cout << "PENJUMLAHAN H1 + H2 : " << endl;
	penjumlahan();
	cout << "PENGURANGAN H1 - H2 : " << endl;
	pengurangan();
	cout << "PERKALIAN H1 * H2 : " << endl;
	perkalian();
	cout << "PERTURUNAN H2 : " << endl;
	turunan();
	return 0;
}
