#include "Payment.h"

using namespace std;


// Конструкторы
Payment::Payment() {
	firstName = nullptr;
	lastName = nullptr;
	surName = nullptr;

	yearOfEntryToWork = 0;
	salary = 0;
	bonusPercentage = 0;
	numberOfDaysWorkedPerMonth = 0;
	numberOfWorkingDaysPerMonth = 0;
}
Payment::Payment(string fn, string ln, string sr, int yoetw, int s, float bp, int nodwpm, int nowdpm) {
	firstName = fn;
	lastName = ln;
	surName = sr;

	yearOfEntryToWork = yoetw;
	salary = s;
	bonusPercentage = bp;
	numberOfDaysWorkedPerMonth = nodwpm;
	numberOfWorkingDaysPerMonth = nowdpm;
}


// Ввод с клавиатуры
void Payment::Input() {
	cout << "Введите имя: ";
	cin >> firstName;

	cout << "Введите фамилию: ";
	cin >> lastName;

	cout << "Введите отчество: ";
	cin >> surName;

	cout << "Введите год поступления: ";
	cin >> yearOfEntryToWork;

	cout << "Введите оклад: ";
	cin >> salary;

	cout << "Введите надбавку к окладу (если есть): ";
	cin >> bonusPercentage;

	cout << "Кол-во отработаных дней в текущем месяце: ";
	cin >> numberOfDaysWorkedPerMonth;

	cout << "Кол-во раб. дней: ";
	cin >> numberOfWorkingDaysPerMonth;
}
// Вывод
void Payment::Print() const {
	cout << "Фамилия: " << lastName << endl;
	cout << "Имя: " << firstName << endl;
	cout << "Отчество: " << surName << endl;
	cout << "Год поступления: " << yearOfEntryToWork << endl;
	cout << "Оклад: " << salary << endl;
	cout << "Надбавка к окладу: " << bonusPercentage << endl;
	cout << "Кол-во отработаных дней в текущем месяце: " << numberOfDaysWorkedPerMonth << endl;
	cout << "Кол-во раб. дней: " << numberOfWorkingDaysPerMonth << endl;
}


// Вычисление начисленной суммы
float Payment::CalculationOfAccruedAmount() {
	accruedAmount = salary + (salary * bonusPercentage / 100);
	return accruedAmount;
}
// Вычисление удержанной суммы
float Payment::CalculationOfTheAmountWithheld() {
	int pensionFund = 1;
	int incomeTax = 13;

	amountWithheld = (accruedAmount * ((float)incomeTax / 100.0)) + ((float)salary * 1 / 100.0);
	return amountWithheld;
}
// Вычисление "чистой" ЗП
float Payment::SumNetSalary() {
	return accruedAmount - amountWithheld;
}
// Вычисление стажа
int Payment::CalculationOfLengthOfService() {
	int thisYear;

	do {
		cout << "Введите текущий год: ";
		cin >> thisYear;
		if (thisYear < yearOfEntryToWork) {
			cout << "Вы ввели неверный год!" << endl;
		}
	} while (thisYear < yearOfEntryToWork);

	return thisYear - yearOfEntryToWork;
}


// Аксессоры
// Геттеры
string Payment::GetFisrtName() const {
	return firstName;
}
string Payment::GetLastName() const {
	return lastName;
}
string Payment::GetSurName() const {
	return surName;
}

int Payment::GetSalary() const {
	return salary;
}
int Payment::GetYearOfEntryToWork() const {
	return yearOfEntryToWork;
}
float Payment::GetBonusPercentage() const {
	return bonusPercentage;
}
int Payment::GetIncomeTax() const {
	return incomeTax;
}
int Payment::GetNumberOfDaysWorkedPerMonth() const {
	return numberOfDaysWorkedPerMonth;
}
int Payment::GetNumberOfWorkingDaysPerMonth() const {
	return numberOfWorkingDaysPerMonth;
}
int Payment::GetAccruedAmount() const {
	return accruedAmount;
}
int Payment::GetAmountWithheld() const {
	return amountWithheld;
}

// Сеттеры
void Payment::SetFisrtName(string fn) {
	firstName = fn;
}
void Payment::SetLastName(string ln) {
	lastName = ln;
}
void Payment::SetSurName(string sn) {
	surName = sn;
}

void Payment::SetSalary(int s) {
	salary = s;
}
void Payment::SetYearOfEntryToWork(int yoetw) {
	yearOfEntryToWork = yoetw;
}
void Payment::SetBonusPercentage(float bp) {
	bonusPercentage = bp;
}
void Payment::SetIncomeTax(int it) {
	incomeTax = it;
}
void Payment::SetNumberOfDaysWorkedPerMonth(int nodwpm) {
	numberOfDaysWorkedPerMonth = nodwpm;
}
void Payment::SetNumberOfWorkingDaysPerMonth(int nowdpm) {
	numberOfWorkingDaysPerMonth = nowdpm;
}
void Payment::SetAccruedAmount(int aa) {
	accruedAmount = aa;
}
void Payment::SetAmountWithheld(int aw) {
	amountWithheld = aw;
}