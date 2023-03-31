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
	cout << "-----------------------------------------------------WSTÊP-----------------------------------------------------\n\n";
	Sleep(500);
	cout << "Mia³em tylko 20 lat. Uwielbia³em Kucwina tak bardzo, mia³em jego plakaty, ksi¹¿ki i ró¿ne gad¿ety.\nModli³em siê do Kucwina ka¿dej nocy przed snem, dziêkuj¹c za wszystko co dla nas robi.\nKucwin to wolnoœæ - mówi³em - Kucwin to nadzieja.\nTata akurat wróci³ z pracy i s³ysz¹c to nazwa³ mnie kucem. \nWiedzia³em, ¿e mi zazdroœci, bo sam od lat g³osowa³ na Pok³ad Uspo³eczniony. Nazwa³em go lewakiem,\nza co on mnie uderzy³ i kaza³ iœæ spaæ.\nP³aka³em i bola³a mnie g³owa. Le¿¹c w ³ó¿ku by³o mi zimno. Nagle poczu³em przyp³yw ciep³a i ktoœ mnie dotkn¹³.\nTo Juliusz Kucwin-Mokke. By³em taki szczêœliwy. Niewidzialna rêka wolnego rynku podnios³a mnie z ³ó¿ka.\nKucwin kaza³ wzi¹æ trochê drobnych, po czym przeprowadzi³ mnie przez drzwi mojej szafy do Polski swoich marzeñ.\n";
	cout << "\n--------------------------------------------------------------------------------------------------------------\n\n";
	Sleep(500);
	cout << "\nMenu: \n> Wybierz 'm' aby zaczac tryb latwy\n> Wybierz 'b' aby zacz¹æ tryb trudny\n";
}
void npc::wprowadzenie2() //Kucwin daje nam troche parowek na start
{
	cout << "Po ulicach jeŸdzi³o wiele luksusowych aut. Ku niebu piê³y siê wie¿owce lokalnych przedsiêbiorców.\nNie mog³em oderwaæ wzroku od widoku tego dobrobytu, gdy Kucwin pokaza³ mi rynienkê z paróweczkami, mówi¹c 'diluj tym'.\n";
	Sleep(500);
}

void npc::dabromir_jodlonierz()
{
	cout << "\nPowêdrowa³em zgodnie ze wskazówkami sprzedawcy. Rozejrza³em siê wokó³ siebie. Gdzie on mo¿e byæ?";
	cout << "\nl - idŸ w lewo\np - idŸ w prawo\n";
	while (true)
	{
		cout << "Wybór: ";
		cin >> wybor;
		system("cls");
		if (wybor == 'l')
		{
			cout << "Szed³em chwilê œcie¿k¹. Na swojej drodze napotka³em dwójkê ludzi. Jeden z nich mia³ w rêku telefon.\nUs³ysza³em, ¿e odczytuj¹ jakieœ przemówienie.";
			cout<<"'Rodacy i towarzysze broni! Wy, a nie kto inny, piersi¹ swoj¹ os³anialiœcie, jakby twardym murem, granice Rzeczypospolitej, rogatki Warszawy. W swoich czynach chcieliœcie jednej rzeczy, Polski. Polski wielkiej, niepodleg³ej. W dniu dzisiejszym Polskê, o któr¹ walczyliœcie, sponiewierano.'\nMê¿czyzna 1: Haller? \nMê¿czyzna 2: Tak, po wyborze Narutowicza. Staroœæ mnie dopad³a, czujê, jakby to by³o dziœ...\nMê¿czyzna 1: Staroœæ wszystkich nas dopada, ja równie¿ chodzê ju¿ o trzech nogach!\n";
			cout << "\nJa (w myœlach): W tym pañstwie dzieje siê coœ dziwnego...\nZanim zd¹rzy³em siê obejrzeæ, moim oczom ukaza³ siê Jod³onierz. Siedzia³ na drewnianym krzeœle, a w rêku trzyma³ ksi¹¿kê.\n";
			cout << "\nD¹bromir Jod³onierz: Przyszed³eœ po ³amig³ówkê, m³odzieñcze? Dobrze siê sk³ada, akurat mi siê nudzi³o. Oto ona: ";
			break;
		}
		else if (wybor == 'p')
		{
			cout << "\nNieznajomy: Zgubi³eœ siê, ch³opcze? Czego tu szukasz?\nJa: Szukam D¹bromira Jod³onierza... Czy wie Pan, gdzie go znajdê?\nNieznajomy: IdŸ w lewo, na ulicê Narutowicza... Mogê ci podpowiedzieæ, ¿e jego zagadki czêsto maj¹ coœ wspólnego z ludŸmi...\n";
			cout << "Poszed³em wiêc w lewo, jak wskaza³ nieznajomy. Wreszcie ujrza³em Jod³onierza. Siedzia³ na drewnianym krzeœle, a w rêku trzyma³ ksi¹¿kê.\n";
			cout << "\nD¹bromir Jod³onierz: Przyszed³eœ po ³amig³ówkê, m³odzieñcze? Dobrze siê sk³ada, akurat mi siê nudzi³o. Oto ona: ";
			break;
		}
		else {
			cout << "Nie, ta droga nigdzie nie prowadzi.";
		}
	}
	
}
void npc::krystian_wbutak()
{
	cout << "\nSzed³em chwilê œcie¿k¹. Natrafi³em na rozdro¿e.\n";
	cout << "\nl - idŸ w lewo\np - idŸ w prawo\n";
	while (true)
	{
		cout << "Wybór: ";
		cin >> wybor;
		system("cls");
		if (wybor == 'l')
		{
			cout << " Na swojej drodze napotka³em dwójkê ludzi. Jeden z nich mia³ w rêku telefon.\nWidzia³em, ¿e ogl¹daj¹ jakieœ przemówienie.\n\n'Historia oceni nasze dzia³ania. Nie obesz³o siê bez potkniêæ. Wyci¹gamy z nich wnioski.\nPrzede wszystkim jednak minione miesi¹ce by³y dla rz¹du czasem pracowitym, borykaniem siê z ogromnymi trudnoœciami. Niestety – gospodarkê narodow¹ uczyniono aren¹ walki politycznej.'\nMê¿czyzna 1: '81... A jakby to by³o dziœ...\nMê¿czyzna 2: Tak, zupe³nie jakby to by³o dziœ... ¯e te¿ ten cz³owiek by³ Prezydentem.\n";
			cout << "\n\nJa (w myœlach): W tym pañstwie dzieje siê coœ dziwnego...\nZanim zd¹rzy³em siê obejrzeæ, moim oczom ukaza³ siê jakiœ cz³owiek. Podszed³ bli¿ej, w rêku trzyma³ ju¿ portfel.\n";
			cout << "Krystian Wbutak: Pilnie potrzebujê parówek, szybko, sprzedaj mi swoje, zap³acê ci dwukrotnoœæ wartoœci, odpowiedz tylko na moje pytanie!\n";
			break;
		}
		else if (wybor == 'p')
		{
			cout << "\nNieznajomy: Zgubi³eœ siê, ch³opcze? Czego tu szukasz?\nJa: Idê po prostu drog¹... \nNieznajomy: Wygl¹dasz na ¿ó³todzioba... Mogê ci podpowiedzieæ, ¿e krêc¹ siê tu kupcy.\nJa jestem zwyk³ym jasnowidzem... jeœli któryœ zada Ci pytanie, to mo¿e mieæ ono zwi¹zek z Jaruzelskim. Widzê wydarzenia po 1981... 1989, kiedy zosta³-\nAh, nie mam czasu.";
			cout << "\nMê¿czyzna uciek³. Poszed³em dalej. Zanim zd¹rzy³em siê obejrzeæ, moim oczom ukaza³ siê jakiœ cz³owiek. Podszed³ bli¿ej, w rêku trzyma³ ju¿ portfel.\n";
			cout << "Krystian Wbutak: Pilnie potrzebujê parówek, szybko, sprzedaj mi swoje, zap³acê ci dwukrotnoœæ wartoœci, odpowiedz tylko na moje pytanie!\n";
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
	case 1: cout << "\nGrzemiesz Br¹zowy: Nasta³y z³e czasy dla gospodarki. Totalitarny przywódca, Janostaw Kwaczalski, chce przej¹æ w³adzê i okraœæ nas z pieniêdzy!\nMusisz nam pomóc go pokonaæ. Niestety, twoje fudusze nie s¹  wystarczaj¹ce.\nPomogê ci zarobiæ kilka groszy. Zgodzê siê za³o¿yæ z tob¹ spó³kê, ale najpierw musisz sie wykazac wiedza.\nNie przyjmuje byle kogo.\n"; break;
	case 2:cout << "\nGrzemiesz Br¹zowy: Stracisz wizerunek w oczach innych biznesmenow! Nikt nie zechce twoich parowek. Jesli sie zgodzisz, nasz sojusz sie skonczy.\n"; break;
	case 3: cout << "\nGrzemiesz Br¹zowy: Chlopcze, jestes gotowy na ostateczne starcie z Kwaczalskim. Musimy pokonac dyktature! Masz tu 700 monet.\nZdobadz jeszcze troche gotowki, czas na walke.Pamietaj, nie inwestuj juz w parowki. Potrzebujemy tylko pieniedzy do walki!\n"; break;
	case 4: cout << "\nDobrze chlopcze, zdobylismy troche pieniedzy. Pora na walke. Kupmy bron!"; break;
	}
}
void npc::janek_sasiewicz(int wersja)
{
	switch (wersja) {
	case 1: cout << "Janek Sasiewicz: Moge zaproponowac ci swietny interes. Nasze panstwo jest bardzo niezadowolone z dzialania obecnego systemu. Mamy zamiar zaproponowac biznesmenom male pozyczki na duzy procent. Jesli bedziesz nas reklamowal swoim wizerunkiem, dostaniesz 50 % zarobkow. Co ty na to?"; break;
	case 2: cout << "Janek Sasiewicz: Nie martw sie chlopcze. Nasza wspolpraca bedzie kontynuowana. Dzieki naszym podatkom mozesz pozostac w spolce ze mna i bedziemy zyc dostatnio. Oto troche gotowki na start : +1000 monet. "; break;
	case 3: cout << "\nJanek Sasiewicz: Zemszczê siê na Tobie gagatku, lepiej uwa¿aj...\n"; break;
	case 4: cout << "\nJanek Sasiewicz: Nie jest dobrze chlopcze. Niebezpieczne sily wroga chca zniszczyc nasza wladze! Potrzebujemy obrony."; break;
	}
}



