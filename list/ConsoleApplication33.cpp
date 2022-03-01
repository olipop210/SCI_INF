#include <iostream>
#include "list.h"
#include "listElement.h"
using namespace std;
int main()
{
	list lista1;
	for (int i = 0; i < 10; i++)
	{
		lista1.add(i);
	}
	lista1.print();
	lista1.del();
	lista1.print();
	lista1.add(56);
	lista1.print();
}


