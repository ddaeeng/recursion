#include <iostream>
#include <cmath>
#include <clocale>
#include <iomanip>
using namespace std;
double f(double x) {
	return 0.25 * x * x * x+x-1.2502;
}
double f1(double x) {
	return 0.75*x*x +1;
}
int main() {
	setlocale(LC_ALL, "Rus");
	double x0 = 2.0;
	double e = 1e-6;
	int m_it = 100;
	int k = 0;
	bool fl = false;
	while (k < m_it && !fl) {
		double xn = x0 - f(x0) / f1(x0);
		k++;
		cout << " Точность:" << abs(xn - x0) << endl;
		if (abs(xn - x0) < e) {
			fl = true;
		}
		x0 = xn;
		cout << "Приблеженное значение корня" << setprecision(10) << x0 << endl;
		cout << "Количество итераций" << k << endl;
	}
	return 0;
}
