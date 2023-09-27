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
	// �����������
	Payment();
	Payment(string, string, string, int, int, float, int, int);

	void Input(); // ���� � ����������
	void Print() const; // �����


	// ������� 
	// ���������� ����������� �����
	float CalculationOfAccruedAmount();
	// ���������� ���������� �����
	float CalculationOfTheAmountWithheld();
	// ���������� ����� �� ����
	float SumNetSalary();
	// ���������� �����
	int CalculationOfLengthOfService();


	// ���������
	// �������
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

	// �������
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

