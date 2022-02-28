#include "list.h"
#include "listElement.h"

list::list()
{
	head = nullptr;
	tail = nullptr;
}

void list::add(int wartosc)
{
	listElement * temp = new listElement();
	temp->nextElement = nullptr;
	temp->value = wartosc;
}

void list::del()
{
}

void list::get(listElement element)
{
}
