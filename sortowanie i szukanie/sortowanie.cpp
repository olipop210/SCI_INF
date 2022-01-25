
#include "sortowanie.h"
#include "sortowanie.h"
const int ilosc_elementow = 100;
sortowanie::sortowanie()
{
	srand(time(NULL));
	for (int i = 0; i < ilosc_elementow; i++)
	{
		temp = rand() % 10000;
		elementy.push_back(temp);
	}
}
sortowanie::~sortowanie()
{

}
void sortowanie::wypisz_vector()
{
	for (int i = 0; i < ilosc_elementow; i++)
	{
		cout << elementy[i] << "	";
	}
}

void sortowanie::sortowanie_babelki()
{
	for (int j = 0; j < ilosc_elementow; j++)
	{
		for (int i = 0; i < ilosc_elementow; i++)
		{
			if (i != ilosc_elementow - 1)
			{
				if (elementy[i] > elementy[i + 1])
				{
					temp = elementy[i];
					temp1 = elementy[i + 1];
					elementy[i] = temp1;
					elementy[i + 1] = temp;
				}
			}
		}
	}
}

void sortowanie::sortowanie_wstawianie()
{
	int x, i;
	vector <int> temp = elementy;
	for (int j = ilosc_elementow - 1; j > -1; j--)
	{
		x = temp[j];
		i = j + 1;
		while (i < ilosc_elementow && x > temp[i])
		{
			temp[i - 1] = temp[i];
			i = i + 1;
		}
		temp[i - 1] = x;
	}
	elementy = temp;
}

void sortowanie::sortowanie_wybor()
{
	int index_minimalnej;
	for (int i = 0; i < elementy.size(); i++)
	{
		index_minimalnej = i;
		for (int j = i + 1; j < elementy.size(); j++)
		{
			if (elementy[j] < elementy[index_minimalnej])
			{
				index_minimalnej = j;
			}
		}
		swap(elementy[i], elementy[index_minimalnej]);
	}
}

void sortowanie::quicksort(int left, int right)
{
	int i = (left + right) / 2;
	int piwot = elementy[i];
	elementy[i] = elementy[right];
	int j = left;
	for (i = left; i < right; i++)
	{
		if (elementy[i] < piwot)
		{
			swap(elementy[i], elementy[j]);
			j = j + 1;
		}

	}
	elementy[right] = elementy[j];
	elementy[j] = piwot;
	if (left < j - 1)
	{
		quicksort(left, j - 1);
	}
	if (j + 1 < right)
	{
		quicksort(j + 1, right);
	}
}

vector <int> scal(int iP, int iS, int iK, vector <int> elementy)
{
	int temp[ilosc_elementow];
	int i, j;
	for (i = iS + 1; i > iP; i--)
	{
		temp[i - 1] = elementy[i - 1];
	}
	for (j = iS; j < iK; j++)
	{
		temp[iK + iS - j] = elementy[j + 1];
	}
	for (int k = iP; k <= iK; k++)
	{
		if (temp[j] < temp[i])
		{
			elementy[k] = temp[j--];
		}
		else
		{
			elementy[k] = temp[i++];
		}
	}
	return elementy;
}

void sortowanie::sortowanie_scalanie(int iP, int iK)
{
	if (iK <= iP)
	{
		return;
	}
	int iS = (iP + iK) / 2;
	sortowanie_scalanie(iP, iS);
	sortowanie_scalanie(iS + 1, iK);
	elementy = scal(iP, iS, iK, elementy);

}

int sortowanie::szukaj(int p, int k)
{
	for (int i = p; i < elementy.size(); i++)
	{
		if (elementy[i] == k)
		{

			return i;
		}
		temppp = i;
	}
	return -1;
}

int sortowanie::szukajposortowane(int lewy, int prawy, int szukana)
{
	temppp++;
	int srodek = (lewy + prawy) / 2;

	if (elementy[srodek] == szukana)
	{
		return srodek;
	}
	if (prawy <= lewy)
	{
		return -1;
	}
	else if (elementy[srodek] < szukana)
	{
		szukajposortowane(srodek + 1, prawy, szukana);
	}
	else if (elementy[srodek] > szukana)
	{
		szukajposortowane(lewy, srodek - 1, szukana);
	}
}
