// Lab_03_4.cpp
// Дякун Богдан
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 4
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	double x; 
	double y; 
	double R; 
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((y <= sqrt(R * R - x * x) && y >= 0) || (y <= x && y >= -R && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
