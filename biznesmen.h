#include <iostream>
using namespace std;

class biznesmen : public gracz, protected npc {
	                //gracz dziedziczony publicznie ze wzgl�du na polimorfizm, npc dziedziczone protected - metody npc s� potrzebne w klasie zadanie, kt�ra dziedziczy od biznesmena
	int monety;
	int sila;
	int parowki; //posiadane przez postaci przedmioty

	kucwin kuc; //pole typu kucwin stworzony w celu wywo�ywania funkcji publicznych klasy kucwin; 
	char czypozyczka; //pole char tworzone aby rozr�ni�, czy gracz wzi�� po�yczk�

	string odpowiedz; //pole pobieraj�ce odpowiedzi na pytania (do instrukcji warunkowych)

	//U�ywane w 3. etapie gry
	char bron; //pobiera informacj� o tym, jak� bro� wybra� u�ytkownik
	int dawane_obrazenia; //obra�enia, jakie daje przeciwnikowi gracz; zale�ne od wybranej broni
	int moc; //pe�na moc, odbierana stopniowo przez obra�enia od wroga
	int moc_wroga; //pe�na moc wroga, odbierana stopniowo przez obra�enia od gracza

	int* tablica; //do sortowania b�belkowego
	int pkt; //do liczenia punkt�w

protected: //funkcje maj� analogiczne dzia�anie jak w klasie gracz; s� zapisane jako protected, bo u�ywane s� jedynie jako cz�ci innych funkcji w klasach pochodnych
	void ekwipunek();
	void handluj_parowkami(); 
	void kup_parowki();
	void sen();
	void cennik();

	void zadanie1a();
	void zadanie1b();
	void zadanie2();

	void starcie1(char);
	void starcie2(char);
	void starcie3(char);

	void bron1A();
	void bron2A();
	void bron1C();
	void bron2C();

	void pozyczka();
	void monetyplus(char);

public:
	biznesmen() = default; //konstruktor
	biznesmen(int,int,int); //konstruktor przypisuj�cy warto�ci pocz�tkowe przy tworzeniu obiektu
	~biznesmen() = default; //destruktor

	void punkty(); 

	friend void dlabiznesmena(biznesmen& x); //klasa zaprzyja�niona wy�wietlaj�ca, co gracz posiada na start, w zale�no�ci od wybranej klasy
};
