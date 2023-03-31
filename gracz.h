#include <iostream>
using namespace std;

class gracz {
protected:
	//DO SKLEPU Z BRONI�

	void cennikbroniA(); //cennik broni w zale�no�ci od wybranego zako�czenia
	void cennikbroniC();
public:
	// DO SKLEPU

	virtual void ekwipunek() = 0; //pokazuje co posiada gracz
	virtual void handluj_parowkami() = 0; //sprzeda� par�wek
	virtual void kup_parowki() = 0; //zakup par�wek - kupowane s� ta�sze niz sprzedawane
	virtual void sen() = 0; //odbudowanie energii
	virtual void cennik() = 0; //ceny par�wek w zale�no�ci od trybu

	//DO ZADA�

	virtual void zadanie1a() = 0; //opcja spotkania Krystiana Wbutaka
	virtual void zadanie1b() = 0; //opcja spotkania D�bromira Jod�onierza
	virtual void zadanie2() = 0; //pytanie od Grzemiesza Br�zowego

	//DODATKOWE FUNKCJE W TRAKCIE GRY

	virtual void pozyczka() = 0; //mo�liwo�� po�yczki od Grzemiesza je�li fundusze gracza s� zbyt ma�e
	virtual void monetyplus(char) = 0; //monety otrzymane od br�zowego/sasiewcza

	//DO SKLEPU Z BRONI�

	virtual void bron1A() = 0; //bro� gorsza (darmowa)
	virtual void bron2A() = 0; //bro� lepsza (droga)
	virtual void bron1C() = 0;
	virtual void bron2C() = 0;

	//DO WALKI

	virtual void starcie1(char) = 0; //tylko odebranie mocy
	virtual void starcie2(char) = 0; //mo�liwo�� zdobycia dodatkowych pukt�w mocy
	virtual void starcie3(char) = 0; //ostatnie odebranie mocy i wynik pojedynku

	//INNE

	virtual void punkty() = 0; //przyznanie punktow na koniec
	virtual ~gracz() = default; //destruktor wirtualny
};