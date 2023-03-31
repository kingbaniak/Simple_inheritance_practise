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

void zadanie::wybor1(gracz& tryb) //Pocz¹tek gry - prowadzi do dwoch mozliwych sciezek; zadanie 1
{
	cout << "\nPostanowi³em przejœæ siê po mieœcie. Po chwili zaczepi³ mnie obcy cz³owiek.";
	Sleep(1000);
	cout << "\nSprzedawca parówek: Hej, m³odzieñcze! Widzê, ¿e jesteœ tu nowy. Mam dla ciebie propozycjê!";
	cout << "\nJa: (w myœlach) Móg³bym kupiæ trochê towaru..." << endl << "Ja: Co Pan proponuje?\n";
	cout << "Sprzedawca parówek: Mogê ci zwyczajnie sprzedaæ trochê parówek po promocyjnej cenie... Hmmm... \nZa twoje monety mogê daæ Ci 5 sztuk. Ale widzê, ¿e jesteœ bystrym ch³opakiem... Co powiesz na umowê?\n";
	cout << "Ja: Umowê?\n"; Sleep(500);
	cout << "Sprzedawca parówek: IdŸ do miejskiego ³amig³ówkarza, D¹bromira Jod³onierza - powiedz ¿e przyszed³eœ ode mnie,\na da ci 3x wiecej monet za wygran¹. Oddaj mi 1/3 wygranej, resztê mo¿esz zachowaæ.\nGwarantujê, ¿e jest to dobra inwestycja i pewny pieni¹dz. Pewny, jeœli odpowiesz prawid³owo, rzecz jasna...";
	cout << "\n\na) Kup parówkê - bêdziesz móg³ j¹ sprzedaæ z zyskiem.\nb) Umowa - dostaniesz monety, jeœli za³atwisz sprawy w mieœcie - pamiêtaj, nie bêdzie ³atwo!\nWybór: ";
	while (true)
	{
		cin >> wybor;
		if (wybor == 'a') //kupienie parowki w pozniejszej fazie gry dodaje ok. 2x wiecej monet ni¿ zosta³o wydane
		{
			cout << "Sprzedawca parówek: Dobrze. Oto twoje parówki. Baw siê dobrze!";
			tryb.zadanie1a(); //spotkanie Wbutaka ktory chce kupic parowki
			break;
		}
		else if (wybor == 'b')
		{
			cout << "Sprzedawca parówek: Œwietnie. Jeœli pójdziesz prosto, trafisz na targ. Tam na pewno znajdziesz D¹bromira.";
			tryb.zadanie1b(); //to zadanie dodaje wiecej monet i nie zabiera parowek
			cout << "\nPo wykonanym zadaniu poszed³em siê rozliczyæ ze sprzedawc¹.\n";
			break;
		}
		else
		{

			cout << "Nie rozumiem, ch³opcze... Nie mogê przystaæ na tê propozycjê. Wybierz coœ, co zaproponowa³em.\nWybór: ";
		}
	}
}
void zadanie::wybor2(gracz& tryb) 
{
	Sleep(1000);
	system("cls");
	cout << "\nBudowa mojego imperium powiod³a siê. Siedzia³em teraz za swoim biurkiem we w³asnym biurze. Odwiedzi³ mnie tu niespodziewany goœæ.\n";
	npc::grzemiesz_brazowy(1);
	cout << "\n(w myœlach) Wydaje siê, ¿e ten cz³owiek wyjawi mi sekrety tego miejsca...\n";
	tryb.zadanie2();

	cout << "\nPodpisa³em umowê z Grzemieszem. Ani siê obejrza³em, a do biura wszed³ kolejny mê¿czyzna.\n\n";
	npc::janek_sasiewicz(1);
	cout << "\na) ZgódŸ siê\nb) Porozmawiaj na ten temat z Br¹zowym\nc)Odmów\n";
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



