#include <iostream>
#include <fstream> 
#include <stdio.h>
#include <windows.h>
#include <string>
#include "npc.h"
#include "gracz.h"
#include "kucwin.h"
#include "biznesmen.h"
#include "panmietek.h"
#include"sklep.h"
#include "zadanie.h"
using namespace std;

void sklep::zakupy(gracz&tryb)
{
	cout << "#################################### SKLEP ####################################\n\n";
	cout << "Pracownik sklepu: Witaj podró¿niku, w czym mogê pomóc?";
	cout << "\n(W sklepie mo¿esz wykonaæ tylko 10 transakcji!)\n";
	for (int i = 1; i<=10; i++)
	{
		cout << "Licznik transakcji:" << i;
		tryb.ekwipunek();
		tryb.cennik();
		cout << "\nd) WyjdŸ ze sklepu.";
		cout << "\nWybór: ";
		cin >> wybor;
		if (wybor == 'd') { "Pracownik sklepu: ¯egnaj podró¿niku, szerokiej drogi!\n"; break; }
		else
		{
			switch (wybor)
			{
			case 'a': tryb.handluj_parowkami(); Sleep(500); system("cls"); break;
			case 'b': tryb.kup_parowki(); Sleep(500); system("cls"); break;
			case 'c': tryb.sen(); Sleep(500); system("cls"); break;
			default: cout << "\nNie ma takiej opcji.\n"; Sleep(500); system("cls"); break;
			}
		}
		
	}
	cout << "Wyszed³eœ ze sklepu.\n";
	Sleep(1000);
	system("cls");
}
void sklep::zakup_broni(gracz& tryb, char bronwybor)
{
	cout << "\n\n#################################### SKLEP Z BRONIA ####################################\n\n";
	cout << "\nS³awomierz Mencel: Jaka broñ podró¿niku?\n";
	cout << "Zajrza³em do swojego ekwipunku.\n";
	tryb.ekwipunek();

	if (bronwybor == 'a')
	{
		gracz::cennikbroniA();
		while (true)
		{
			cout << "\nWybór: ";
			cin >> wybor;
			if (wybor == 'a' or wybor == 'b')
			{
				switch (wybor)
				{
				case 'a': tryb.bron1A(); break;
				case 'b': tryb.bron2A(); break;
				}
				break;
			}
			else
			{
			   cout << "\nNie ma takiej opcji.\n"; break;
			}
		}
	}
	else
	{
		gracz::cennikbroniC();
		while (true)
		{
			cout << "\nWybór: ";
			cin >> wybor;

			switch (wybor)
			{
			case 'a': tryb.bron1C(); break;
			case 'b': tryb.bron2C(); break;
			default: cout << "\nNie ma takiej opcji.\n"; break;
			}
			break;
		}
	}
	Sleep(1000);
	system("cls");
}
