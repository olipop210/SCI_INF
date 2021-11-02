#include <iostream>
#include <string>

using namespace std;
string tekst_wejsciowy, tekst_wyjsciowy;
int wybor, klucz;


string  szyfrowanie_cezara(string tekst_wejsciowy)
{
	string temp_string;
	cout << "podaj klucz szyfrowania w zakresie od 1 do 26\n";
	cin >> klucz;
	for (int i = 0; i < tekst_wejsciowy.size(); i++)
	{
		if (tekst_wejsciowy[i] > 96)
		{
			char temp;
			temp = tekst_wejsciowy[i] + klucz;
			if (temp >= 123)
			{
				temp = temp % 123 + 97;
			}
			temp_string += temp;
		}
		else
		{
			temp_string += tekst_wejsciowy[i];
		}
	}
	return temp_string;
}

string  deszyfrowanie_cezara(string tekst_wejsciowy)
{
	string temp_string;
	cout << "podaj klucz szyfrowania w zakresie od 1 do 26\n";
	cin >> klucz;
	for (int i = 0; i < tekst_wejsciowy.size(); i++)
	{
		if (tekst_wejsciowy[i] > 96)
		{
			char temp;
			temp = tekst_wejsciowy[i] - klucz;
			if (temp >= 123)
			{
				temp = temp % 123 + 97;
			}
			temp_string += temp;
		}
		else
		{
			temp_string += tekst_wejsciowy[i];
		}
	}
	return temp_string;
}

string szyfrowanie_przestawieniowe(string tekst_wejsciowy)
{
	string temp_string;
	char temp1, temp2;
	for (int i = 0; i < tekst_wejsciowy.size()-1; i += 2)
	{
		swap(tekst_wejsciowy[i], tekst_wejsciowy[i + 1]);

		temp1 = tekst_wejsciowy[i];
		temp_string += temp1;
		temp1 = tekst_wejsciowy[i+1];
		temp_string += temp1;
	}
	return temp_string;
}

string szyfrowanie_wszysto(string tekst_wejsciowy)
{
	string temp;

	tekst_wyjsciowy = szyfrowanie_cezara((szyfrowanie_przestawieniowe(tekst_wejsciowy)));
	return tekst_wyjsciowy;
}
string deszyfrowanie_wszystko(string tekst_wejsciowy)
{
	string temp;

	tekst_wyjsciowy = deszyfrowanie_cezara((szyfrowanie_przestawieniowe(tekst_wejsciowy)));
	return tekst_wyjsciowy;
}

int main()
{
	cout << "wprowadz tekst\n";
	getline(cin, tekst_wejsciowy);
	cout << "wybierz algorytm szyfrujacy: \n";
	cout << "1. Szyf cezara\n";
	cout << "2. Szyfr przestawieniowy\n";
	cout << "3. Szyfr Cezara i przestawieniowy\n";
	cout << "4. odszyfruj\n";
	cin >> wybor;
	if (wybor == 1)
	{
		tekst_wyjsciowy = szyfrowanie_cezara(tekst_wejsciowy);
		cout << "tekst wyjsciowy brzmi: " << tekst_wyjsciowy << endl;
	}
	if (wybor == 2)
	{
		tekst_wyjsciowy = szyfrowanie_przestawieniowe(tekst_wejsciowy);
		cout << "tekst wyjsciowy brzmi: " << tekst_wyjsciowy << endl;
	}
	if (wybor == 3)
	{
		tekst_wyjsciowy = szyfrowanie_wszysto(tekst_wejsciowy);
		cout << "tekst wyjsciowy brzmi: " << tekst_wyjsciowy << endl;
	}
	if (wybor == 4)
	{
		cout << "co chcesz odszyfrowac? \n";
		cout << "1. Szyf cezara\n";
		cout << "2. Szyfr przestawieniowy\n";
		cout << "3. Szyfr Cezara i przestawieniowy\n";
		cin >> wybor;
		if (wybor == 1)
		{
			tekst_wyjsciowy = deszyfrowanie_cezara(tekst_wejsciowy);
			cout << "tekst wyjsciowy brzmi: " << tekst_wyjsciowy << endl;
		}
		if (wybor == 2)
		{
			tekst_wyjsciowy = szyfrowanie_przestawieniowe(tekst_wejsciowy);
			cout << "tekst wyjsciowy brzmi: " << tekst_wyjsciowy << endl;
		}
		if (wybor == 3)
		{
			tekst_wyjsciowy = deszyfrowanie_wszystko(tekst_wejsciowy);
			cout << "tekst wyjsciowy brzmi: " << tekst_wyjsciowy << endl;
		}
	}
}