#include <iostream>
#include <fstream> 
#include <stdio.h>
#include <windows.h>
#include <string>
#include "npc.h"
#include "gracz.h"
#include "kucwin.h"
#include "biznesmen.h"
#include "panmietek.h"
#include"sklep.h"
#include "zadanie.h"
using namespace std;

void gracz::cennikbroniA()
{
	cout << "\nCENNIK: \n";
	cout << "a) Tarcza antykryzysowa i miecz do walki z kapitalizmem : +7 obrazen - darmowe\nb) Szczerbiec i zbroja : +1000 obrazen - 1500 monet\n";
}
void gracz::cennikbroniC()
{
	cout << "a) Sznur i pa³ka : +50 obrazen - darmowy\nb) Szczerbiec i zbroja : +2000 obrazen - 750 monet\n";
}