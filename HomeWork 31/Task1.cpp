#include "Task1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int task1(int n, int m) {
	srand(time(NULL));
	if (n > m)
		throw std::invalid_argument("Начало диапозона больше конца");
	if (n == m)
		throw std::invalid_argument("Начало равно концу диапозона.");
	int k = rand() % (m - n) + n;
	std::cout << "Случайное число из диапозона -> ";
	return k;
}