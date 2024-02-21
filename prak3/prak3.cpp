#include <iostream>
#include <Windows.h>

using namespace std;

static void inputMatrix(double matrix[3][5], int three, int five) {
    for (int i = 0; i < three; ++i) {
        cout << "Введите элементы " << i + 1 << "-й строки: ";
        for (int j = 0; j < five; ++j) {
            cin >> matrix[i][j];
        }
    }
}

double averageOfRow(const double row[], int five) {
    double sum = 0.0;
    for (int i = 0; i < five; ++i) {
        sum += row[i];
    }
    return sum / five;
}

int main() {
    SetConsoleCP(1251);
    setlocale(0, "Russian");

    const int three = 3;
    const int five = 5;

    double matrix[3][5];
    inputMatrix(matrix, three, five);

    for (int i = 0; i < three; ++i) {
        double average = averageOfRow(matrix[i], five);
        cout << "Среднее арифметическое элементов " << i + 1 << "-й строки: " << average << endl;
    }

    return 0;
}
