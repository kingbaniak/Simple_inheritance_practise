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

void npc::wprowadzenie1() //bierzemy drobne na start - pierwsze monety beda wydane w 1. zadaniu.
{
	cout << "-----------------------------------------------------WST�P-----------------------------------------------------\n\n";
	Sleep(500);
	cout << "Mia�em tylko 20 lat. Uwielbia�em Kucwina tak bardzo, mia�em jego plakaty, ksi��ki i r�ne gad�ety.\nModli�em si� do Kucwina ka�dej nocy przed snem, dzi�kuj�c za wszystko co dla nas robi.\nKucwin to wolno�� - m�wi�em - Kucwin to nadzieja.\nTata akurat wr�ci� z pracy i s�ysz�c to nazwa� mnie kucem. \nWiedzia�em, �e mi zazdro�ci, bo sam od lat g�osowa� na Pok�ad Uspo�eczniony. Nazwa�em go lewakiem,\nza co on mnie uderzy� i kaza� i�� spa�.\nP�aka�em i bola�a mnie g�owa. Le��c w ��ku by�o mi zimno. Nagle poczu�em przyp�yw ciep�a i kto� mnie dotkn��.\nTo Juliusz Kucwin-Mokke. By�em taki szcz�liwy. Niewidzialna r�ka wolnego rynku podnios�a mnie z ��ka.\nKucwin kaza� wzi�� troch� drobnych, po czym przeprowadzi� mnie przez drzwi mojej szafy do Polski swoich marze�.\n";
	cout << "\n--------------------------------------------------------------------------------------------------------------\n\n";
	Sleep(500);
	cout << "\nMenu: \n> Wybierz 'm' aby zaczac tryb latwy\n> Wybierz 'b' aby zacz�� tryb trudny\n";
}
void npc::wprowadzenie2() //Kucwin daje nam troche parowek na start
{
	cout << "Po ulicach je�dzi�o wiele luksusowych aut. Ku niebu pi�y si� wie�owce lokalnych przedsi�biorc�w.\nNie mog�em oderwa� wzroku od widoku tego dobrobytu, gdy Kucwin pokaza� mi rynienk� z par�weczkami, m�wi�c 'diluj tym'.\n";
	Sleep(500);
}

void npc::dabromir_jodlonierz()
{
	cout << "\nPow�drowa�em zgodnie ze wskaz�wkami sprzedawcy. Rozejrza�em si� wok� siebie. Gdzie on mo�e by�?";
	cout << "\nl - id� w lewo\np - id� w prawo\n";
	while (true)
	{
		cout << "Wyb�r: ";
		cin >> wybor;
		system("cls");
		if (wybor == 'l')
		{
			cout << "Szed�em chwil� �cie�k�. Na swojej drodze napotka�em dw�jk� ludzi. Jeden z nich mia� w r�ku telefon.\nUs�ysza�em, �e odczytuj� jakie� przem�wienie.";
			cout<<"'Rodacy i towarzysze broni! Wy, a nie kto inny, piersi� swoj� os�aniali�cie, jakby twardym murem, granice Rzeczypospolitej, rogatki Warszawy. W swoich czynach chcieli�cie jednej rzeczy, Polski. Polski wielkiej, niepodleg�ej. W dniu dzisiejszym Polsk�, o kt�r� walczyli�cie, sponiewierano.'\nM�czyzna 1: Haller? \nM�czyzna 2: Tak, po wyborze Narutowicza. Staro�� mnie dopad�a, czuj�, jakby to by�o dzi�...\nM�czyzna 1: Staro�� wszystkich nas dopada, ja r�wnie� chodz� ju� o trzech nogach!\n";
			cout << "\nJa (w my�lach): W tym pa�stwie dzieje si� co� dziwnego...\nZanim zd�rzy�em si� obejrze�, moim oczom ukaza� si� Jod�onierz. Siedzia� na drewnianym krze�le, a w r�ku trzyma� ksi��k�.\n";
			cout << "\nD�bromir Jod�onierz: Przyszed�e� po �amig��wk�, m�odzie�cze? Dobrze si� sk�ada, akurat mi si� nudzi�o. Oto ona: ";
			break;
		}
		else if (wybor == 'p')
		{
			cout << "\nNieznajomy: Zgubi�e� si�, ch�opcze? Czego tu szukasz?\nJa: Szukam D�bromira Jod�onierza... Czy wie Pan, gdzie go znajd�?\nNieznajomy: Id� w lewo, na ulic� Narutowicza... Mog� ci podpowiedzie�, �e jego zagadki cz�sto maj� co� wsp�lnego z lud�mi...\n";
			cout << "Poszed�em wi�c w lewo, jak wskaza� nieznajomy. Wreszcie ujrza�em Jod�onierza. Siedzia� na drewnianym krze�le, a w r�ku trzyma� ksi��k�.\n";
			cout << "\nD�bromir Jod�onierz: Przyszed�e� po �amig��wk�, m�odzie�cze? Dobrze si� sk�ada, akurat mi si� nudzi�o. Oto ona: ";
			break;
		}
		else {
			cout << "Nie, ta droga nigdzie nie prowadzi.";
		}
	}
	
}
void npc::krystian_wbutak()
{
	cout << "\nSzed�em chwil� �cie�k�. Natrafi�em na rozdro�e.\n";
	cout << "\nl - id� w lewo\np - id� w prawo\n";
	while (true)
	{
		cout << "Wyb�r: ";
		cin >> wybor;
		system("cls");
		if (wybor == 'l')
		{
			cout << " Na swojej drodze napotka�em dw�jk� ludzi. Jeden z nich mia� w r�ku telefon.\nWidzia�em, �e ogl�daj� jakie� przem�wienie.\n\n'Historia oceni nasze dzia�ania. Nie obesz�o si� bez potkni��. Wyci�gamy z nich wnioski.\nPrzede wszystkim jednak minione miesi�ce by�y dla rz�du czasem pracowitym, borykaniem si� z ogromnymi trudno�ciami. Niestety � gospodark� narodow� uczyniono aren� walki politycznej.'\nM�czyzna 1: '81... A jakby to by�o dzi�...\nM�czyzna 2: Tak, zupe�nie jakby to by�o dzi�... �e te� ten cz�owiek by� Prezydentem.\n";
			cout << "\n\nJa (w my�lach): W tym pa�stwie dzieje si� co� dziwnego...\nZanim zd�rzy�em si� obejrze�, moim oczom ukaza� si� jaki� cz�owiek. Podszed� bli�ej, w r�ku trzyma� ju� portfel.\n";
			cout << "Krystian Wbutak: Pilnie potrzebuj� par�wek, szybko, sprzedaj mi swoje, zap�ac� ci dwukrotno�� warto�ci, odpowiedz tylko na moje pytanie!\n";
			break;
		}
		else if (wybor == 'p')
		{
			cout << "\nNieznajomy: Zgubi�e� si�, ch�opcze? Czego tu szukasz?\nJa: Id� po prostu drog�... \nNieznajomy: Wygl�dasz na ��todzioba... Mog� ci podpowiedzie�, �e kr�c� si� tu kupcy.\nJa jestem zwyk�ym jasnowidzem... je�li kt�ry� zada Ci pytanie, to mo�e mie� ono zwi�zek z Jaruzelskim. Widz� wydarzenia po 1981... 1989, kiedy zosta�-\nAh, nie mam czasu.";
			cout << "\nM�czyzna uciek�. Poszed�em dalej. Zanim zd�rzy�em si� obejrze�, moim oczom ukaza� si� jaki� cz�owiek. Podszed� bli�ej, w r�ku trzyma� ju� portfel.\n";
			cout << "Krystian Wbutak: Pilnie potrzebuj� par�wek, szybko, sprzedaj mi swoje, zap�ac� ci dwukrotno�� warto�ci, odpowiedz tylko na moje pytanie!\n";
			break;
		}
		else {
			cout << "Nie, ta droga nigdzie nie prowadzi.";
		}
	}

}

void npc::grzemiesz_brazowy(int wersja)
{
	switch (wersja) {
	case 1: cout << "\nGrzemiesz Br�zowy: Nasta�y z�e czasy dla gospodarki. Totalitarny przyw�dca, Janostaw Kwaczalski, chce przej�� w�adz� i okra�� nas z pieni�dzy!\nMusisz nam pom�c go pokona�. Niestety, twoje fudusze nie s�  wystarczaj�ce.\nPomog� ci zarobi� kilka groszy. Zgodz� si� za�o�y� z tob� sp�k�, ale najpierw musisz sie wykazac wiedza.\nNie przyjmuje byle kogo.\n"; break;
	case 2:cout << "\nGrzemiesz Br�zowy: Stracisz wizerunek w oczach innych biznesmenow! Nikt nie zechce twoich parowek. Jesli sie zgodzisz, nasz sojusz sie skonczy.\n"; break;
	case 3: cout << "\nGrzemiesz Br�zowy: Chlopcze, jestes gotowy na ostateczne starcie z Kwaczalskim. Musimy pokonac dyktature! Masz tu 700 monet.\nZdobadz jeszcze troche gotowki, czas na walke.Pamietaj, nie inwestuj juz w parowki. Potrzebujemy tylko pieniedzy do walki!\n"; break;
	case 4: cout << "\nDobrze chlopcze, zdobylismy troche pieniedzy. Pora na walke. Kupmy bron!"; break;
	}
}
void npc::janek_sasiewicz(int wersja)
{
	switch (wersja) {
	case 1: cout << "Janek Sasiewicz: Moge zaproponowac ci swietny interes. Nasze panstwo jest bardzo niezadowolone z dzialania obecnego systemu. Mamy zamiar zaproponowac biznesmenom male pozyczki na duzy procent. Jesli bedziesz nas reklamowal swoim wizerunkiem, dostaniesz 50 % zarobkow. Co ty na to?"; break;
	case 2: cout << "Janek Sasiewicz: Nie martw sie chlopcze. Nasza wspolpraca bedzie kontynuowana. Dzieki naszym podatkom mozesz pozostac w spolce ze mna i bedziemy zyc dostatnio. Oto troche gotowki na start : +1000 monet. "; break;
	case 3: cout << "\nJanek Sasiewicz: Zemszcz� si� na Tobie gagatku, lepiej uwa�aj...\n"; break;
	case 4: cout << "\nJanek Sasiewicz: Nie jest dobrze chlopcze. Niebezpieczne sily wroga chca zniszczyc nasza wladze! Potrzebujemy obrony."; break;
	}
}



