#include "MyVector.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
MyVector::MyVector()
{
	size = 10;
	tablica = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> tablica[i];
	}
}

MyVector::MyVector(int size)
{
	if (size < 0)
	{
		cout << "podales niewlasciwy rozmiar obiektu" << endl;
	}
	else
	{
		this->size = size;
		tablica = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> tablica[i];
		}
	}
}

MyVector::MyVector(int min, int max, int size)
{
	if (size < 0)
	{
		cout << "podales niewlasciwy rozmiar obiektu" << endl;
	}
	else
	{
		srand(time(NULL));
		this->size = size;
		int zakres = max - min;
		tablica = new int[size];
		for (int i = 0; i < size; i++)
		{
			tablica[i] = rand() % zakres + min;
		}
	}

}


MyVector::~MyVector()
{
	delete[] tablica;
}

void MyVector::wypisz()
{
	cout << "=================================\n";
	cout << "ten obiekt MyVector ma " << size << " elementow\n";
	cout << "=================================\n";
	cout << "lista elementow:\n";
	for (int i = 0; i < size; i++)
	{
		cout << "element[" << i << "] ma wartosc " << tablica[i] << endl;
	}

}

void MyVector::dodaj(int element)
{
	size++;
	int* tempTab = new int[size];
	for (int i = 0; i < size - 1; i++)
	{
		tempTab[i] = tablica[i];
	}
	tempTab[size - 1] = element;
	delete[] tablica;
	tablica = tempTab;
}

void MyVector::wstaw(int element, int miejsce)
{
	if (element >= 0 && element < size)
	{
		int* tempTab = new int[size + 1];
		for (int i = 0; i < miejsce; i++)
		{
			tempTab[i] = tablica[i];
		}
		tempTab[miejsce] = element;
		for (int i = miejsce; i < size; i++)
		{
			tempTab[i + 1] = tablica[i];
		}
		size++;
		delete[] tablica;
		tablica = tempTab;
	}
	else
	{
		cout << "miejsce spoza zakresu obiektu MyVector!!!\n";
	}
}

void MyVector::usun()
{
	size--;
	int* tempTab = new int[size];
	for (int i = 0; i < size; i++)
	{
		tempTab[i] = tablica[i];
	}
	delete[] tablica;
	tablica = tempTab;
}

void MyVector::usun(int miejsce)
{
	if (miejsce >= 0 && miejsce < size)
	{
		size--;
		int * tempTab = new int[size];
		for (int i = 0; i < miejsce; i++)
		{
			tempTab[i] = tablica[i];
		}
		for (int i = miejsce; i < size; i++)
		{
			tempTab[i] = tablica[i+1];
		}
		delete[] tablica;
		tablica = tempTab;
	}
}

int MyVector::getSize()
{
	return size;
}

int MyVector::getObject(int miejsce)
{
	if (miejsce <= size)
	{
		return tablica[miejsce];
	}
	else
	{
		cout << "BLAD! Niewlasciwy index tablicy\n";
		return INT_MIN;
	}
}

