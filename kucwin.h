#include <iostream>
using namespace std;

class kucwin {
	string wybor; //pobiera wpisane przez gracza informacje
	string nazwa_imperium; //do zapisu w historii
	char wyborplik; //wybor czy chcemy wypisaæ z pliku

	fstream plik; //do otworzenia pliku
	string tekst; //do wypisu z pliku
	
public:
	void zawiedziony(); //kwestia dialogowa
	void inwestycja(); //inwestycja w lechcoin
	void budowa_imperium(); //nadanie nazwy imperium do zapisu w historii 
	void wypisz_zpliku(); //wypis historii rozgrywek
	void przegrana(); //kwestia gdy gracz przegra
	~kucwin() = default; //destruktor
};