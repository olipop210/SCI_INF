#include <iostream>
#include <vector>
#include <chrono>
#include "MyVector.h"
#define ROZMIAR 10000
using namespace std;
int main()
{
	/*
	vector<int> Biblioteka;
	auto start = chrono::steady_clock::now();
	for (int i = 0; i < ROZMIAR; i++)
	{
		Biblioteka.push_back(i);
	}
	auto end = chrono::steady_clock::now();
	auto czas = chrono::duration<double>(end - start);
	cout << "czas dodawania elementow do wektora: " << czas.count() << endl;
	MyVector MojaKlasa(0);
	start = chrono::steady_clock::now();
	for (int i = 0; i < ROZMIAR; i++)
	{
		MojaKlasa.dodaj(i);
	}
	end = chrono::steady_clock::now();
	czas = chrono::duration<double>(end - start);
	cout << "czas dodawania elementow do MyVectora: " << czas.count() << endl;

	start = chrono::steady_clock::now();
	for (int i = 0; i < ROZMIAR; i++)
	{
		Biblioteka.pop_back();
	}
	end = chrono::steady_clock::now();
	czas = chrono::duration<double>(end - start);
	cout << "czas usuwania elementow z wektora: " << czas.count() << endl;
	start = chrono::steady_clock::now();
	for (int i = 0; i < ROZMIAR; i++)
	{
		MojaKlasa.usun();
	}
	end = chrono::steady_clock::now();
	czas = chrono::duration<double>(end - start);
	cout << "czas usuwania elementow z MyVectora: " << czas.count() << endl;

	cout << "rozmiar vectora z biblioteki: " << sizeof(Biblioteka) << endl;
	cout << "rozmiar MyVectora z klasy: " << sizeof(MojaKlasa) << endl;
	*/

	//funkcja w wektorze ktora porownuje dwa wektory czy sa identyczne (true/false)
	//Myvector obiekt1; Myvector obiekt2; obiekt1.compare(obiekt2);

	MyVector obiekt1(1, 100, 10);
	MyVector obiekt2(0);
	obiekt2++;
	obiekt2.wypisz();
	obiekt2--;
	obiekt2.wypisz();
	obiekt2 = obiekt1;
	obiekt1.wypisz();
	obiekt2.wypisz();
}