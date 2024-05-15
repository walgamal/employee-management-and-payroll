#pragma once
using namespace std;
#include <iostream>
#include <fstream>
#include <string>
class Employee {
protected:
string firstName, lastName, ssn, hideSsn, id;
public:
Employee() {
firstName = "";
lastName = "";
ssn = "";
hideSsn = "";
id = "";
};
string getFirstName() {
return firstName;
}
string getLastName() {
return firstName;
}
void setFirstName(string input) {
firstName = input;
}
void setLastName(string input) {
lastName = input;
}
string getId() {
return id;
}
void setId(string input, bool& methodStatus) {
methodStatus = false;
if (input.length() == 5) {
for (int i = 0; i < 5; i++) {
if (i == 0 || i == 1 || i ==2) {
if (!(isdigit(input[i]))) {
methodStatus = false;
goto endLoop;
}
}
if (i == 3) {
if (input[i] != '-') {
methodStatus = false;
goto endLoop;
}
}
if (i == 4) {
switch (input[i]) {
case 'A':
case 'a':
input[i] = 'A';
methodStatus = true;
break;
case 'B':
case 'b':
input[i] = 'B';
methodStatus = true;
break;
case 'C':
case 'c':
input[i] = 'C';
methodStatus = true;
break;
case 'D':
case 'd':
input[i] = 'D';
methodStatus = true;
break;
case 'E':
case 'e':
input[i] = 'E';
methodStatus = true;
break;
case 'F':
case 'f':
input[i] = 'F';
methodStatus = true;
break;
case 'G':
case 'g':
input[i] = 'G';
methodStatus = true;
break;
case 'H':
case 'h':
input[i] = 'H';
methodStatus = true;
break;
case 'I':
case 'i':
input[i] = 'I';
methodStatus = true;
break;
case 'J':
case 'j':
input[i] = 'J';
methodStatus = true;
break;
case 'K':
case 'k':
input[i] = 'K';
methodStatus = true;
break;
case 'L':
case 'l':
input[i] = 'L';
methodStatus = true;
break;
case 'M':
case 'm':
input[i] = 'M';
methodStatus = true;
break;
default:
goto endLoop;
}
}
}
}
endLoop:
{
if (methodStatus == true) {
id = input;
}
}
}
string getSsn() {
return hideSsn;
}
void setSsn(string input, bool& methodStatus) {
methodStatus = false;
for (int i = 0; i < 11; i++) {
if (i == 3 || i == 6) {
if (input[i] != '-') {
goto endLoop;
}
}
else if (!(isdigit(input[i]))){
goto endLoop;
}
else if (i == 10 && isdigit(input[i])){
methodStatus = true;
}
}
endLoop:
{
if (methodStatus == true) {
hideSsn = input;
ssn = input;
for (int i = 0; i < 6; i++) {
if (i != 3) {
hideSsn[i] = 'X';
}
}
}
}
}
void printEmployee(ofstream& ofs) {
cout << "\n\nDATA FOR EMPLOYEE\n";
cout << "First Name: " << firstName << endl;
cout << "Last Name: " << lastName << endl;
cout << "SSN: " << hideSsn << endl;
cout << "ID: " << id << endl;
ofs << "\n\nDATA FOR EMPLOYEE\n";
ofs << "First Name: " << firstName << endl;
ofs << "Last Name: " << lastName << endl;
ofs << "SSN: " << ssn << endl;
ofs << "ID: " << id << endl;
ofs.flush();
}
};
class SalaryEmployeePay : public Employee {
protected:
float annualPay, weeklyPay;
int taxCode;
public:
SalaryEmployeePay() {
annualPay = 0.0;
weeklyPay = 0.0;
taxCode = 1;
}
float getAnnualPay() {
return annualPay;
}
void setAnnualPay(float input, bool& methodStatus) {
if (input > 0) {
methodStatus = true;
annualPay = input;
weeklyPay = annualPay / 52;
}
else {
methodStatus = false;
}
}
int getTaxCode() {
return taxCode;
}
void setTaxCode(int input, bool& methodStatus) {
if (input < 1 || input > 3) {
methodStatus = false;
}
else {
methodStatus = true;
taxCode = input;
}
}
void printSalaryEmployeePay(ofstream& ofs) {
float paymentDue = 0.0, taxRate = 0.0;
if (taxCode == 1) {
taxRate = 0.25;
}
else if (taxCode == 2) {
taxRate = 0.2;
}
else if (taxCode == 3) {
taxRate = 0.15;
}
paymentDue = weeklyPay - weeklyPay * taxRate;
cout << "\n\nDATA FOR SALARY EMPLOYEE\n";
cout << "First Name: " << firstName << endl;
cout << "Last Name: " << lastName << endl;
cout << "SSN: " << hideSsn << endl;
cout << "ID: " << id << endl;
cout << "Annual Pay: " << annualPay << endl;
cout << "Weekly Pay: " << weeklyPay << endl;
cout << "Tax Code: " << taxCode << endl;
cout << "Payment Due: " << paymentDue << endl;
ofs << "\n\nDATA FOR SALARY EMPLOYEE\n";
ofs << "First Name: " << firstName << endl;
ofs << "Last Name: " << lastName << endl;
ofs << "SSN: " << ssn << endl;
ofs << "ID: " << id << endl;
ofs << "Annual Pay: " << annualPay << endl;
ofs << "Weekly Pay: " << weeklyPay << endl;
ofs << "Tax Code: " << taxCode << endl;
ofs << "Payment Due: " << paymentDue << endl;
ofs.flush();
}
};
class HourlyEmployee : public Employee {
protected:
float hourlyPay, weeklyPay;
int numberOfHours;
public:
HourlyEmployee() {
hourlyPay = 0.0, weeklyPay = 0.0, numberOfHours = 0;
}
void setWeeklyPay(float input, bool& methodStatus) {
if (input < 3000 && input > 400) {
methodStatus = true;
weeklyPay = input;
hourlyPay = weeklyPay / 40;
}
else {
methodStatus = false;
}
}
float getHourlyPay() {
return hourlyPay;
}
float getWeeklyPay() {
return weeklyPay;
}
void setNumberOfHours(int input, bool& methodStatus) {
if (input < 1 || input > 60) {
methodStatus = false;
}
else {
methodStatus = true;
numberOfHours = input;
}
}
int getNumberOfHours() {
return numberOfHours;
}
void printHourlyEmployee(ofstream& ofs) {
cout << "\n\nDATA FOR HOURLY EMPLOYEE\n";
cout << "First Name: " << firstName << endl;
cout << "Last Name: " << lastName << endl;
cout << "SSN: " << hideSsn << endl;
cout << "ID: " << id << endl;
cout << "Weekly Pay: " << weeklyPay << endl;
cout << "Hourly Pay: " << hourlyPay << endl;
cout << "Hours Worked: " << numberOfHours << endl;
ofs << "\n\nDATA FOR HOURLY EMPLOYEE\n";
ofs << "First Name: " << firstName << endl;
ofs << "Last Name: " << lastName << endl;
ofs << "SSN: " << ssn << endl;
ofs << "ID: " << id << endl;
ofs << "Weekly Pay: " << weeklyPay << endl;
ofs << "Hourly Pay: " << hourlyPay << endl;
ofs << "Hours Worked: " << numberOfHours << endl;
ofs.flush();
}
};
class HourlyEmployeePay : public HourlyEmployee {
protected:
float overtimePay;
int taxCode;
char workStatus;
public:
HourlyEmployeePay() {
overtimePay = 0.0;
taxCode = 1;
workStatus = 'p';
}
float getOvertimePay() {
return overtimePay;
}
void setOvertimePay(float input) {
overtimePay = 1.5 * input;
}
void setTaxCode(int input, bool& methodStatus) {
if (input < 1 || input > 3) {
methodStatus = false;
}
else {
methodStatus = true;
taxCode = input;
}
}
int getTaxCode() {
return taxCode;
}
void setWorkStatus(char input, bool& methodStatus) {
if (input != 'p' && input != 'P' && input != 'f' && input != 'F') {
methodStatus = false;
}
else if (input == 'f' || input == 'F') {
methodStatus = true;
workStatus = input;
}
else if (input == 'p' || input == 'P') {
methodStatus = true;
workStatus = input;
}
}
char getWorkStatus() {
return workStatus;
}
void printHourlyEmployeePay(ofstream& ofs) {
float paymentDue = 0.0, taxRate = 0.0;
if (taxCode == 1) {
taxRate = 0.25;
}
else if (taxCode == 2) {
taxRate = 0.2;
}
else if (taxCode == 3) {
taxRate = 0.15;
}
if (numberOfHours > 40) {
paymentDue = (overtimePay * (numberOfHours % 40)) - (overtimePay
* ((numberOfHours % 40) * taxRate));
}
else {
paymentDue = (numberOfHours * hourlyPay) - (numberOfHours *
hourlyPay * taxRate);
}
cout << "\n\nDATA FOR HOURLY EMPLOYEE PAY\n";
cout << "First Name: " << firstName << endl;
cout << "Last Name: " << lastName << endl;
cout << "SSN: " << hideSsn << endl;
cout << "ID: " << id << endl;
cout << "Weekly Pay: " << weeklyPay << endl;
cout << "Hourly Pay: " << hourlyPay << endl;
cout << "Hours Worked: " << numberOfHours << endl;
cout << "Overtime Pay: $" << overtimePay << endl;
cout << "Tax Code: " << taxCode << endl;
cout << "Work Status: " << workStatus << endl;
cout << "Payment Due: " << paymentDue << endl;
ofs << "\n\nDATA FOR HOURLY EMPLOYEE PAY\n";
ofs << "First Name: " << firstName << endl;
ofs << "Last Name: " << lastName << endl;
ofs << "SSN: " << hideSsn << endl;
ofs << "ID: " << id << endl;
ofs << "Weekly Pay: " << weeklyPay << endl;
ofs << "Hourly Pay: " << hourlyPay << endl;
ofs << "Hours Worked: " << numberOfHours << endl;
ofs << "Overtime Pay: $" << overtimePay << endl;
ofs << "Tax Code: " << taxCode << endl;
ofs << "Work Status: " << workStatus << endl;
ofs << "Payment Due: " << paymentDue << endl;
ofs.flush();
}
};
class AgencyCompanyPay : public HourlyEmployeePay {
protected:
string companyToPay;
public:
AgencyCompanyPay() { companyToPay = ""; }
void setCompanyToPay(string input) {
companyToPay = input;
}
string getCompanyToPay() {
return companyToPay;
}
void printAgencyEmployeePay(ofstream& ofs) {
float paymentDue = 0.0, taxRate = 0.0;
if (taxCode == 1) {
taxRate = 0.25;
}
else if (taxCode == 2) {
taxRate = 0.2;
}
else if (taxCode == 3) {
taxRate = 0.15;
}
if (numberOfHours > 40) {
paymentDue = (overtimePay * (numberOfHours % 40)) - (overtimePay
* ((numberOfHours % 40) * taxRate));
}
else {
paymentDue = (numberOfHours * hourlyPay) - (numberOfHours *
hourlyPay * taxRate);
}
cout << "\n\nDATA FOR AGENCY EMPLOYEE PAY\n";
cout << "First Name: " << firstName << endl;
cout << "Last Name: " << lastName << endl;
cout << "SSN: " << hideSsn << endl;
cout << "ID: " << id << endl;
cout << "Weekly Pay: " << weeklyPay << endl;
cout << "Hourly Pay: " << hourlyPay << endl;
cout << "Hours Worked: " << numberOfHours << endl;
cout << "Overtime Pay: $" << overtimePay << endl;
cout << "Tax Code: " << taxCode << endl;
cout << "Work Status: " << workStatus << endl;
cout << "Payment Due: " << paymentDue << endl;
ofs << "\n\nDATA FOR AGENCY EMPLOYEE PAY\n";
ofs << "First Name: " << firstName << endl;
ofs << "Last Name: " << lastName << endl;
ofs << "SSN: " << hideSsn << endl;
ofs << "ID: " << id << endl;
ofs << "Weekly Pay: " << weeklyPay << endl;
ofs << "Hourly Pay: " << hourlyPay << endl;
ofs << "Hours Worked: " << numberOfHours << endl;
ofs << "Overtime Pay: $" << overtimePay << endl;
ofs << "Tax Code: " << taxCode << endl;
ofs << "Work Status: " << workStatus << endl;
ofs << "Payment Due: " << paymentDue << endl;
ofs.flush();
}
};