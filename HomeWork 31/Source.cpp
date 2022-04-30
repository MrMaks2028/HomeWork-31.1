#include "Task1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");

	cout << "Задача 1.\nВведите начало и конец диапозона -> ";
	int n, m;
	cin >> n >> m;
	cout << "Начало диапозона - " << n << "\nКонец диапозона - " << m << "\n";

	try{
	cout << task1(n, m);
	}
	catch (exception &a) {
		cout << "ОШИБКА: " << a.what() << endl;
	}

	return 0;
}
