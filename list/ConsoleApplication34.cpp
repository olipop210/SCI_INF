#include <iostream>
#include "list.h"
#include "listElement.h"
using namespace std;
int main()
{
	list obiekt;
	for (int i = 0; i < 10; i++)
	{
		obiekt.add(i);
	}
	obiekt.print();
	obiekt.del();
	obiekt.print();
}