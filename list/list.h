#pragma once
#include "listElement.h"
class list
{
public:
	list();
	~list();
	listElement * head;
	listElement * tail;
	void add(int wartosc);
	void del();
	void print();
};

