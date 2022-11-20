//Нахождение НОД для чисел, количество знаков в числах больше 15
#include <iostream>
#include "bigNumber.h"
#include <string>
using namespace std;
int main()
{
	//Числа, ограниченные MAX_SIZE
	string s1;
	string s2;
	cout << "Введите первое число: ";
	cin >> s1;
	cout << endl;
	cout << "Введите второе число: ";
	cin >> s2;
	cout << endl;

	bigNumber n1(s1);
	n1.numPrint();

	bigNumber n2(s2);
	n2.numPrint();

	//n1 += n2;
	//n1.numPrint();

	if (n1 > n2)
		cout << "n1 - big";
	else
		cout << "n2 - big";
	cout << endl;
	//n1 -= n2;
	//cout << endl;
	//n1.numPrint();
	//bigNumber n3;
	//n3 = n1;
	//n3 -= n2;
	//n1 = n3;
	NOD(n1, n2);
	cout << "Наибольший общий делитель = ";
	n1.numPrint();
	cout << endl;
	//n2.numPrint();
	cin.get();
}

