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

void kucwin::przegrana()
{
	system("cls");
	cout << "\n#################################################### PRZEGRANA ####################################################\n";
	cout << "\nKucwin-Mokke:Prosz� pana, jak powiedzia� wybitny krakowianin, Stanislaw Lem - na dnie oceanu w Rowie Maria�skim s� rurkowce...\nOne �yj� sobie bezpiecznie od milionow lat, i �yj� sobie.\nNiestety celem �ycia nie jest dobrze si� na�re�, celem �ycia nie jest bezpiecze�stwo...\nMnie uczono, za komuny to by�o, ale mnie uczono, �e kto nie ryzykuje ten nie je, a was si� uczy: przezorny zawsze ubezpieczony - tfu!\nNiestety, nie uda�o ci si� zbudowa� par�weczkowego kr�lestwa. Jeste� zwyk�ym rurkowcem.\n";
	cout << "\n#################################################### PRZEGRANA ####################################################\n";
	
	fstream plik;
	plik.open("wyniki.txt", ios::out | ios::app);
	plik << "Przegrana przed ko�cem gry - 0 pkt."<<endl;
	plik.close();
	
	exit(0);
}

void kucwin::inwestycja()
{
	cout << "\nUff! Po wysi�ku jaki w�o�y�em w zadanie, poszed�em odpocz�� na �awce. Podszed� do mnie Juliusz Kucwin-Mokke.\n";
	cout << "Juliusz Kucwin-Mokke: Na dzi� wystarczy, dobra robota. Mam dla ciebie propozycj� nie do odrzucenia: Lechcoin idzie w g�r� jak szalony.\nZainwestuj, a nie po�a�ujesz.";
	Sleep(1000);
	cout << "\n(Aby przej�� dalej, zainwestuj w Lechcoina). Wpisz 'inwestuj': ";
	while (true) {
		cin >> wybor;
		if (wybor == "inwestuj")
		{
			cout << "\nGratulacje! Zakupi�e� 100 lechcoin�w.\n";
			Sleep(1000);
			system("cls");
			cout << "Wybra�em si� do sklepu, aby zakupi� troch� towar�w.\n";
			break;
		}
		else
		{
			cout << "Juliusz Kucwin-Mokke: Nie gadaj g�upot, lechcoin skoczy w przeci�gu najbli�szych 3 dni. Gwarantuj�!\nWpisz 'inwestuj': ";
		}
	}
}
void kucwin::budowa_imperium()
{
	system("cls");
	cout << "\nJuliusz Kucwin-Mokke: Dobrze sobie radzisz. Wygl�da na to, �e sta� ci�, aby zbudowa� swoje par�wkowe imperium.\nKurs Lechcoina w kt�ry zainwestowa�e� skoczy� w g�r�. Zatrudnisz pracownik�w, wi�c b�dziesz mia� nieco wi�cej energii dla siebie.";
	cout << "\nDODAJ NAZW� IMPERIUM, ABY KONTYNUOWA�: ";
	cin.ignore(1000, '\n');
	getline(cin, nazwa_imperium);
	cout << "Nazwa imperium zmieniona na: " << nazwa_imperium;

	fstream plik;
	plik.open("wyniki.txt", ios::out | ios::app);
	plik << "Imperium: " << nazwa_imperium << endl;
	plik.close();
}
void kucwin::zawiedziony()
{
	cout << "Juliusz Kucwin-Mokke: Zawiodles Grzemiesza Brazowego. Twoje finanse nie pozwalaja na kontynuowanie waszej wspolpracy.\nTo panstwo legnie w gruzach przez takich jak ty!";
}

void kucwin::wypisz_zpliku()
{
	cout << "\nJuliusz Kucwin-Mokke: Dobrze si� spisa�e�. Mo�e zobaczysz jak radzili sobie twoi poprzednicy?";
	cout << "\nWy�wietli� reszt� wynik�w?\nt - tak\nn - nie\nWybor: ";
	cin >> wyborplik;
	if (wyborplik == 't')
	{
		cout << "Poprzednie wyniki:\n";

		plik.open("wyniki.txt", ios::in);

		if (plik.good() == false) {
			cout << "Nie mozna otworzyc pliku!"; system("pause > null"); exit(0);
		}
		while (!plik.eof())
		{
			getline(plik, tekst);
			cout << tekst << endl;
		}

		plik.close();
	}
	else { exit(0); }
}



