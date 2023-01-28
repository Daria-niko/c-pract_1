#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    int operation;
    double rez;
    double num1;
    double num2;
    setlocale(LC_ALL, "Russian");
    cout << "Калькулятор\n";
    while (true) {
        cout << "\n----------------------------------------------------";
        cout << "\nВыберите действие:\n";
        cout << "\n 1. Сложение \n 2. Вычитание \n 3. Умножение \n 4. Деление \n 5. Остаток от деления \n 6. Фибоначи \n 7. Выход \n";
        cin >> operation;
        if (operation >= 1 && operation <= 7) {
            if (operation == 1) {
                cout << "Первое число = ";
                cin >> num1;
                cout << "Второе число = ";
                cin >> num2;
                rez = num1 + num2;
                printf("Результат = %d", rez);
            }
            else if (operation == 2) {
                cout << "Первое число = ";
                cin >> num1;
                cout << "Второе число = ";
                cin >> num2;
                rez = num1 - num2;
                printf("Результат = %d", rez);
            }
            else if (operation == 3) {
                cout << "Первое число = ";
                cin >> num1;
                cout << "Второе число = ";
                cin >> num2;
                rez = num1 * num2;
                printf("Результат = %d", rez);
            }
            else if (operation == 4) {
                cout << "Первое число = ";
                cin >> num1;
                cout << "Второе число = ";
                cin >> num2;
                if (num2 == 0) {
                    std::cout << "Делить на 0 нельзя";
                }
                else {
                    rez = num1 / num2;
                    printf("Результат = %d", rez);
                }
            }
            else if (operation == 5) {
                cout << "Первое число = ";
                cin >> num1;
                cout << "Второе число = ";
                cin >> num2;
                rez = num1 % num2;
                printf("Результат = %d", rez);
            }
            else if (operation == 6) {
                num1 = 0;
                num2 = 1;
                int num_temp;
                int num_next = 1;
                int n;
                cout << "Введите нужное число для подсчета";
                cin >> n;
                if (n >= 1)
                    cout << 0 << " ";
                if (n >= 2)
                    cout << 1 << " ";
                for (int i = 0; i < n - 2; i++) {
                    num_next = num1 + num2;
                    cout << num_next << " ";
                    num1 = num2;
                    num2 = num_next;
                }
            }
            else if (operation == 7) {
                exit(0);
            }
        }
        else if (operation < 1 || operation > 7) {
            system("cls");
            cout << "Ошибка!! Неверно введена операция\n";
            cout << "Для продолжения перезапустите программу ";
            cout << "\n----------------------------------------------------\n";
            system("pause");
            exit(0);
            system("cls");
        }
    }
}


