#include <iostream>
#include "MyVector.h"
using namespace std;
int main()
{
	MyVector obiekt(1, 100, 10);
	obiekt.wypisz();
	obiekt.wstaw(25, 20);
	obiekt.wypisz();
}
