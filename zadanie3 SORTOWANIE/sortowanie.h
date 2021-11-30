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
	int temp, temp1;
	vector <int> elementy;
	void sortowanie_babelki();
	void sortowanie_wstawianie();
	void wypisz_vector();
};

