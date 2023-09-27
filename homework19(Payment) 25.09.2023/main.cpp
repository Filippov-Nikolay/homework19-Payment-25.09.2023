#include <iostream>
#include "Payment.h"

using namespace std;

int main() {
    setlocale(0, "");

    Payment a;
    a.Input();

    cout << "Начисленная сумма: ";
    cout << a.CalculationOfAccruedAmount() << endl;

    cout << "Удержанная сумма: ";
    cout << a.CalculationOfTheAmountWithheld() << endl;

    cout << "Зарплата на руки: ";
    cout << a.SumNetSalary() << endl;

    cout << "Стаж: ";
    cout << a.CalculationOfLengthOfService() << endl;

    return 0;
}