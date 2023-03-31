#include <iostream>
using namespace std;

class gracz {
protected:
	//DO SKLEPU Z BRONI¥

	void cennikbroniA(); //cennik broni w zale¿noœci od wybranego zakoñczenia
	void cennikbroniC();
public:
	// DO SKLEPU

	virtual void ekwipunek() = 0; //pokazuje co posiada gracz
	virtual void handluj_parowkami() = 0; //sprzeda¿ parówek
	virtual void kup_parowki() = 0; //zakup parówek - kupowane s¹ tañsze niz sprzedawane
	virtual void sen() = 0; //odbudowanie energii
	virtual void cennik() = 0; //ceny parówek w zale¿noœci od trybu

	//DO ZADAÑ

	virtual void zadanie1a() = 0; //opcja spotkania Krystiana Wbutaka
	virtual void zadanie1b() = 0; //opcja spotkania D¹bromira Jod³onierza
	virtual void zadanie2() = 0; //pytanie od Grzemiesza Br¹zowego

	//DODATKOWE FUNKCJE W TRAKCIE GRY

	virtual void pozyczka() = 0; //mo¿liwoœæ po¿yczki od Grzemiesza jeœli fundusze gracza s¹ zbyt ma³e
	virtual void monetyplus(char) = 0; //monety otrzymane od br¹zowego/sasiewcza

	//DO SKLEPU Z BRONI¥

	virtual void bron1A() = 0; //broñ gorsza (darmowa)
	virtual void bron2A() = 0; //broñ lepsza (droga)
	virtual void bron1C() = 0;
	virtual void bron2C() = 0;

	//DO WALKI

	virtual void starcie1(char) = 0; //tylko odebranie mocy
	virtual void starcie2(char) = 0; //mo¿liwoœæ zdobycia dodatkowych puktów mocy
	virtual void starcie3(char) = 0; //ostatnie odebranie mocy i wynik pojedynku

	//INNE

	virtual void punkty() = 0; //przyznanie punktow na koniec
	virtual ~gracz() = default; //destruktor wirtualny
};