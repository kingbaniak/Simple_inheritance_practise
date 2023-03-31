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

int main()
{
	setlocale(LC_ALL, ""); 

	gracz* tryb; zadanie zad;
	npc lektor; sklep bazar; char wybor{}; char zakonczenie{}; kucwin kucwinmokke;

//ETAP 1 - wprowadzenie, wybor postaci, pierwsze pytanie --------------------
	lektor.wprowadzenie1();

//WYBOR POSTACI

	while (true)
	{
		cout << "\nWybierz tryb gry: ";
		cin >> wybor;
		if (wybor == 'b')
			{
				biznesmen trudny(5, 200, 300);
				tryb = &trudny;
				dlabiznesmena(trudny);
				break;
			}
		else if (wybor == 'm')
			{
				panmietek latwy(5, 50, 300);
				tryb = &latwy;
				dlamietka(latwy);
				break;
			}
		else
			{
				cout << "Taki tryb nie istnieje.";
			}
	}
	Sleep(3000);
	system("cls");

	//Dalsza czêœæ wprowadzenia, pierwsze pytanie, inwestycja w lechcoina, zakupy
	lektor.wprowadzenie2();
	zad.wybor1(*tryb);
	kucwinmokke.inwestycja();
	bazar.zakupy(*tryb);

//ETAP 2 - nazwanie imperium, zadanie 2, wybor zakonczenia, zakupy -------------------------------------------------------------
	kucwinmokke.budowa_imperium();
	zad.wybor2(*tryb);

	while (true) {
		cout << "Wybór: "; cin >> zakonczenie;
		system("cls");
		if (zakonczenie == 'a')
		{
			kucwinmokke.zawiedziony();
			cout << "\nWygl¹da na to, ¿e tutejsi biznesmeni nie przepadaj¹ za rz¹dem... Odnotowa³em znacz¹cy spadek klientów mojego sklepu.\n";
			lektor.janek_sasiewicz(2);
			tryb->monetyplus('a');
			cout << "\n\n~Ceny w kraju zaczely rosnac. Nied³ugo parówki nie bêd¹ ju¿ tak tanie.~\n\n";
			break;
		}
		else if (zakonczenie == 'b')
		{
			lektor.grzemiesz_brazowy(2);
		}
		else if (zakonczenie == 'c')
		{
			lektor.janek_sasiewicz(3);
			lektor.grzemiesz_brazowy(3);
			tryb->monetyplus('c');
			break;
		}
		else
		{
			cout << "Nie ma takiej odpowiedzi.";
		}
	}

	bazar.zakupy(*tryb);
//ETAP 3 - walka - zakup broni, trzy starcia, tekst koncowy, zliczenie punktów, mo¿liwoœæ wypisu punktów --------
	system("cls");
	zad.walka(zakonczenie);
	bazar.zakup_broni(*tryb, zakonczenie);
	tryb->starcie1(zakonczenie);
	Sleep(1000);
	tryb->starcie2(zakonczenie);
	Sleep(1000);
	tryb->starcie3(zakonczenie);
	Sleep(500);
	tryb->punkty();
	cout << endl;
	kucwinmokke.wypisz_zpliku();
}

void dlabiznesmena(biznesmen& x) //funkcja zaprzyjaŸniona do wypisu rzeczy posiadanych na start
{
	cout << "Oto trochê przedmiotów na start: ";
	cout << "Monety, które wzi¹³eœ z domu: " << x.monety << endl << "Parówki, które dosta³eœ od Kucwina: " << x.parowki << endl << "Si³a: " << x.sila << endl;
}
void dlamietka(panmietek& x)
{
	cout << "Oto trochê przedmiotów na start: ";
	cout << "Monety, które wzi¹³eœ z domu: " << x.monety << endl << "Parówki, które dosta³eœ od Kucwina:" << x.parowki << endl << "Si³a: " << x.sila << endl;
}