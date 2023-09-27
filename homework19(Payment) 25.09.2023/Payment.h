#pragma once
#include <iostream>
#include <string>

using namespace std;

class Payment {
	string firstName;
	string lastName;
	string surName;
	int salary;
	int yearOfEntryToWork;
	float bonusPercentage;
	int incomeTax;
	int numberOfDaysWorkedPerMonth;
	int numberOfWorkingDaysPerMonth;
	int accruedAmount;
	int amountWithheld;
public:
	// Конструктор
	Payment();
	Payment(string, string, string, int, int, float, int, int);

	void Input(); // Ввод с клавиатуры
	void Print() const; // Вывод


	// Расчеты 
	// Вычисление начисленной суммы
	float CalculationOfAccruedAmount();
	// Вычисление удержанной суммы
	float CalculationOfTheAmountWithheld();
	// Вычисление суммы на руки
	float SumNetSalary();
	// Вычисление стажа
	int CalculationOfLengthOfService();


	// Аксессоры
	// Геттеры
	string GetFisrtName() const;
	string GetLastName() const;
	string GetSurName() const;

	int GetSalary() const;
	int GetYearOfEntryToWork() const;
	float GetBonusPercentage() const;
	int GetIncomeTax() const;
	int GetNumberOfDaysWorkedPerMonth() const;
	int GetNumberOfWorkingDaysPerMonth() const;
	int GetAccruedAmount() const;
	int GetAmountWithheld() const;

	// Сеттеры
	void SetFisrtName(string);
	void SetLastName(string);
	void SetSurName(string);

	void SetSalary(int);
	void SetYearOfEntryToWork(int);
	void SetBonusPercentage(float);
	void SetIncomeTax(int);
	void SetNumberOfDaysWorkedPerMonth(int);
	void SetNumberOfWorkingDaysPerMonth(int);
	void SetAccruedAmount(int);
	void SetAmountWithheld(int);
};

