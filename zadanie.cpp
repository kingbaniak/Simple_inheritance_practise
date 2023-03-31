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

void zadanie::wybor1(gracz& tryb) //Pocz�tek gry - prowadzi do dwoch mozliwych sciezek; zadanie 1
{
	cout << "\nPostanowi�em przej�� si� po mie�cie. Po chwili zaczepi� mnie obcy cz�owiek.";
	Sleep(1000);
	cout << "\nSprzedawca par�wek: Hej, m�odzie�cze! Widz�, �e jeste� tu nowy. Mam dla ciebie propozycj�!";
	cout << "\nJa: (w my�lach) M�g�bym kupi� troch� towaru..." << endl << "Ja: Co Pan proponuje?\n";
	cout << "Sprzedawca par�wek: Mog� ci zwyczajnie sprzeda� troch� par�wek po promocyjnej cenie... Hmmm... \nZa twoje monety mog� da� Ci 5 sztuk. Ale widz�, �e jeste� bystrym ch�opakiem... Co powiesz na umow�?\n";
	cout << "Ja: Umow�?\n"; Sleep(500);
	cout << "Sprzedawca par�wek: Id� do miejskiego �amig��wkarza, D�bromira Jod�onierza - powiedz �e przyszed�e� ode mnie,\na da ci 3x wiecej monet za wygran�. Oddaj mi 1/3 wygranej, reszt� mo�esz zachowa�.\nGwarantuj�, �e jest to dobra inwestycja i pewny pieni�dz. Pewny, je�li odpowiesz prawid�owo, rzecz jasna...";
	cout << "\n\na) Kup par�wk� - b�dziesz m�g� j� sprzeda� z zyskiem.\nb) Umowa - dostaniesz monety, je�li za�atwisz sprawy w mie�cie - pami�taj, nie b�dzie �atwo!\nWyb�r: ";
	while (true)
	{
		cin >> wybor;
		if (wybor == 'a') //kupienie parowki w pozniejszej fazie gry dodaje ok. 2x wiecej monet ni� zosta�o wydane
		{
			cout << "Sprzedawca par�wek: Dobrze. Oto twoje par�wki. Baw si� dobrze!";
			tryb.zadanie1a(); //spotkanie Wbutaka ktory chce kupic parowki
			break;
		}
		else if (wybor == 'b')
		{
			cout << "Sprzedawca par�wek: �wietnie. Je�li p�jdziesz prosto, trafisz na targ. Tam na pewno znajdziesz D�bromira.";
			tryb.zadanie1b(); //to zadanie dodaje wiecej monet i nie zabiera parowek
			cout << "\nPo wykonanym zadaniu poszed�em si� rozliczy� ze sprzedawc�.\n";
			break;
		}
		else
		{

			cout << "Nie rozumiem, ch�opcze... Nie mog� przysta� na t� propozycj�. Wybierz co�, co zaproponowa�em.\nWyb�r: ";
		}
	}
}
void zadanie::wybor2(gracz& tryb) 
{
	Sleep(1000);
	system("cls");
	cout << "\nBudowa mojego imperium powiod�a si�. Siedzia�em teraz za swoim biurkiem we w�asnym biurze. Odwiedzi� mnie tu niespodziewany go��.\n";
	npc::grzemiesz_brazowy(1);
	cout << "\n(w my�lach) Wydaje si�, �e ten cz�owiek wyjawi mi sekrety tego miejsca...\n";
	tryb.zadanie2();

	cout << "\nPodpisa�em umow� z Grzemieszem. Ani si� obejrza�em, a do biura wszed� kolejny m�czyzna.\n\n";
	npc::janek_sasiewicz(1);
	cout << "\na) Zg�d� si�\nb) Porozmawiaj na ten temat z Br�zowym\nc)Odm�w\n";
}

void zadanie::walka(char wybor) {
	if (wybor == 'a')
	{
		npc::janek_sasiewicz(4);
	}

	else if (wybor == 'c')
	{
		npc::grzemiesz_brazowy(4);
	}
}



