#include <iostream>
#include "windows.h"
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int function() {
    int N;
    cout << "Введите положительное целое число N (> 10): "; 
    cin >> N;
for (int X = 1; X <= N; X++) {
     for (int Y = 1; Y <= N; Y++) {
        for (int Z = 1; Z <= N; Z++) {
          if (X + Y + Z == N && X == gcd(Y, Z) && X != Y && X != Z && Y != Z) {
                    cout << "Найдена тройка (X, Y, Z): " << X << ", " << Y << ", " << Z << endl;
                    return 0; 
          }
        }
     }
}

    cout << "Не удалось найти подходящую тройку для N = " << N << endl;

    return 0;
}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
cout << "Доброго дня! Это задача С.\n";
function();
}

