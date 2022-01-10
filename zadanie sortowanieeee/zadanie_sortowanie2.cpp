#include <iostream>
#include <chrono>
#include "sortowanie.h"
#include <fstream>
#include <algorithm>
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
		obiekty2[i].sortowanie_wstawianie();
		auto end = chrono::steady_clock::now();
		auto czas = chrono::duration<double>(end - start);
		cout << "czas " << i + 1 << " sortowania wstawieniowego: " << czas.count() << endl;
		plik << "czas " << i + 1 << " sortowania wstawieniowego: " << czas.count() << endl;
	}
	sortowanie obiekty3[3];
	for (int i = 0; i < 3; i++)
	{
		auto start = chrono::steady_clock::now();
		obiekty3[i].sortowanie_wybor();
		auto end = chrono::steady_clock::now();
		auto czas = chrono::duration<double>(end - start);
		cout << "czas " << i + 1 << " sortowania przez wybor: " << czas.count() << endl;
		plik << "czas " << i + 1 << " sortowania przez wybor: " << czas.count() << endl;
	}
	sortowanie obiekty4[3];
	for (int i = 0; i < 3; i++)
	{
		auto start = chrono::steady_clock::now();
		sort(obiekty4[i].elementy.begin(), obiekty4[i].elementy.end());
		auto end = chrono::steady_clock::now();
		auto czas = chrono::duration<double>(end - start);
		cout << "czas " << i + 1 << " sortowania funkcja sort: " << czas.count() << endl;
		plik << "czas " << i + 1 << " sortowania funkcja sort: " << czas.count() << endl;
	}
	sortowanie obiekty5[3];
	for (int i = 0; i < 3; i++)
	{
		auto start = chrono::steady_clock::now();
		obiekty5[i].quicksort(0, obiekty5[i].elementy.size() -1);
		auto end = chrono::steady_clock::now();
		auto czas = chrono::duration<double>(end - start);
		cout << "czas " << i + 1 << " quick sort: " << czas.count() << endl;
		plik << "czas " << i + 1 << " quick sort: " << czas.count() << endl;
	}
	sortowanie obiekty6[3];
	for (int i = 0; i < 3; i++)
	{
		auto start = chrono::steady_clock::now();
		obiekty6[i].sortowanie_scalanie(0, obiekty6[i].elementy.size() - 1);
		auto end = chrono::steady_clock::now();
		auto czas = chrono::duration<double>(end - start);
		cout << "czas " << i + 1 << " sortowania przez scalenie: " << czas.count() << endl;
		plik << "czas " << i + 1 << " sortowania przez scalenie: " << czas.count() << endl;
	}

	sortowanie testowy;
	testowy.quicksort(0, testowy.elementy.size() - 1);
	testowy.wypisz_vector();
	plik.close();
}
