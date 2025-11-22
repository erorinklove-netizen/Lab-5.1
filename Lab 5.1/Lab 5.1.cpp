// Lab 5_1
// < Якимів Наталія > 
// Лабораторна робота № 5.1
// Варіант 7

#include <iostream>
#include <cmath>
using namespace std;

double f(const double a, const double b, const double c);   // прототип

int main()
{
    double s, t;
    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    double numerator = f(1, t * t, s) + f(t, s * s, 1);
    double denominator = 1 + pow(f(1, t * s, 1), 2);

    double result = numerator / denominator;

    cout << "result = " << result << endl;
    return 0;
}

double f(const double a, const double b, const double c)   // визначення
{
    return pow(sin(a * b * c), 2) / (a * a + b * b + c * c);
}

