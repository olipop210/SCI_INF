#include "szyfr.h"
szyfr::szyfr()
{

}
szyfr::~szyfr()
{

}

string szyfr::szyfrowanie_cezara(string tekst_wejsciowy)
{
	int klucz;
	string temp_string;
	cout << "podaj klucz szyfrowania w zakresie od 1 do 26\n";
	cin >> klucz;
	for (int i = 0; i < tekst_wejsciowy.size(); i++)
	{
		if (tekst_wejsciowy[i] > 96)
		{
			unsigned char temp;
			temp = tekst_wejsciowy[i] + klucz;
			if (temp >= 123)
			{
				temp = (temp % 123) + 97;
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

string szyfr::szyfrowanie_przestawne(string tekst_wejsciowy)
{
	string temp_string;
	char temp1, temp2;
	for (int i = 0; i < tekst_wejsciowy.size() - 1; i += 2)
	{
		swap(tekst_wejsciowy[i], tekst_wejsciowy[i + 1]);
		temp1 = tekst_wejsciowy[i];
		temp_string += temp1;
		temp1 = tekst_wejsciowy[i + 1];
		temp_string += temp1;
	}
	if (tekst_wejsciowy.size() % 2 == 1)
	{
		temp1 = tekst_wejsciowy[tekst_wejsciowy.size() - 1];
		temp_string += temp1;
	}
	return temp_string;
}

string szyfr::szyfrowanie_wszystko(string tekst_wejsciowy)
{
	string tekst_wyjsciowy;

	tekst_wyjsciowy = szyfrowanie_cezara((szyfrowanie_przestawne(tekst_wejsciowy)));
	return tekst_wyjsciowy;
}

string szyfr::deszyfrowanie_cezara(string tekst_wejsciowy)
{
	int klucz;
	string temp_string;
	for (int klucz = 0; klucz < 26; klucz++)
	{
		for (int i = 0; i < tekst_wejsciowy.size(); i++)
		{
			if (tekst_wejsciowy[i] > 96)
			{
				unsigned char temp;
				temp = tekst_wejsciowy[i] - klucz;
				if (temp <= 96)
				{
					char x = (tekst_wejsciowy[i] % 97) + 123;
					x -= klucz;
					temp = x;
				}
				temp_string += temp;
			}
			else
			{
				temp_string += tekst_wejsciowy[i];
			}
		}
		cout << "mozliwy tekst: " << temp_string << endl;
		temp_string = "";
	}
	return temp_string;
}

