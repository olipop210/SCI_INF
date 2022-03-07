#include "list.h"
#include "listElement.h"
#include <iostream>
using namespace std;

list::list()
{
	head = nullptr;
	tail = head;
}

list::~list()
{

}

void list::add(int wartosc)
{
	listElement * temp = new listElement();  //tworzy nowy wskaznik
	temp->previousElement = nullptr;
	temp->nextElement = nullptr; //nastepny wskaznik = nullptr JEST NA KONCU
	temp->value = wartosc; //nadaje wartosc wskaznikowi
	if (head == nullptr) //jesli dodajesz pierwszy element
	{
		head = temp;
		tail = temp;
		head->previousElement = tail;
	}
	else //jesli sa juz jakies elementy
	{
		temp->previousElement = tail;
		temp->nextElement = head;
		tail->nextElement = temp;
		tail = temp;
		head->previousElement = tail;
	}
}

void list::del()
{
	listElement * temp = tail;
	tail = tail->previousElement;
	tail->nextElement = head;
	delete temp;
}

void list::print()
{
	listElement * temp = head;
	while (temp->nextElement != head)
	{
		cout << temp->value;
		temp = temp->nextElement;
	}
	cout << tail->value;
	cout << endl;

}

int list::at(int index)
{
	listElement * temp = head;
	for (int i = 0; i < index; i++)
	{
		temp = temp->nextElement;
	}
	return temp->value;
}

