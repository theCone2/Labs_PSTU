#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, ".65001");
    double e=pow(10, -4);
    double suma=0;
    double a;
    int n=1;
    int count=0;

    cout << "Вычисление суммы ряда" << endl;
    cout << "Точность: " << e << endl;
    cout << "Формула: a = (-1)^(n-1)/n^n" << endl;
    a = pow(-1, n-1)/pow(n, n);
    while (fabs(a)>=e){
        suma+=a;
        count+=1;
        cout << "n = " << n << ", a = " << a << ", S = " << suma << endl;
        n+=1;
        a=pow(-1, n-1)/pow(n, n);
    }
    cout << "Сумма ряда S = " << suma << endl;
    cout << "Количество членов: " << count << endl;

    return 0;
}
