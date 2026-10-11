#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, ".65001");
    cout << "ЗАДАНИЕ 2" << endl;

    // Выражение 1: --m - ++n
    cout << "1 Выражение: --m - ++n" << endl;
    int m1 = 5, n1 = 3;
    cout << "   Начальные значения: m = " << m1 << ", n = " << n1 << endl;
    int res1 = --m1 - ++n1;
    cout << "   Результат: " << res1 << endl;
    cout << "   После выполнения: m = " << m1 << ", n = " << n1 << endl;
    
    // Выражение 2: m*n < n++
    cout << "2 Выражение: m*n < n++" << endl;
    int m2 = 5, n2 = 3;
    cout << "   Начальные значения: m = " << m2 << ", n = " << n2 << endl;
    bool res2 = (m2 * n2) < (n2++);
    cout << "   Результат: " << res2 << endl;
    cout << "   После выполнения: m = " << m2 << ", n = " << n2 << endl;
    
    // Выражение 3: n-- > m++
    cout << "3 Выражение: n-- > m++" << endl;
    int m3 = 5, n3 = 3;
    cout << "   Начальные значения: m = " << m3 << ", n = " << n3 << endl;
    bool res3 = (n3--) > (m3++);
    cout << "   Результат: " << res3 << endl;
    cout << "   После выполнения: m = " << m3 << ", n = " << n3 << endl;
  
    return 0;
}