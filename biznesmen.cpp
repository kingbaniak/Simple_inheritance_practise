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

biznesmen::biznesmen(int p, int m, int s) : parowki(p), monety (m), sila(s)
{
	cout << "\nWybrales postac biznesmena!\n\n";
}

void biznesmen::pozyczka()
{
	monety -= 50;
}
void biznesmen::monetyplus(char zakonczenie) {
	if (zakonczenie == 'a')
	{
		monety += 1000;
	}

	else if (zakonczenie == 'c')
	{
		monety += 700;
	}
}

void biznesmen::ekwipunek()
{
	if (czypozyczka == 't')
	{
		biznesmen::pozyczka();
	}
	cout << "\nTwoj ekwipunek:\nMonety: "<<monety<<"\nParowki: "<<parowki<<"\nSila: "<<sila<<endl;
}
void biznesmen::cennik()
{
	cout << "\na) Sprzedaj par�wki (-5 par�wek, +100 monet, -50 si�y)\n";
	cout << "b) Kup par�wki (+5 par�wek, -70 monet, -50 si�y)\n";
	cout << "c) Id� spa� (-70 monet, uzupe�nienie si�y)";
}
void biznesmen::handluj_parowkami()
{
	if (parowki >= 5 && sila >= 50)
	{
		parowki -= 5;
		monety += 100;
		sila -= 50;
		cout << "Sprzeda�e� par�wki!";
	}
	else { cout << "Nie sta� ci� na t� transakcj�!"; }
}
void biznesmen::kup_parowki()
{
	if (monety >= 70 && sila >= 50)
	{
		parowki += 5;
		monety -= 70;
		sila -= 50;
		cout << "Kupi�e� par�wki!";
	}
	else { cout << "Nie sta� ci� na t� transakcj�!"; }
}
void biznesmen::sen()
{
	if (monety >= 70)
	{
		monety -= 70;
		sila = 300;
		cout << "Wyspa�e� si�!";
	}
	else { cout << "Nie sta� ci� na t� transakcj�!"; }
}

void biznesmen::bron1A() 
{
	dawane_obrazenia = 10;
}
void biznesmen::bron2A()
{
	if (monety >= 2000) {
		dawane_obrazenia = 1000;
		monety -= 2000;
	}
	else
	{
		cout << "Nie sta� ci� na t� bro�! Automatycznie zostanie zakupiona inna bro�.";
		biznesmen::bron1A();

	}
}
void biznesmen::bron1C()
{
	dawane_obrazenia = 50;
}
void biznesmen::bron2C()
{
	if (monety >= 1000) {
		dawane_obrazenia = 2000;
		monety -= 1000;
	}
	else
	{
		cout << "Nie sta� ci� na t� bro�! Automatycznie zostanie zakupiona inna bro�.";
		biznesmen::bron1C();
	}
}

void biznesmen::zadanie1a()
{
	monety = 0; parowki += 15; //fundusze na start; 1 zadanie odbiera wszystkie monety, mamy za to parowki od Kucwina i od sprzedawcy
	biznesmen::krystian_wbutak();
	cout << "\nW kt�rym roku og�oszono w Polsce stan wojenny?: ";
	cin >> odpowiedz;
	if (odpowiedz == "1981")
	{
		cout << "Dobra odpowied�! Oto twoja nagroda!";
		monety += 200; 
	}
	else
	{
		cout << "\nNiestety, to nie jest prawid�owa odpowied�. No dobrze, spr�buj jeszcze raz, ale nie licz na tak wysokie wynagrodzenie.\nOblicz pochodn� z ln(3x+7) i podaj wynik \n(je�li w mianowniku wyst�puje wi�cej ni� 1 znak, nie zapomnij o nawiasie!): ";
		cin >> odpowiedz;
		if (odpowiedz == "3/(3x+7)")
		{
			cout << "Dobra odpowied�! Oto twoja nagroda!";
			monety += 150;
		}
		else
		{
			kuc.przegrana(); 
			exit(0);
		}
	}
}
void biznesmen::zadanie1b() 
{
	biznesmen::dabromir_jodlonierz();
	cout << "\nJak nazywa� si� 1. prezydent Polski?(nazwisko): ";
	cin >> odpowiedz;
	if (odpowiedz == "Narutowicz" or odpowiedz == "narutowicz")
	{
		cout << "Dobra odpowied�! Oto twoja nagroda!";
		monety += 200; //300 monet ale 1/3 oddamy sprzedawcy
	}
	else
	{
			cout << "\nNiestety, to nie jest prawid�owa odpowied�. No dobrze, spr�buj jeszcze raz, ale nie licz na tak wysokie wynagrodzenie.\n";
			cout << "Liczba ta wynosi w przybli�eniu 2,71828. Jaka to liczba?: ";
			cin >> odpowiedz;
			if (odpowiedz == "e")
			{
				cout << "Dobra odpowied�! Oto twoja nagroda!";
				monety += 150;
			}
			else
			{
				kuc.przegrana();
				exit(0);
			}
	}
}
void biznesmen::zadanie2()
{
	cout << "\nGrzemiesz Br�zowy: Kto jest obecnie prezesem NBP? (bez zmi�kcze�): ";
	cin >> odpowiedz;
	if (odpowiedz == "Glapinski" or odpowiedz == "glapinski")
	{
		cout << "\nGrzemiesz Br�zowy: �wietnie, nasza sp�ka mo�e zacz�� dzia�a�!\n";
	}
	else
	{
		cout << "\nGrzemiesz Br�zowy: Niestety, z�a odpowied�. Dam ci drug� szans�.\n";
		cout << "Grzemiesz Br�zowy: System rezerwy federalnej jest bankiem centralnym pewnego pa�stwa. \nJakiego? [bez zmi�kcze�]: ";
		cin.ignore(1000, '\n');
		getline(cin, odpowiedz);
		if (odpowiedz == "USA" or odpowiedz == "usa" or odpowiedz == "Stany Zjednoczone Ameryki Polnocnej" or odpowiedz == "stany zjednoczone")
		{
			cout << "\nGrzemiesz Br�zowy: �wietnie, nasza sp�ka mo�e zacz�� dzia�a�, ale b�dziesz musia� zap�aci� mi par� groszy.\n";
			if (monety >= 10)
			{
				cout << "Grzemiesz Br�zowy: Daj mi 10 monet i jeste�my kwita.";
				cout << "\nPoda�em Br�zowemu pieni�dze.\n(twoje fundusze zmniejszaj� si� o 50)\n";
				monety -= 50;
			}
			else
			{
				czypozyczka = 't';
				cout << "Grzemiesz Br�zowy: Wygl�da na to, �e nie masz wystarczaj�co du�o pieni�dzy, niech to b�dzie po�yczka.";
			}
		}
		else
		{
			kuc.przegrana();
			exit(0);
		}
	}
}

void biznesmen::starcie1(char zakonczenie)
{
	moc = 1000;
	moc_wroga = 1000;
	cout << "\n###################  WALKA  ###################\nSi�y Kwaczalskiego staja przed si�ami Kucwina.\n";
	cout << "Twoja moc: " << moc << "\nMoc wroga: " << moc_wroga << endl;
	cout << "\n---------------------------------- PIERWSZE STARCIE ----------------------------------\n";
	if (zakonczenie == 'a') {
		cout << "Si�y Kucwina daj� Ci 900 obraze�";
		moc -= 900;
		moc_wroga -= dawane_obrazenia;
	}
	else {
		cout << "Si�y Kwaczy�skiego daj� Ci 500 obraze�";
		moc -= 500;
		moc_wroga -= dawane_obrazenia;
	}
	cout << endl;
}
void biznesmen::starcie2(char zakonczenie)
{
	cout << "\n---------------------------------- DRUGIE STARCIE ----------------------------------\n";

	if (zakonczenie == 'a')
	{
		cout << "Nagle z zaswiatow przed moimi oczyma zjawi� sie Adrian Piachog�r: \nUzdrowie cie o odatkowe 300 mocy i dodam do twojej sily obrazen 1000, jesli zgadniesz odpowiedz na wszystkie 3 pytania! Badz ostrozny!";
		cout << "\nJaki jest tytu� mojej ulubionej ksi��ki Karola Marksa z 1848 roku?: ";
		cin.ignore(1000, '\n');
		getline(cin, odpowiedz);
			if (odpowiedz == "Manifest komunistyczny" or odpowiedz == "Manifest Komunistyczny" or odpowiedz == "manifest komunistyczny")
			{
				cout << "\nCo jest najwa�niejsz� form� uczestnictwa cz�owieka w spo�ecze�stwie, kt�ra umo�liwi�a ludziom wyj�cie ze stanu zwierz�co�ci?: ";
				cin >> odpowiedz;
					if (odpowiedz == "Praca" or odpowiedz == "praca") {
						cout << "Podaj prawdziwe imi� i nazwisko polskiego papie�a (bez zmiekczen): ";
						cin.ignore(1000, '\n');
						getline(cin, odpowiedz);
						if (odpowiedz == "Karol Wojtyla" or odpowiedz == "karol wojtyla") {
							cout << "Adrian Piachog�r: Brawo! Przeszed�e� wszystkie testy. Oto twoja nagroda.";
								moc += 300;
								dawane_obrazenia += 1000;
						}
						else {
							cout << "Nic z tego. Nie wiesz wystarczaj�co du�o o najlepszym ustroju.";
						}
					}
					else {
						cout << "Nic z tego. Nie wiesz wystarczaj�co du�o o najlepszym ustroju.";
					}
			}
			else 
			{
				cout << "Nic z tego. Nie wiesz wystarczaj�co du�o o najlepszym ustroju.";
			}
			if (moc <= 0)
			{
				cout << "\nn######################################### Przegrana #########################################\n";
				cout << "W kraju Kucwina-Mokke zostajesz zepchniety do najnizszej grupy spolecznej zbrodniarzy. Wracasz do domu przez szafe z niczym.\nReszta spo�ecze�stwa pozosta�a w kraju i �y�a dostatnio.";
				biznesmen::punkty();
				exit(0);
			}
			
	}
	else {
		cout << "Nagle z zaswiatow przed twoimi oczyma zjawia sie Stanos�aw Zielonek: \nMasz szczescie, zalapales sie na moj program studentowe plus. Uzdrowie cie o odatkowe 300 mocy i dodam do twojej sily obrazen 1000,\njesli zgadniesz odpowiedz na wszystkie 3 pytania!Badz ostrozny!\n";
		cout << "\nJaki jest tytu� mojej ulubionej ksi��ki Adama Smitha z 1776 roku?(bez zmi�kcze�): ";
		cin.ignore(1000, '\n');
		getline(cin, odpowiedz);
		if (odpowiedz == "Badania nad natura i przyczynami bogactwa narodow" or odpowiedz == "badania nad natura i przyczynami bogactwa narodow")
		{
			cout << "\nJak nazywa sie system gospodarczy oparty na prywatnej w�asno�ci �rodk�w produkcji?: ";
			cin >> odpowiedz;
			if (odpowiedz == "Kapitalizm" or odpowiedz == "kapitalizm") {
				cout << "Podaj prawdziwe imi� i nazwisko polskiego papie�a (bez zmi�kcze�): ";
				cin.ignore(1000, '\n');
				getline(cin, odpowiedz);
				if (odpowiedz == "Karol Wojtyla" or odpowiedz == "karol wojtyla") {
					cout << "Stanos�aw Zielonek: Brawo! Przeszed�e� wszystkie testy. Oto twoja nagroda.";
					moc += 300;
					dawane_obrazenia += 1000;
				}
				else {
					cout << "Nic z tego. Nie wiesz wystarczaj�co du�o o najlepszym ustroju.";
				}
			}
			else {
				cout << "Nic z tego. Nie wiesz wystarczaj�co du�o o najlepszym ustroju.";
			}
		}
		else
		{
			cout << "Nic z tego. Nie wiesz wystarczaj�co du�o o najlepszym ustroju.";
		}
		if (moc <= 0)
		{
			cout << "\n######################################### Przegrana #########################################\n";
			cout << "W kraju Kwaczy�skiego zostajesz zepchniety do najnizszej grupy spolecznej zbrodniarzy wojennych. Wracasz do domu przez szafe z niczym.\nPozostawiasz za soba miliony ludzi ktorzy przez dyktature Kwaczynskiego pracuja na utrzymanie wladzy i nie maja zadnych pieniedzy.";
			biznesmen::punkty();
			exit(0);
		}

	}
	cout << "\n\nTwoja moc: " << moc << "\nMoc wroga: " << moc_wroga << endl;
	cout << endl;
}
void biznesmen::starcie3(char zakonczenie)
{
	cout << "\n---------------------------------- TRZECIE STARCIE ----------------------------------\n";
	if (zakonczenie == 'a') {
		cout << "Si�y Kucwina daj� Ci 200 obraze�";
		moc -= 200;
		moc_wroga -= dawane_obrazenia;

		if (moc < moc_wroga)
		{
			cout << "\n######################################### Przegrana #########################################\n";
			cout << "W kraju Kucwina-Mokke zostajesz zepchniety do najnizszej grupy spolecznej zbrodniarzy. Wracasz do domu przez szafe z niczym.";
		}
		else {
			cout << "\n######################################### WYGRANA #########################################\n";
			cout << "Brawo! Wygra�e�. \nW kraju Kwaczalskiego zapanowa�a dyktatura. Ceny parowek zaczely rosnac. Twoja firma stala sie nierentowna. Na szczescie sojusz oplacil sie.\nZostajesz ministrem skarbu panstwa. W tym momencie wladza zyje dostatnio, a zwykli szarzy ludzie pracuja na ich utrzymanie.\nWidzac to bierzesz zagarniete od obywateli oszczednosci i wracasz przez szafe do domu.";
		}
	}
	else 
	{
		cout << "Si�y Kwaczy�skiego daj� Ci 20 obraze�";
		moc -= 20;
		moc_wroga -= dawane_obrazenia;

		if (moc < moc_wroga)
		{
			cout << "\n######################################### Przegrana #########################################\n";
			cout << "W kraju Kwaczalskiego zostajesz zepchniety do najnizszej grupy spolecznej zbrodniarzy. Wracasz do domu przez szafe z niczym.Pozostawiasz za soba miliony ludzi ktorzy przez dyktature Kwaczynskiego pracuja na utrzymanie wladzy i nie maja zadnych pieniedzy.\n";
		}
		else {
			cout << "\n######################################### WYGRANA #########################################\n";
			cout << "Brawo! Wygra�e�. W kraju Janusza rozwijasz spokojnie swoj parowkowy biznes. Zarabiasz miliardy zlotowek. Zaczynasz tesknic za domem, \nwiec przechodzisz przez szafe i zyjesz dostatnio w Polsce jako klasa wyzsza, gdyz inwestujesz na gieldzie.\nPozostali obywatele w kraju Janusza sa szczesliwi i rozwijaja swoje biznesy.";
		}

	}
}

void biznesmen::punkty() {
	pkt = moc + monety + parowki + sila + dawane_obrazenia;
	fstream plik;

	plik.open("wyniki.txt", ios::out | ios::app);
	plik << "Tryb trudny.\nPunkty: " << to_string(pkt)<<endl<<endl;
	plik.close();

	tablica = new int[5]; 	//przydzielenie pami�ci na elementy tablicy
	tablica[0] = monety; //przypisanie elementow
	tablica[1] = sila;
	tablica[2] = parowki;
	tablica[3] = dawane_obrazenia;
	tablica[4] = moc;

	for (int i = 0; i <= 4; i++)
	for (int j = 1; j <= 4 - i; j++) //p�tla wewn�trzna
	if (tablica[j - 1] > tablica[j]) //zamiana miejscami
	swap(tablica[j - 1], tablica[j]);

	cout << endl << endl;
	//wypisanie posortowanych element�w
	for (int i = 0; i <= 3; i++)
		cout << tablica[i] << " + ";
	cout << tablica[4];
	cout << " = " << pkt;
	cout << "\nGratulacje, zdoby�e� " << pkt << " punkt�w!\n";

	delete[]tablica; //zwolnienie pamieci
}
