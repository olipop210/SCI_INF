

#pragma once
class MyVector
{
public:
	MyVector();
	MyVector(int size);
	MyVector(int min, int max, int size);
	~MyVector();
	void wypisz();
	void dodaj(int element);
	void wstaw(int element, int miejsce);
	void usun();
	void usun(int miejsce);
	int getSize();
	int getObject(int miejsce);
private:
	unsigned int size;
	int *tablica;
};

