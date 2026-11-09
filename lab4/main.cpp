#include <iostream>
#include <cstdlib> // для rand() и srand()
#include <ctime>   // для time()
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, ".65001");
    srand(time(NULL));
    const int N = 100;
    int a[N]; 
    int n; 
    cout << "Введите размер массива: ";
    cin >> n;
    for (int i=0; i < n; i++) {
        a[i] = rand() % 100;
    }
    cout << "\nИсходный массив:" << endl;
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    int j=0;
    for (int i=0; i<n; i++) {
        if (a[i]%7!=0) { 
            a[j]=a[i];     
            j= j+1;       
        }
    }
    n = j; 
    cout << "\nМассив после удаления элементов, кратных 7:" << endl;
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i=n-1; i>=0; i=i-1) {
        if (a[i]%2!=0){ 
            for (int k=n;  k>i+1; k=k-1) {
                a[k]=a[k-1];
            }
            a[i+1]=0; 
            n+=1;  
        }
    }
    cout << "\nМассив после добавления 0 после нечетных элементов:" << endl;
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
