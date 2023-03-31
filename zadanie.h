#include <iostream>
using namespace std;

class zadanie : private biznesmen, private panmietek {
	         //dziedziczenie prywatne; metody dziedziczone nie bêd¹ u¿ywane poza klas¹ zadanie;
	char wybor; //do wyboru œcie¿ek którymi idzie gracz
public:
	void wybor1(gracz& tryb); //wybór 1 - po spotkaniu ze sprzedawc¹; zale¿ne od trybu
	void wybor2(gracz& tryb); //wybór 2 - wybór zakoñczenia gry; zale¿ne od trybu

	void walka(char); //do walki - pobiera char który zawa¿y o zakoñczeniu
};