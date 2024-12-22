#include <iostream>
#include <cmath>
#include < clocale>

using namespace std;

const double PI = 3.14159265358979323846;


double factorial(int n) { //  функция для вычисления факториала
    if (n <= 1) {
        return 1.0;
    }
    return n * factorial(n - 1);
}

// Рекурсивная функция для вычисления косинуса угла, умноженного на π/4
double Cos(int n) {
    return Cos(n * PI / 4);
}

double sumr(int n, double x) { // Рекурсивная функция для вычисления суммы ряда
    if (n == 0) {
        return 1.0; //  S_0 = 1
    }
   
    double previous_term =sumr(n - 1, x);  // вычисляем предыдущий член ряда
    
    double current_term = (Cos(n) / factorial(n)) * pow(x, n); // Вычисляем текущий член ряда
   
    cout << "N= " << n<<' ';
    cout << "S= "<<previous_term + current_term << endl;  // Возвращаем сумму предыдущего члена и текущего члена
    return previous_term + current_term;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    double x;

    
    cout << "Введите значение n: ";
    cin >> n;
    cout << "Введите значение x: ";
    cin >> x;

    
    double sum = sumr(n, x); // Вычисление суммы ряда с использованием рекурсии

    
    cout << "Сумма ряда S = " << sum << endl;

    return 0;
}
