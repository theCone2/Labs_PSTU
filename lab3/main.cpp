#include <iostream>
#include <cmath>
#include <iomanip>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, ".65001");
    double a=1.0, b=2.0;
    int k=10;
    int n=15;
    double eps=0.0001;
    double step=(b-a)/k;
    
    cout << "Вычисление функции" << endl;
    cout << "y=e^x, диапазон [" << a << ", " << b << "]" << endl;
    cout << "n=" << n << ", e=" << eps << endl;
    cout << endl;
    
    // Внешний цикл - изменение параметра x
    for (double x=a; x<=b+step/2; x+=step) {
        // Первый внутренний цикл - арифметический для заданного n
        double SN=0;
        double term_n=1; // первый член ряда (x^0/0! = 1)
        SN=term_n;
        
        for (int i=1; i<=n; i++) {
            term_n*=x/i; // рекуррентная формула: a_i = a_{i-1} * x / i
            SN+=term_n;
        }
        // Второй внутренний цикл - итерационный для заданной точности ε
        double SE=1; // первый член ряда
        double term_eps=1;
        int i=1;
        
        while (fabs(term_eps)>=eps) {
            term_eps*=x/i; // рекуррентная формула
            SE+=term_eps;
            i++;
        }
        // Точное значение функции
        double Y=exp(x);
        // Вывод результатов в требуемом формате
        cout << "X=" << fixed << setprecision(4) << x
             << "  SN=" << setprecision(10) << SN
             << "  SE=" << setprecision(10) << SE
             << "  Y=" << setprecision(10) << Y
             << endl;
    }
    return 0;
}
