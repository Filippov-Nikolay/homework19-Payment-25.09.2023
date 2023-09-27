#include "Payment.h"

using namespace std;


// ������������
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


// ���� � ����������
void Payment::Input() {
	cout << "������� ���: ";
	cin >> firstName;

	cout << "������� �������: ";
	cin >> lastName;

	cout << "������� ��������: ";
	cin >> surName;

	cout << "������� ��� �����������: ";
	cin >> yearOfEntryToWork;

	cout << "������� �����: ";
	cin >> salary;

	cout << "������� �������� � ������ (���� ����): ";
	cin >> bonusPercentage;

	cout << "���-�� ����������� ���� � ������� ������: ";
	cin >> numberOfDaysWorkedPerMonth;

	cout << "���-�� ���. ����: ";
	cin >> numberOfWorkingDaysPerMonth;
}
// �����
void Payment::Print() const {
	cout << "�������: " << lastName << endl;
	cout << "���: " << firstName << endl;
	cout << "��������: " << surName << endl;
	cout << "��� �����������: " << yearOfEntryToWork << endl;
	cout << "�����: " << salary << endl;
	cout << "�������� � ������: " << bonusPercentage << endl;
	cout << "���-�� ����������� ���� � ������� ������: " << numberOfDaysWorkedPerMonth << endl;
	cout << "���-�� ���. ����: " << numberOfWorkingDaysPerMonth << endl;
}


// ���������� ����������� �����
float Payment::CalculationOfAccruedAmount() {
	accruedAmount = salary + (salary * bonusPercentage / 100);
	return accruedAmount;
}
// ���������� ���������� �����
float Payment::CalculationOfTheAmountWithheld() {
	int pensionFund = 1;
	int incomeTax = 13;

	amountWithheld = (accruedAmount * ((float)incomeTax / 100.0)) + ((float)salary * 1 / 100.0);
	return amountWithheld;
}
// ���������� "������" ��
float Payment::SumNetSalary() {
	return accruedAmount - amountWithheld;
}
// ���������� �����
int Payment::CalculationOfLengthOfService() {
	int thisYear;

	do {
		cout << "������� ������� ���: ";
		cin >> thisYear;
		if (thisYear < yearOfEntryToWork) {
			cout << "�� ����� �������� ���!" << endl;
		}
	} while (thisYear < yearOfEntryToWork);

	return thisYear - yearOfEntryToWork;
}


// ���������
// �������
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

// �������
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