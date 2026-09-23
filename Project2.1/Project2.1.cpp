//Lab_02.cpp
//Грідасов Святослав Максимович
//Лабораторна робота № 2.
//Лінійні програми
//Варіант5.

#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	double a; //вхідне значення
	double z1; //результат обчислення першого виразу
	double z2; //результат обчислення 2 виразу
	cout << "a = "; cin >> a;
	z1 = 1 - 0.25 * (sin(2*a) * sin(2*a)) + cos(2*a);
	z2 = cos(a) * cos(a) + cos(a) * cos(a) * cos(a) * cos(a);
	cout << endl;
	cout << "z1 = " << z1 << endl; // вивід результату z1
	cout << "z2 = " << z2 << endl; // вивід результату z2
	cin.get();
	return 0;
}
// текст для зміни 2 


//зміни для коміту 3 у головній гілці
//зміни для 5 коміту головної гілки