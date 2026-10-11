#include <iostream>
#include <cmath>

using namespace std;
int main(){
    setlocale(LC_ALL, ".65001");
    cout << "Результат для float:" << endl;
    float a=1000.0f;
    float b=0.0001f;
    //Подсчет числителя
    float c=(a-b);
    float c3=pow(c, 3);
    float a3=pow(a, 3);
    float num1=3*a*a*b;
    float chisl=c3-(a3-num1);
    //Подсчет знаменателя 
    float b3=pow(b, 3);
    float num2=3*a*b*b;
    float znam=b3-num2;

    float res=chisl/znam;
    cout << "Результат:" << res << endl;
    cout << "(a-b)=" << c << endl;
    cout << "(a-b)^3=" << c3 << endl;
    cout << "a^3=" << a3 << endl;
    cout << "3a^2b=" << num1 << endl;
    cout << "Числитель=" << chisl << endl;
    cout << "b^3=" << b3 << endl;
    cout << "3ab^2=" << num2 << endl;
    cout << "Знаменатель=" << znam << endl << endl;

    cout << "Результат для double:" << endl;
    double a2=1000.0;
    double b2=0.0001;
    //Подсчет числителя
    double cd=(a2-b2);
    double c3d=pow(cd, 3);
    double a3d=pow(a2, 3);
    double num1d=3*a2*a2*b2;
    double chisld=c3d-(a3d-num1d);
    //Подсчет знаменателя 
    double b3d=pow(b2, 3);
    double num2d=3*a2*b2*b2; 
    double znamd=b3d-num2d;

    double res2=chisld/znamd;
    cout << "Результат:" << res2 << endl;
    cout << "(a-b)=" << cd << endl;
    cout << "(a-b)^3=" << c3d << endl;
    cout << "a^3=" << a3d << endl;
    cout << "3a^2b=" << num1d << endl;
    cout << "Числитель=" << chisld << endl;
    cout << "b^3=" << b3d << endl;
    cout << "3ab^2=" << num2d << endl;
    cout << "Знаменатель=" << znamd << endl << endl;

    return 0;
}