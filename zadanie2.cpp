#include <iostream>
#include <string>
#include "szyfr.h"
int wybor;
string tekst_wejsciowy, tekst_wyjsciowy;
int main()
{
	cout << "wprowadz tekst\n";
	getline(cin, tekst_wejsciowy);
	cout << "wybierz algorytm szyfrujacy: \n";
	cout << "1. Szyf cezara\n";
	cout << "2. Szyfr przestawieniowy\n";
	cout << "3. Szyfr Cezara i przestawieniowy\n";
	cout << "4. odszyfruj szyfr cezara\n";
	cin >> wybor;
	szyfr NieWiemPoCoToRobic;
	if (wybor == 1)
	{
		tekst_wyjsciowy = NieWiemPoCoToRobic.szyfrowanie_cezara(tekst_wejsciowy);
		cout << "zaszyfrowany tekst: "<< tekst_wyjsciowy;
	}
	if (wybor == 2)
	{
		tekst_wyjsciowy = NieWiemPoCoToRobic.szyfrowanie_przestawne(tekst_wejsciowy);
		cout << "zaszyfrowany tekst: " << tekst_wyjsciowy;
	}
	if (wybor == 3)
	{
		tekst_wyjsciowy = NieWiemPoCoToRobic.szyfrowanie_wszystko(tekst_wejsciowy);
		cout << "zaszyfrowany tekst: " << tekst_wyjsciowy;
	}
	if (wybor == 4)
	{
		tekst_wyjsciowy = NieWiemPoCoToRobic.deszyfrowanie_cezara(tekst_wejsciowy);
	}
}


