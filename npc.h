#include <iostream>
using namespace std;

class npc {
	char wybor; //wyb�r �cie�ki
	int wersja; //wyb�r wariantu wypowiedzi
	
public:
	void wprowadzenie1();
	void wprowadzenie2(); //wprowadzenia wy�wietlane na pocz�tku gry

	void dabromir_jodlonierz(); //posta� spotykana przy wyborze zadania1b
	void krystian_wbutak(); //posta� spotykana przy wyborze zadania1a

	void grzemiesz_brazowy(int); 
	void janek_sasiewicz(int); //postaci spotykane w 2. etapie gry; pobierany int s�u�y do wybrania wariantu dialogu 
	~npc() = default; //destruktor
};
