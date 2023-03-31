#include <iostream>
#include <fstream> 
#include <stdio.h>
#include <windows.h>
#include <string>
#include <cstdlib>
#include "npc.h"
#include "gracz.h"
#include "kucwin.h"
#include "biznesmen.h"
#include "panmietek.h"
#include"sklep.h"
#include "zadanie.h"
using namespace std;

panmietek::panmietek(int p, int m, int s) : parowki(p), monety(m), sila(s)
{
	cout << "\nWybrales postac Pana Mietka!\n\n";
}

void panmietek::pozyczka()
{
	monety -= 5;
}
void panmietek::monetyplus(char zakonczenie) {
	if (zakonczenie == 'a')
	{
		monety += 1000;
	}

	else if (zakonczenie == 'c')
	{
		monety += 700;
	}
}

void panmietek::ekwipunek()
{
	cout << "\nTwoj ekwipunek:\nMonety: " << monety << "\nParowki: " << parowki << "\nSila: " << sila << endl;
}
void panmietek::cennik()
{
	cout << "\na) Sprzedaj parówki (-5 parówek, +50 monet, -50 si³y)\n";
	cout << "b) Kup parówki (+5 parówek, -40 monet, -50 si³y)\n";
	cout << "c) IdŸ spaæ (-50 monet, uzupe³nienie si³y)";
	if (czypozyczka == 't')
	{
		panmietek::pozyczka();
	}
}
void panmietek::handluj_parowkami()
{
	if (parowki >= 5 && sila >= 50)
	{
		parowki -= 5;
		monety += 50;
		sila -= 50;
		cout << "Sprzeda³eœ parówki!";
	}
	else { cout << "Nie staæ ciê na tê transakcjê!"; }
}
void panmietek::kup_parowki()
{
	if (monety >= 40 && sila >= 50)
	{
	parowki += 5;
	monety -= 40;
	sila -= 50;
	cout << "Kupi³eœ parówki!";
	}
	else { cout << "Nie staæ ciê na tê transakcjê!"; }
}
void panmietek::sen()
{
	if (monety >= 50)
	{
	monety -= 50;
	sila = 300;
	cout << "Wyspa³eœ siê!";
	}
	else { cout << "Nie staæ ciê na tê transakcjê!"; }
}

void panmietek::bron1A()
{
	dawane_obrazenia = 10;
}
void panmietek::bron2A()
{
	if (monety >= 1500) {
		dawane_obrazenia = 1000;
		monety -= 1500;
	}
	else
	{
		cout << "Nie staæ ciê na tê broñ! Automatycznie zostanie zakupiona inna broñ.";
		panmietek::bron1A();
	}
}
void panmietek::bron1C()
{
	dawane_obrazenia = 50;
}
void panmietek::bron2C()
{
	if (monety >= 750) {
		dawane_obrazenia = 2000;
		monety -= 750;
	}
	else
	{
		cout << "Nie staæ ciê na tê broñ! Automatycznie zostanie zakupiona inna broñ.";
		panmietek::bron1C();
	}
}

void panmietek::zadanie1a()
	{
		monety = 0; parowki += 10;
		panmietek::krystian_wbutak();
		cout << "\nPan Blue mieszka w niebieskim domu, Pani Pink mieszka w ró¿owym domu, a Pan Brown w domu br¹zowym. Kto mieszka w Bia³ym Domu?: ";
		cin >> odpowiedz;
		if (odpowiedz == "Prezydent" or odpowiedz == "prezydent")
		{
			cout << "Dobra odpowiedŸ! Oto twoja nagroda!";
			monety += 50;
		}
		else
		{
			cout << "\nNiestety, to nie jest prawid³owa odpowiedŸ. No dobrze, spróbuj jeszcze raz, ale nie licz na tak wysokie wynagrodzenie.\n";
			cout << "Liczba ta wynosi w przybli¿eniu 3,14159. Jaka to liczba? [zapis fonetyczny]: ";
			cin >> odpowiedz;
			if (odpowiedz == "pi" or odpowiedz == "Pi")
			{
				cout << "Dobra odpowiedŸ! Oto twoja nagroda!";
				monety += 40;
			}
			else
			{
				kuc.przegrana();
				exit(0);
			}
		}
}
void panmietek::zadanie1b()
{
	panmietek::dabromir_jodlonierz();
	cout << "\nCo to za zwierzê, które rano chodzi na czterech nogach, w po³udnie na dwóch, a wieczorem na trzech?(bez zmiekczen): ";
	cin >> odpowiedz;
	if (odpowiedz == "czlowiek" or odpowiedz == "Czlowiek")
	{
		cout << "Dobra odpowiedŸ! Oto twoja nagroda!";
		monety += 50;
	}
	else
	{
		int l1 = rand(); int l2 = rand(); int l3 = rand();
		cout << "\nNiestety, to nie jest prawid³owa odpowiedŸ. No dobrze, spróbuj jeszcze raz, ale nie licz na tak wysokie wynagrodzenie.\nRozwi¹¿ równanie: "<< l1<<" + "<<"3 * "<<l3<<" - "<<l2<<": ";
		cin >> odpowiedz;
		if (odpowiedz == to_string(l1 + 3 * l3 - l2))
		{
			cout << "Dobra odpowiedŸ! Oto twoja nagroda!";
			monety += 40;
		}
		else
		{
			kuc.przegrana();
			exit(0);
		}
	}
}
void panmietek::zadanie2() 
{
	cout << "\nGrzemiesz Br¹zowy: Postêpuj¹cy spadek si³y nabywczej pieni¹dza i zwi¹zany z nim wzrost cen - co to za zjawisko?: ";
	cin >> odpowiedz;
	if (odpowiedz == "Inflacja" or odpowiedz == "inflacja")
	{
		cout << "\nGrzemiesz Br¹zowy: Œwietnie, nasza spó³ka mo¿e zacz¹æ dzia³aæ!\n";
	}
	else
	{
		cout << "\nGrzemiesz Br¹zowy: Niestety, z³a odpowiedŸ. Dam ci drug¹ szansê.\n";
		cout << "Grzemiesz Br¹zowy: Jak nazywa siê polski bank centralny z siedzib¹ g³ówn¹ w Warszawie?: ";
		cin.ignore(1000, '\n');
		getline(cin,odpowiedz);
		if (odpowiedz == "Narodowy Bank Polski" or odpowiedz == "NBP" or odpowiedz == "nbp" or odpowiedz == "narodowy bank polski")
		{
			cout << "\nGrzemiesz Br¹zowy: Œwietnie, nasza spó³ka mo¿e zacz¹æ dzia³aæ, ale bêdziesz musia³ zap³aciæ mi parê groszy.\n";
			if (monety >= 10)
			{
				cout << "Grzemiesz Br¹zowy: Daj mi 10 monet i jesteœmy kwita.";
				cout << "\nPoda³em Br¹zowemu pieni¹dze.\n(twoje fundusze zmniejszaj¹ siê o 10)\n";
				monety -= 10;
			}
			else 
			{
				cout << "Grzemiesz Br¹zowy: Wygl¹da na to, ¿e nie masz wystarczaj¹co du¿o pieniêdzy, niech to bêdzie po¿yczka.";
				czypozyczka = 't';
			}
		}
		else
		{
			kuc.przegrana();
			exit(0);
		}
	}
}


void panmietek::starcie1(char zakonczenie)
{
	moc = 1000;
	moc_wroga = 1000;
	cout << "\n###################  WALKA  ###################\n\nSi³y Kwaczalskiego staja przed si³ami Kucwina.\n";
	cout << "Twoja moc: " << moc << "\nMoc wroga: " << moc_wroga << endl;
	cout << "\n---------------------------------- PIERWSZE STARCIE ----------------------------------\n";
	if (zakonczenie == 'a') {
		cout << "Si³y Kucwina daj¹ Ci 900 obrazeñ";
		moc -= 900;
		moc_wroga -= dawane_obrazenia;
	}
	else {
		cout << "Si³y Kwaczyñskiego daj¹ Ci 500 obrazeñ";
		moc -= 500;
		moc_wroga -= dawane_obrazenia;
	}
	cout << endl;
}
void panmietek::starcie2(char zakonczenie)
{
	cout << "\n---------------------------------- DRUGIE STARCIE ----------------------------------\n";

	if (zakonczenie == 'a')
	{
		cout << "Nagle z zaswiatow przed moimi oczyma zjawi³ sie Adrian Piachogór: \nUzdrowie cie o odatkowe 300 mocy i dodam do twojej sily obrazen 1000, jesli zgadniesz odpowiedz na wszystkie 3 pytania! Badz ostrozny!";
		cout << "\nJaki jest tytu³ mojej ulubionej ksi¹¿ki Karola Marksa z 1848 roku?: ";
		cin.ignore(1000, '\n');
		getline(cin, odpowiedz);
		if (odpowiedz == "Manifest komunistyczny" or odpowiedz == "Manifest Komunistyczny" or odpowiedz == "manifest komunistyczny")
		{
			cout << "\nCo jest najwa¿niejsz¹ form¹ uczestnictwa cz³owieka w spo³eczeñstwie, która umo¿liwi³a ludziom wyjœcie ze stanu zwierzêcoœci?: ";
			cin >> odpowiedz;
			if (odpowiedz == "Praca" or odpowiedz == "praca") {
				cout << "Podaj prawdziwe imiê i nazwisko polskiego papie¿a (bez zmiekczen): ";
				cin.ignore(1000, '\n');
				getline(cin, odpowiedz);
				if (odpowiedz == "Karol Wojtyla" or odpowiedz == "karol wojtyla") {
					cout << "Adrian Piachogór: Brawo! Przeszed³eœ wszystkie testy. Oto twoja nagroda.";
					moc += 300;
					dawane_obrazenia += 1000;
				}
				else {
					cout << "Nic z tego. Nie wiesz wystarczaj¹co du¿o o najlepszym ustroju.";
				}
			}
			else {
				cout << "Nic z tego. Nie wiesz wystarczaj¹co du¿o o najlepszym ustroju.";
			}
		}
		else
		{
			cout << "Nic z tego. Nie wiesz wystarczaj¹co du¿o o najlepszym ustroju.";
		}
		if (moc <= 0)
		{
			cout << "\nn######################################### Przegrana #########################################\n";
			cout << "W kraju Kucwina-Mokke zostajesz zepchniety do najnizszej grupy spolecznej zbrodniarzy. Wracasz do domu przez szafe z niczym.\nReszta spo³eczeñstwa pozosta³a w kraju i ¿y³a dostatnio.";
			panmietek::punkty();
			exit(0);
		}

	}
	else {
		cout << "Nagle z zaswiatow przed twoimi oczyma zjawia sie Stanos³aw Zielonek: \nMasz szczescie, zalapales sie na moj program studentowe plus. Uzdrowie cie o odatkowe 300 mocy i dodam do twojej sily obrazen 1000,\njesli zgadniesz odpowiedz na wszystkie 3 pytania!Badz ostrozny!\n";
		cout << "\nJaki jest tytu³ mojej ulubionej ksi¹¿ki Adama Smitha z 1776 roku?(bez zmiêkczeñ): ";
		cin.ignore(1000, '\n');
		getline(cin, odpowiedz);
		if (odpowiedz == "Badania nad natura i przyczynami bogactwa narodow" or odpowiedz == "badania nad natura i przyczynami bogactwa narodow")
		{
			cout << "\nJak nazywa sie system gospodarczy oparty na prywatnej w³asnoœci œrodków produkcji?: ";
			cin >> odpowiedz;
			if (odpowiedz == "Kapitalizm" or odpowiedz == "kapitalizm") {
				cout << "Podaj prawdziwe imiê i nazwisko polskiego papie¿a (bez zmiêkczeñ): ";
				cin.ignore(1000, '\n');
				getline(cin, odpowiedz);
				if (odpowiedz == "Karol Wojtyla" or odpowiedz == "karol wojtyla") {
					cout << "Stanos³aw Zielonek: Brawo! Przeszed³eœ wszystkie testy. Oto twoja nagroda.";
					moc += 300;
					dawane_obrazenia += 1000;
				}
				else {
					cout << "Nic z tego. Nie wiesz wystarczaj¹co du¿o o najlepszym ustroju.";
				}
			}
			else {
				cout << "Nic z tego. Nie wiesz wystarczaj¹co du¿o o najlepszym ustroju.";
			}
		}
		else
		{
			cout << "Nic z tego. Nie wiesz wystarczaj¹co du¿o o najlepszym ustroju.";
		}
		if (moc <= 0)
		{
			cout << "\n######################################### Przegrana #########################################\n";
			cout << "W kraju Kwaczyñskiego zostajesz zepchniety do najnizszej grupy spolecznej zbrodniarzy wojennych. Wracasz do domu przez szafe z niczym.\nPozostawiasz za soba miliony ludzi ktorzy przez dyktature Kwaczynskiego pracuja na utrzymanie wladzy i nie maja zadnych pieniedzy.";
			panmietek::punkty();
			exit(0);
		}

	}
	cout << "\n\nTwoja moc: " << moc << "\nMoc wroga: " << moc_wroga << endl;
	cout << endl;
}
void panmietek::starcie3(char zakonczenie)
{
	cout << "\n---------------------------------- TRZECIE STARCIE ----------------------------------\n";
	if (zakonczenie == 'a') {
		cout << "Si³y Kucwina daj¹ Ci 200 obrazeñ";
		moc -= 200;
		moc_wroga -= dawane_obrazenia;

		if (moc < moc_wroga)
		{
			cout << "\n######################################### Przegrana #########################################\n";
			cout << "W kraju Kucwina-Mokke zostajesz zepchniety do najnizszej grupy spolecznej zbrodniarzy. Wracasz do domu przez szafe z niczym.";
		}
		else {
			cout << "\n######################################### WYGRANA #########################################\n";
			cout << "Brawo! Wygra³eœ. \nW kraju Kwaczalskiego zapanowa³a dyktatura. Ceny parowek zaczely rosnac. Twoja firma stala sie nierentowna. Na szczescie sojusz oplacil sie.\nZostajesz ministrem skarbu panstwa. W tym momencie wladza zyje dostatnio, a zwykli szarzy ludzie pracuja na ich utrzymanie.\nWidzac to bierzesz zagarniete od obywateli oszczednosci i wracasz przez szafe do domu.";
		}
	}
	else
	{
		cout << "Si³y Kwaczyñskiego daj¹ Ci 20 obrazeñ";
		moc -= 20;
		moc_wroga -= dawane_obrazenia;

		if (moc < moc_wroga)
		{
			cout << "\n######################################### Przegrana #########################################\n";
			cout << "W kraju Kwaczalskiego zostajesz zepchniety do najnizszej grupy spolecznej zbrodniarzy. Wracasz do domu przez szafe z niczym.Pozostawiasz za soba miliony ludzi ktorzy przez dyktature Kwaczynskiego pracuja na utrzymanie wladzy i nie maja zadnych pieniedzy.\n";
		}
		else {
			cout << "\n######################################### WYGRANA #########################################\n";
			cout << "Brawo! Wygra³eœ. W kraju Janusza rozwijasz spokojnie swoj parowkowy biznes. Zarabiasz miliardy zlotowek. Zaczynasz tesknic za domem, \nwiec przechodzisz przez szafe i zyjesz dostatnio w Polsce jako klasa wyzsza, gdyz inwestujesz na gieldzie.\nPozostali obywatele w kraju Janusza sa szczesliwi i rozwijaja swoje biznesy.";
		}

	}
}

void panmietek::punkty() {
	int pkt = moc + monety + parowki + sila + dawane_obrazenia;
	fstream plik;
	plik.open("wyniki.txt", ios::out | ios::app);
	plik << "Tryb trudny.\nPunkty: " << to_string(pkt) << endl << endl;
	plik.close();

	tablica = new int[5]; 	//przydzielenie pamiêci na elementy tablicy
	tablica[0] = monety; //przypisanie elementow
	tablica[1] = sila;
	tablica[2] = parowki;
	tablica[3] = dawane_obrazenia;
	tablica[4] = moc;

	for (int i = 0; i <= 4; i++)
		for (int j = 1; j <= 4 - i; j++) //pêtla wewnêtrzna
			if (tablica[j - 1] > tablica[j]) //zamiana miejscami
				swap(tablica[j - 1], tablica[j]);

	cout << endl << endl;
	//wypisanie posortowanych elementów
	for (int i = 0; i <= 4; i++)
		cout << tablica[i] << " + ";
	cout << " = " << pkt;
	cout << "\nGratulacje, zdoby³eœ " << pkt << " punktów!\n";

	delete[]tablica; //zwolnienie pamieci
}