#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;
double f(double x) {
	return 0.25 * pow(x, 3) + x - 1.2502;
}	int main()
	{
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	a = 0;
	b = 2;
	int m_it = 100;
	int k = 0;
	bool fl = false;
	const double epsilon = 1e-6;

	while (b - a > epsilon) {
		c = (a + b) / 2;
		if (f(b) * f(c) < 0)
			a = c;
		else
			b = c;
		while (k < m_it && !fl) {
			double xn = f(x0);
			k++;
			cout << " Точность:" << abs(a - b) << endl;
			if (abs(a -b) < e) {
				fl = true;
			}
	cout << "Приближенное значение корня " << (a + b) / 2 << endl;
	cout << "Количество итераций" << k << endl;
	}
		
	
	return 0;
}