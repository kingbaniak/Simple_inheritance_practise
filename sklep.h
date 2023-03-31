#include <iostream>
using namespace std;

class sklep : private biznesmen, private panmietek
	//dziedziczenie prywatne; metody dziedziczone nie b�d� u�ywane poza klas� sklep
{
private:
	char bronwybor; 
	char wybor; //pola pobieraj� wyb�r gracza - co gracz chce zakupi�
	gracz* tryb; //polimorfizm - wy�wietlanie cen w zale�no�ci od trybu gry wymaga wska�nika
public:
	void zakupy(gracz &tryb); //zakupy - pobieraj� obiekt typu gracz w celu dopasowania cennika i kupionych produkt�w do trybu gry
	void zakup_broni(gracz& tryb, char); //zakup broni - pobiera obiekt typu gracz w celu dopasowania cennika i kupionych produkt�w do trybu gry, oraz char w celu doboru typ�w broni do wariantu zako�czenia
	~sklep() = default; //destruktor
};