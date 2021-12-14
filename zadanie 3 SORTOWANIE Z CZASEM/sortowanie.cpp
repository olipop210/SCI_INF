#include "sortowanie.h"
#include "sortowanie.h"
const int ilosc_elementow = 5000;
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
			if (i != ilosc_elementow-1)
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
	for (int j = ilosc_elementow-1; j > -1; j--)
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
