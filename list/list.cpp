#include "list.h"
#include "listElement.h"
#include <iostream>
using namespace std;

list::list()
{
	head = nullptr;
	tail = nullptr;
}

list::~list()
{

}

void list::add(int wartosc)
{
	listElement * temp = new listElement();
	temp->nextElement = nullptr;
	temp->value = wartosc;
	if (head == nullptr)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		tail->nextElement = temp;
		tail = temp;
	}
}

void list::del()
{
	if (head == nullptr)
	{
		cout << "nie ma co usunac\n";
	}
	else
	{

		listElement *wsk1 = head;
		listElement *wsk2 = head->nextElement;
		while (wsk2->nextElement)
		{
			wsk1 = wsk1->nextElement;
			wsk2 = wsk2->nextElement;
		}
		wsk1->nextElement = nullptr;
		tail = wsk1;
		delete wsk2;
	}
}

void list::print()
{
	listElement * temp = head;
	while (temp)
	{
		cout << temp->value;
		temp = temp->nextElement;
	}
	cout << endl;

}


