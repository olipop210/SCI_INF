#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class sortowanie
{
public:
	sortowanie();
	~sortowanie();
	int temp, temp1; 	int temppp;
	vector <int> elementy;
	void sortowanie_babelki();
	void sortowanie_wstawianie();
	void wypisz_vector();
	void sortowanie_wybor();
	void quicksort(int left, int right);
	void sortowanie_scalanie(int iP, int iK);
	int szukaj(int p, int k);
	int szukajposortowane(int lewy, int prawy, int szukana);
};