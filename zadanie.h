#include <iostream>
using namespace std;

class zadanie : private biznesmen, private panmietek {
	         //dziedziczenie prywatne; metody dziedziczone nie b�d� u�ywane poza klas� zadanie;
	char wybor; //do wyboru �cie�ek kt�rymi idzie gracz
public:
	void wybor1(gracz& tryb); //wyb�r 1 - po spotkaniu ze sprzedawc�; zale�ne od trybu
	void wybor2(gracz& tryb); //wyb�r 2 - wyb�r zako�czenia gry; zale�ne od trybu

	void walka(char); //do walki - pobiera char kt�ry zawa�y o zako�czeniu
};