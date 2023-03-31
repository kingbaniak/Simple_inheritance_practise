#include <iostream>
using namespace std;

class npc {
	char wybor; //wybór œcie¿ki
	int wersja; //wybór wariantu wypowiedzi
	
public:
	void wprowadzenie1();
	void wprowadzenie2(); //wprowadzenia wyœwietlane na pocz¹tku gry

	void dabromir_jodlonierz(); //postaæ spotykana przy wyborze zadania1b
	void krystian_wbutak(); //postaæ spotykana przy wyborze zadania1a

	void grzemiesz_brazowy(int); 
	void janek_sasiewicz(int); //postaci spotykane w 2. etapie gry; pobierany int s³u¿y do wybrania wariantu dialogu 
	~npc() = default; //destruktor
};
