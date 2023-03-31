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
	cout << "\nKucwin-Mokke:Proszê pana, jak powiedzia³ wybitny krakowianin, Stanislaw Lem - na dnie oceanu w Rowie Mariañskim s¹ rurkowce...\nOne ¿yj¹ sobie bezpiecznie od milionow lat, i ¿yj¹ sobie.\nNiestety celem ¿ycia nie jest dobrze siê na¿reæ, celem ¿ycia nie jest bezpieczeñstwo...\nMnie uczono, za komuny to by³o, ale mnie uczono, ¿e kto nie ryzykuje ten nie je, a was siê uczy: przezorny zawsze ubezpieczony - tfu!\nNiestety, nie uda³o ci siê zbudowaæ paróweczkowego królestwa. Jesteœ zwyk³ym rurkowcem.\n";
	cout << "\n#################################################### PRZEGRANA ####################################################\n";
	
	fstream plik;
	plik.open("wyniki.txt", ios::out | ios::app);
	plik << "Przegrana przed koñcem gry - 0 pkt."<<endl;
	plik.close();
	
	exit(0);
}

void kucwin::inwestycja()
{
	cout << "\nUff! Po wysi³ku jaki w³o¿y³em w zadanie, poszed³em odpocz¹æ na ³awce. Podszed³ do mnie Juliusz Kucwin-Mokke.\n";
	cout << "Juliusz Kucwin-Mokke: Na dziœ wystarczy, dobra robota. Mam dla ciebie propozycjê nie do odrzucenia: Lechcoin idzie w górê jak szalony.\nZainwestuj, a nie po¿a³ujesz.";
	Sleep(1000);
	cout << "\n(Aby przejœæ dalej, zainwestuj w Lechcoina). Wpisz 'inwestuj': ";
	while (true) {
		cin >> wybor;
		if (wybor == "inwestuj")
		{
			cout << "\nGratulacje! Zakupi³eœ 100 lechcoinów.\n";
			Sleep(1000);
			system("cls");
			cout << "Wybra³em siê do sklepu, aby zakupiæ trochê towarów.\n";
			break;
		}
		else
		{
			cout << "Juliusz Kucwin-Mokke: Nie gadaj g³upot, lechcoin skoczy w przeci¹gu najbli¿szych 3 dni. Gwarantujê!\nWpisz 'inwestuj': ";
		}
	}
}
void kucwin::budowa_imperium()
{
	system("cls");
	cout << "\nJuliusz Kucwin-Mokke: Dobrze sobie radzisz. Wygl¹da na to, ¿e staæ ciê, aby zbudowaæ swoje parówkowe imperium.\nKurs Lechcoina w który zainwestowa³eœ skoczy³ w górê. Zatrudnisz pracowników, wiêc bêdziesz mia³ nieco wiêcej energii dla siebie.";
	cout << "\nDODAJ NAZWÊ IMPERIUM, ABY KONTYNUOWAÆ: ";
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
	cout << "\nJuliusz Kucwin-Mokke: Dobrze siê spisa³eœ. Mo¿e zobaczysz jak radzili sobie twoi poprzednicy?";
	cout << "\nWyœwietliæ resztê wyników?\nt - tak\nn - nie\nWybor: ";
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



