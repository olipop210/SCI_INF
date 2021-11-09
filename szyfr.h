#pragma once
#include <string>
#include <iostream>
using namespace std;
class szyfr
{
public:
	szyfr();
	~szyfr();
	string tekst_wejsciowy;
	string szyfrowanie_cezara(string tekst_wejsciowy);
	string szyfrowanie_przestawne(string tekst_wejsciowy);
	string szyfrowanie_wszystko(string tekst_wejsciowy);
	string deszyfrowanie_cezara(string tekst_wejsciowy);
};

