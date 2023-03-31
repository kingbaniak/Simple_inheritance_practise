#include <iostream>
using namespace std;

class biznesmen : public gracz, protected npc {
	                //gracz dziedziczony publicznie ze wzglêdu na polimorfizm, npc dziedziczone protected - metody npc s¹ potrzebne w klasie zadanie, która dziedziczy od biznesmena
	int monety;
	int sila;
	int parowki; //posiadane przez postaci przedmioty

	kucwin kuc; //pole typu kucwin stworzony w celu wywo³ywania funkcji publicznych klasy kucwin; 
	char czypozyczka; //pole char tworzone aby rozró¿niæ, czy gracz wzi¹³ po¿yczkê

	string odpowiedz; //pole pobieraj¹ce odpowiedzi na pytania (do instrukcji warunkowych)

	//U¿ywane w 3. etapie gry
	char bron; //pobiera informacjê o tym, jak¹ broñ wybra³ u¿ytkownik
	int dawane_obrazenia; //obra¿enia, jakie daje przeciwnikowi gracz; zale¿ne od wybranej broni
	int moc; //pe³na moc, odbierana stopniowo przez obra¿enia od wroga
	int moc_wroga; //pe³na moc wroga, odbierana stopniowo przez obra¿enia od gracza

	int* tablica; //do sortowania b¹belkowego
	int pkt; //do liczenia punktów

protected: //funkcje maj¹ analogiczne dzia³anie jak w klasie gracz; s¹ zapisane jako protected, bo u¿ywane s¹ jedynie jako czêœci innych funkcji w klasach pochodnych
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
	biznesmen(int,int,int); //konstruktor przypisuj¹cy wartoœci pocz¹tkowe przy tworzeniu obiektu
	~biznesmen() = default; //destruktor

	void punkty(); 

	friend void dlabiznesmena(biznesmen& x); //klasa zaprzyjaŸniona wyœwietlaj¹ca, co gracz posiada na start, w zale¿noœci od wybranej klasy
};
