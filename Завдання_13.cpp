#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int var = 0;          // Оголошення змінної типу int
    int* ptr = &var;      // Оголошення вказівника і присвоєння адреси змінної

    for (int i = 0; i < 10; i++) { // Цикл для збільшення значення змінної
        (*ptr)++;                  // Збільшення значення змінної через вказівник
        cout << "Значення var: " << var << endl;
    }

    return 0;
}
