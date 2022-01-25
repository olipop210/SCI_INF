#include <iostream>
#include "sortowanie.h"
using namespace std;
int main()
{
	int szukana;
	sortowanie obiekt;
	cout << "czego chcesz szukac smiertelniku\n";

	obiekt.quicksort(0, obiekt.elementy.size() - 1);
	obiekt.wypisz_vector();
	cin >> szukana;
	int wynik = 0;
	wynik = obiekt.szukajposortowane(0, obiekt.elementy.size() - 1, szukana);
	cout << "ilosc wywolan " << obiekt.temppp << endl;
	if (wynik == -1)
	{
		cout << "nic nie znaleziono\n";
	}
	else
	{
		cout << "znaleziono wartosc na pozycji " << wynik;
	}


	sortowanie obiekt1;
	cout << endl << "czego chcesz szukac smiertelniku\n";
	cin >> szukana;
	wynik = obiekt1.szukaj(0, szukana);
	cout << "ilosc wywolan " << obiekt1.temppp << endl;
	if (wynik == -1)
	{
		cout << "nic nie znaleziono\n";
	}
	else
	{
		cout << "znaleziono wartosc na pozycji " << wynik;
	}

}