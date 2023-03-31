#include <iostream>
using namespace std;

class panmietek : public gracz, protected npc
{
	int monety;
	int sila;
	int parowki;

	kucwin kuc;
	string odpowiedz;
	char czypozyczka;

	int dawane_obrazenia;
	int moc;
	int moc_wroga;

	int* tablica;
	int pkt;

protected:
	void ekwipunek();
	void cennik();

	void handluj_parowkami();
	void kup_parowki();
	void sen();

	void zadanie1a();
	void zadanie1b();
	void zadanie2();

	void bron1A();
	void bron2A();
	void bron1C();
	void bron2C();

	void pozyczka();
	void monetyplus(char zakonczenie);

	void starcie1(char zakonczenie);
	void starcie2(char zakonczenie);
	void starcie3(char zakonczenie);

public:
	panmietek(int, int, int);
	panmietek() = default;
	~panmietek() = default;
	void punkty();

	friend void dlamietka(panmietek&x);
};
