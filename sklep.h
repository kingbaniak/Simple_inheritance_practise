#include <iostream>
using namespace std;

class sklep : private biznesmen, private panmietek
	//dziedziczenie prywatne; metody dziedziczone nie bêd¹ u¿ywane poza klas¹ sklep
{
private:
	char bronwybor; 
	char wybor; //pola pobieraj¹ wybór gracza - co gracz chce zakupiæ
	gracz* tryb; //polimorfizm - wyœwietlanie cen w zale¿noœci od trybu gry wymaga wskaŸnika
public:
	void zakupy(gracz &tryb); //zakupy - pobieraj¹ obiekt typu gracz w celu dopasowania cennika i kupionych produktów do trybu gry
	void zakup_broni(gracz& tryb, char); //zakup broni - pobiera obiekt typu gracz w celu dopasowania cennika i kupionych produktów do trybu gry, oraz char w celu doboru typów broni do wariantu zakoñczenia
	~sklep() = default; //destruktor
};