#include <iostream>
#include "sortowanie.h"
using namespace std;
int main()
{
	cout << endl << "nowy obiekt" << endl;
	sortowanie obiekt;
	obiekt.wypisz_vector();
	obiekt.sortowanie_babelki();
	cout << "\n sortowanie \n";
	obiekt.wypisz_vector();
	cout << endl <<"nowy obiekt" << endl;
	sortowanie obiekt2;
	obiekt2.wypisz_vector();
	cout << "\n sortowanie wstawianie \n";
	obiekt2.sortowanie_wstawianie();
	obiekt2.wypisz_vector();
}
