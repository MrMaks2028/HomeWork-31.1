#include "Task1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");

	cout << "������ 1.\n������� ������ � ����� ��������� -> ";
	int n, m;
	cin >> n >> m;
	cout << "������ ��������� - " << n << "\n����� ��������� - " << m << "\n";

	try{
	cout << task1(n, m);
	}
	catch (exception &a) {
		cout << "������: " << a.what() << endl;
	}

	return 0;
}
