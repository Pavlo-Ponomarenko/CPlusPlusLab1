// CPlusPlusLab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Library.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "ukr");
	int size;
	int index = 0;
	cout << "		База данних довідково-бібліографічного відділу" << endl;
	cout << "Для початку роботи введіть максимальну кількість книг для зберігання" << endl;
	cout << "розмір = ";
	cin >> size;
	Book* data = new Book[size];
	cout << "Список комманд: " << endl;
	cout << "l - (list) вивести список книг з відповідними параметрами" << endl;
	cout << "i - (input) ввести данні нової книги" << endl;
	cout << "c - (change) изменить данные книги" << endl;
	cout << "d - (delete) удалить книгу" << endl;
	cout << "f - (find) виконати пошук за наступними параметрами:" << endl;
	cout << "	a - (author) за ім\'ям автора" << endl;
	cout << "	b - (book) за назвою книги" << endl;
	cout << "e - (end) завершити роботу" << endl;
	while (true) 
	{
		char command;
		cout << "Команда << ";
		cin >> command;
		switch (command) 
		{
		case 'l':

		}
	}
}

