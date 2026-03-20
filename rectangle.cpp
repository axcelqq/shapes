#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;

    cout << "Введите стороны прямоугольника (a и b): ";
    cin >> a >> b;

    cout << "Периметр: " << 2 * (a + b) << endl;
    cout << "Площадь: " << a * b << endl;
    cout << "Диагональ: " << sqrt(a * a + b * b) << endl;

    return 0;
}
