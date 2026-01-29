// task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include "../Project1/MathLibrary.h"
int main()
{
	int a, b, c;
	cout << "Enter:";
	cin >> a >> b >> c;
	cout << "Result:" << perimeter(a, b, c);
}