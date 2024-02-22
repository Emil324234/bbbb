#include <Windows.h>
#include <iostream>

using namespace std;

int main() {
    const int stroki = 3;
    const int elements = 5;
    double arr[stroki][elements];


    cout << "Enter massive: ";
    for (int i = 0; i < stroki; i++) {
        cout << "Stroka:  " << i + 1 << ": ";
        for (int j = 0; j < elements; j++) {
            cin >> arr[i][j];
        }
    }


    for (int i = 0; i < stroki; i++) {
        double sum = 0;
        for (int j = 0; j < elements; j++) {
            sum += arr[i][j];
        }
        double srednearyfmitecheskoe = sum / elements;
        cout << "Srednee arifmiticheskoye  " << i + 1 << ": " << srednearyfmitecheskoe << endl;
    }

    return 0;
}

