#include <iostream>
#include <chrono>
#include "sortowanie.h"
#include <fstream>
using namespace std;
int main()
{
	//cout << endl << "nowy obiekt" << endl;
	//sortowanie obiekt;
	//obiekt.wypisz_vector();
	//obiekt.sortowanie_babelki();
	//cout << "\n sortowanie \n";
	//obiekt.wypisz_vector();
	//cout << endl << "nowy obiekt" << endl;
	//sortowanie obiekt2;
	//obiekt2.wypisz_vector();
	//cout << "\n sortowanie wstawianie \n";
	//obiekt2.sortowanie_wstawianie();
	//obiekt2.wypisz_vector();
	sortowanie obiekty[3];
	fstream plik;
	plik.open("wyniki.txt", ios::app);
	plik << endl << "wyniki dla " << obiekty[0].elementy.size() << " elementow\n";
	for (int i = 0; i < 3; i++)
	{
		auto start = chrono::steady_clock::now();
		obiekty[i].sortowanie_babelki();
		auto end = chrono::steady_clock::now();
		auto czas = chrono::duration<double>(end - start);
		cout << "czas " << i+1 << " sortowania babelkowego: " << czas.count() << endl;
		plik << "czas " << i + 1 << " sortowania babelkowego: " << czas.count() << endl;
	}
	sortowanie obiekty2[3];
	for (int i = 0; i < 3; i++)
	{
		auto start = chrono::steady_clock::now();
		obiekty[i].sortowanie_wstawianie();
		auto end = chrono::steady_clock::now();
		auto czas = chrono::duration<double>(end - start);
		cout << "czas " << i + 1 << " sortowania wstawieniowego: " << czas.count() << endl;
		plik << "czas " << i + 1 << " sortowania wstawieniowego: " << czas.count() << endl;
	}
	plik.close();
}
