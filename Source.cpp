#include "Employees.h"
int main() {
int intInput;
float floatInput;
string stringInput;
char charInput;
ofstream ofs;
char sentinel = 'y';
bool methodStatus = false;
Employee employee;
SalaryEmployeePay salaryEmployee;
HourlyEmployee hourlyEmployee;
HourlyEmployeePay hourlyEmployeePay;
AgencyCompanyPay agencyEmployee;
ofs.open("pay.dat");
while(sentinel == 'y' || sentinel == 'Y'){
cout << "---------------------------------------------------\n";
cout << "1.) Employee\n";
cout << "2.) Salary Employee Pay\n";
cout << "3.) Hourly Employee\n";
cout << "4.) Hourly Employee Pay\n";
cout << "5.) Agency Employee Pay\n";
cout << "---------------------------------------------------\n";
cout << "Which type of employee would you like to create? ";
ofs << "---------------------------------------------------\n";
ofs << "1.) Employee\n";
ofs << "2.) Salary Employee Pay\n";
ofs << "3.) Hourly Employee\n";
ofs << "4.) Hourly Employee Pay\n";
ofs << "5.) Agency Employee Pay\n";
ofs << "---------------------------------------------------\n";
ofs << "Which type of employee would you like to create? ";
cin >> intInput;
ofs << "\nUser Selected " << intInput << endl << endl;
if (ofs.is_open()) {
if (intInput == 1) {
//Enter firstName
cout << "Enter Employee's First Name: ";
cin >> stringInput;
ofs << "Enter Employee's First Name: ";
ofs << stringInput << endl;
employee.setFirstName(stringInput);
//Enter lastName
cout << "Enter Employee's Last Name: ";
cin >> stringInput;
ofs << "Enter Employee's Last Name: ";
ofs << stringInput << endl;
employee.setLastName(stringInput);
//Enter SSN
cout << "Enter Employee's SSN: ";
cin >> stringInput;
ofs << "Enter Employee's SSN: ";
ofs << stringInput << endl;
employee.setSsn(stringInput, methodStatus);
//validate SSN format
while (methodStatus == false) {
cout << "ERROR: Invalid Format. Please Enter SSN In
Format XXX-XX-XXXX (x:number): ";
cin >> stringInput;
ofs << "ERROR: Invalid Format. Please Enter SSN In
Format XXX-XX-XXXX (x:number): ";
ofs << stringInput << endl;
employee.setSsn(stringInput, methodStatus);
}
//Enter ID
cout << "Enter Employee's ID: ";
cin >> stringInput;
ofs << "Enter Employee's ID: ";
ofs << stringInput << endl;
employee.setId(stringInput, methodStatus);
//validate ID format
while (methodStatus == false) {
cout << "ERROR: Invalid Format. Enter ID In Format
XXX-L (x:number,L:letter a-m): ";
cin >> stringInput;
ofs << "ERROR: Invalid Format. Enter ID In Format
XXX-L (x:number,L:letter a-m): ";
ofs << stringInput << endl;
employee.setId(stringInput, methodStatus);
}
employee.printEmployee(ofs);
}
else if (intInput == 2) {
//Enter firstName
cout << "Enter Employee's First Name: ";
cin >> stringInput;
ofs << "Enter Employee's First Name: ";
ofs << stringInput << endl;
salaryEmployee.setFirstName(stringInput);
//Enter lastName
cout << "Enter Employee's Last Name: ";
cin >> stringInput;
ofs << "Enter Employee's Last Name: ";
ofs << stringInput << endl;
salaryEmployee.setLastName(stringInput);
//Enter SSN
cout << "Enter Employee's SSN: ";
cin >> stringInput;
ofs << "Enter Employee's SSN: ";
ofs << stringInput << endl;
salaryEmployee.setSsn(stringInput, methodStatus);
//validate SSN format
while (methodStatus == false) {
cout << "ERROR: Invalid Format. Please Enter SSN In
Format XXX-XX-XXXX (x:number): ";
cin >> stringInput;
ofs << "ERROR: Invalid Format. Please Enter SSN In
Format XXX-XX-XXXX (x:number): ";
ofs << stringInput << endl;
salaryEmployee.setSsn(stringInput, methodStatus);
}
//Enter ID
cout << "Enter Employee's ID: ";
cin >> stringInput;
ofs << "Enter Employee's ID: ";
ofs << stringInput << endl;
salaryEmployee.setId(stringInput, methodStatus);
//validate ID format
while (methodStatus == false) {
cout << "ERROR: Invalid Format. Enter ID In Format
XXX-L (x:number,L:letter a-m): ";
cin >> stringInput;
ofs << "ERROR: Invalid Format. Enter ID In Format
XXX-L (x:number,L:letter a-m): ";
ofs << stringInput << endl;
salaryEmployee.setId(stringInput, methodStatus);
}
//Enter Annual pay
cout << "Enter Employee's Annual Salary: ";
cin >> floatInput;
ofs << "Enter Employee's Annual Salary: ";
ofs << floatInput << endl;
salaryEmployee.setAnnualPay(floatInput, methodStatus);
//validate annual pay
while (methodStatus == false) {
cout << "ERROR: Enter a Value Greater than 0: ";
cin >> floatInput;
ofs << "ERROR: Enter a Value Greater than 0: ";
ofs << floatInput << endl;
salaryEmployee.setAnnualPay(floatInput,
methodStatus);
}
//Enter Tax Code
cout << "Enter Employee's Tax Code: ";
cin >> intInput;
ofs << "Enter Employee's Tax Code: ";
ofs << intInput << endl;
salaryEmployee.setTaxCode(intInput, methodStatus);
//validate tax code
while (methodStatus == false) {
cout << "ERROR: Enter Tax Code 1-3: ";
cin >> intInput;
ofs << "ERROR: Enter Tax Code 1-3: ";
ofs << intInput << endl;
salaryEmployee.setTaxCode(intInput, methodStatus);
}
salaryEmployee.printSalaryEmployeePay(ofs);
}
else if (intInput == 3) {
//Enter firstName
cout << "Enter Employee's First Name: ";
cin >> stringInput;
ofs << "Enter Employee's First Name: ";
ofs << stringInput << endl;
hourlyEmployee.setFirstName(stringInput);
//Enter lastName
cout << "Enter Employee's Last Name: ";
cin >> stringInput;
ofs << "Enter Employee's Last Name: ";
ofs << stringInput << endl;
hourlyEmployee.setLastName(stringInput);
//Enter SSN
cout << "Enter Employee's SSN: ";
cin >> stringInput;
ofs << "Enter Employee's SSN: ";
ofs << stringInput << endl;
hourlyEmployee.setSsn(stringInput, methodStatus);
//validate SSN format
while (methodStatus == false) {
cout << "ERROR: Invalid Format. Please Enter SSN In
Format XXX-XX-XXXX (x:number): ";
cin >> stringInput;
ofs << "ERROR: Invalid Format. Please Enter SSN In
Format XXX-XX-XXXX (x:number): ";
ofs << stringInput << endl;
hourlyEmployee.setSsn(stringInput, methodStatus);
}
//Enter ID
cout << "Enter Employee's ID: ";
cin >> stringInput;
ofs << "Enter Employee's ID: ";
ofs << stringInput << endl;
hourlyEmployee.setId(stringInput, methodStatus);
//validate ID format
while (methodStatus == false) {
cout << "ERROR: Invalid Format. Enter ID In Format
XXX-L (x:number,L:letter a-m): ";
cin >> stringInput;
ofs << "ERROR: Invalid Format. Enter ID In Format
XXX-L (x:number,L:letter a-m): ";
ofs << stringInput << endl;
hourlyEmployee.setId(stringInput, methodStatus);
}
//Enter weekly pay
cout << "Enter Employee's Weekly Pay: ";
cin >> floatInput;
ofs << "Enter Employee's Weekly Pay: ";
ofs << floatInput << endl;
hourlyEmployee.setWeeklyPay(floatInput, methodStatus);
//validate weekly pay
while (methodStatus == false) {
cout << "ERROR: Enter a Value Greater than 400, But
less than 3000: ";
cin >> floatInput;
ofs << "ERROR: Enter a Value Greater than 400, But
less than 3000: ";
ofs << floatInput << endl;
hourlyEmployee.setWeeklyPay(floatInput,
methodStatus);
}
//Enter hours worked
cout << "Enter Employee's Hours Worked: ";
cin >> intInput;
ofs << "Enter Employee's Hours Worked: ";
ofs << intInput << endl;
hourlyEmployee.setNumberOfHours(intInput, methodStatus);
//validate hours worked
while (methodStatus == false) {
cout << "ERROR: Enter a Value 1-60: ";
cin >> intInput;
ofs << "ERROR: Enter a Value 1-60: ";
ofs << intInput << endl;
hourlyEmployee.setNumberOfHours(intInput,
methodStatus);
}
hourlyEmployee.printHourlyEmployee(ofs);
}
else if (intInput == 4) {
//Enter firstName
cout << "Enter Employee's First Name: ";
cin >> stringInput;
ofs << "Enter Employee's First Name: ";
ofs << stringInput << endl;
hourlyEmployeePay.setFirstName(stringInput);
//Enter lastName
cout << "Enter Employee's Last Name: ";
cin >> stringInput;
ofs << "Enter Employee's Last Name: ";
ofs << stringInput << endl;
hourlyEmployeePay.setLastName(stringInput);
//Enter SSN
cout << "Enter Employee's SSN: ";
cin >> stringInput;
ofs << "Enter Employee's SSN: ";
ofs << stringInput << endl;
hourlyEmployeePay.setSsn(stringInput, methodStatus);
//validate SSN format
while (methodStatus == false) {
cout << "ERROR: Invalid Format. Please Enter SSN In
Format XXX-XX-XXXX (x:number): ";
cin >> stringInput;
ofs << "ERROR: Invalid Format. Please Enter SSN In
Format XXX-XX-XXXX (x:number): ";
ofs << stringInput << endl;
hourlyEmployeePay.setSsn(stringInput, methodStatus);
}
//Enter ID
cout << "Enter Employee's ID: ";
cin >> stringInput;
ofs << "Enter Employee's ID: ";
ofs << stringInput << endl;
hourlyEmployeePay.setId(stringInput, methodStatus);
//validate ID format
while (methodStatus == false) {
cout << "ERROR: Invalid Format. Enter ID In Format
XXX-L (x:number,L:letter a-m): ";
cin >> stringInput;
ofs << "ERROR: Invalid Format. Enter ID In Format
XXX-L (x:number,L:letter a-m): ";
ofs << stringInput << endl;
hourlyEmployeePay.setId(stringInput, methodStatus);
}
//Enter weekly pay
cout << "Enter Employee's Weekly Pay: ";
cin >> floatInput;
ofs << "Enter Employee's Weekly Pay: ";
ofs << floatInput << endl;
hourlyEmployeePay.setWeeklyPay(floatInput, methodStatus);
//validate weekly pay
while (methodStatus == false) {
cout << "ERROR: Enter a Value Greater than 400, But
less than 3000: ";
cin >> floatInput;
ofs << "ERROR: Enter a Value Greater than 400, But
less than 3000: ";
ofs << floatInput << endl;
hourlyEmployeePay.setWeeklyPay(floatInput,
methodStatus);
}
//set OT pay
hourlyEmployeePay.setOvertimePay(hourlyEmployeePay.getHourlyPay());
//Enter hours worked
cout << "Enter Employee's Hours Worked: ";
cin >> intInput;
ofs << "Enter Employee's Hours Worked: ";
ofs << intInput << endl;
hourlyEmployeePay.setNumberOfHours(intInput, methodStatus);
//validate hours worked
while (methodStatus == false) {
cout << "ERROR: Enter a Value 1-60: ";
cin >> intInput;
ofs << "ERROR: Enter a Value 1-60: ";
ofs << intInput << endl;
hourlyEmployeePay.setNumberOfHours(intInput,
methodStatus);
}
//Enter Tax Code
cout << "Enter Employee's Tax Code: ";
cin >> intInput;
ofs << "Enter Employee's Tax Code: ";
ofs << intInput << endl;
hourlyEmployeePay.setTaxCode(intInput, methodStatus);
//validate tax code
while (methodStatus == false) {
cout << "ERROR: Enter Tax Code 1-3: ";
cin >> intInput;
ofs << "ERROR: Enter Tax Code 1-3: ";
ofs << intInput << endl;
hourlyEmployeePay.setTaxCode(intInput, methodStatus);
}
//Enter work status
cout << "Enter Employee's Work Status ('P' = part-time and
'F' = full-time): ";
cin >> charInput;
ofs << "Enter Employee's Work Status ('P' = part-time and
'F' = full-time): ";
ofs << charInput << endl;
hourlyEmployeePay.setWorkStatus(charInput, methodStatus);
//validate workstatus
while (methodStatus == false) {
cout << "ERROR: Work Status must be 'F' for full-time
or 'P' for part-time: ";
cin >> charInput;
ofs << "ERROR: Work Status must be 'F' for full-time
or 'P' for part-time: ";
ofs << charInput << endl;
hourlyEmployeePay.setWorkStatus(charInput,
methodStatus);
}
hourlyEmployeePay.printHourlyEmployeePay(ofs);
}
else if (intInput == 5) {
//Enter firstName
cout << "Enter Employee's First Name: ";
cin >> stringInput;
ofs << "Enter Employee's First Name: ";
ofs << stringInput << endl;
agencyEmployee.setFirstName(stringInput);
//Enter lastName
cout << "Enter Employee's Last Name: ";
cin >> stringInput;
ofs << "Enter Employee's Last Name: ";
ofs << stringInput << endl;
agencyEmployee.setLastName(stringInput);
//Enter SSN
cout << "Enter Employee's SSN: ";
cin >> stringInput;
ofs << "Enter Employee's SSN: ";
ofs << stringInput << endl;
agencyEmployee.setSsn(stringInput, methodStatus);
//validate SSN format
while (methodStatus == false) {
cout << "ERROR: Invalid Format. Please Enter SSN In
Format XXX-XX-XXXX (x:number): ";
cin >> stringInput;
ofs << "ERROR: Invalid Format. Please Enter SSN In
Format XXX-XX-XXXX (x:number): ";
ofs << stringInput << endl;
agencyEmployee.setSsn(stringInput, methodStatus);
}
//Enter ID
cout << "Enter Employee's ID: ";
cin >> stringInput;
ofs << "Enter Employee's ID: ";
ofs << stringInput << endl;
agencyEmployee.setId(stringInput, methodStatus);
//validate ID format
while (methodStatus == false) {
cout << "ERROR: Invalid Format. Enter ID In Format
XXX-L (x:number,L:letter a-m): ";
cin >> stringInput;
ofs << "ERROR: Invalid Format. Enter ID In Format
XXX-L (x:number,L:letter a-m): ";
ofs << stringInput << endl;
agencyEmployee.setId(stringInput, methodStatus);
}
//Enter weekly pay
cout << "Enter Employee's Weekly Pay: ";
cin >> floatInput;
ofs << "Enter Employee's Weekly Pay: ";
ofs << floatInput << endl;
agencyEmployee.setWeeklyPay(floatInput, methodStatus);
//validate weekly pay
while (methodStatus == false) {
cout << "ERROR: Enter a Value Greater than 400, But
less than 3000: ";
cin >> floatInput;
ofs << "ERROR: Enter a Value Greater than 400, But
less than 3000: ";
ofs << floatInput << endl;
agencyEmployee.setWeeklyPay(floatInput,
methodStatus);
}
//set OT pay
agencyEmployee.setOvertimePay(hourlyEmployeePay.getHourlyPay());
//Enter hours worked
cout << "Enter Employee's Hours Worked: ";
cin >> intInput;
ofs << "Enter Employee's Hours Worked: ";
ofs << intInput << endl;
agencyEmployee.setNumberOfHours(intInput, methodStatus);
//validate hours worked
while (methodStatus == false) {
cout << "ERROR: Enter a Value 1-60: ";
cin >> intInput;
ofs << "ERROR: Enter a Value 1-60: ";
ofs << intInput << endl;
agencyEmployee.setNumberOfHours(intInput,
methodStatus);
}
//Enter Tax Code
cout << "Enter Employee's Tax Code: ";
cin >> intInput;
ofs << "Enter Employee's Tax Code: ";
ofs << intInput << endl;
agencyEmployee.setTaxCode(intInput, methodStatus);
//validate tax code
while (methodStatus == false) {
cout << "ERROR: Enter Tax Code 1-3: ";
cin >> intInput;
ofs << "ERROR: Enter Tax Code 1-3: ";
ofs << intInput << endl;
agencyEmployee.setTaxCode(intInput, methodStatus);
}
//Enter work status
cout << "Enter Employee's Work Status ('P' = part-time and
'F' = full-time): ";
cin >> charInput;
ofs << "Enter Employee's Work Status ('P' = part-time and
'F' = full-time): ";
ofs << charInput << endl;
agencyEmployee.setWorkStatus(charInput, methodStatus);
//validate workstatus
while (methodStatus == false) {
cout << "ERROR: Work Status must be 'F' for full-time
or 'P' for part-time: ";
cin >> charInput;
ofs << "ERROR: Work Status must be 'F' for full-time
or 'P' for part-time: ";
ofs << charInput << endl;
agencyEmployee.setWorkStatus(charInput,
methodStatus);
}
//Enter companyName
cout << "Enter Employee's Company Name: ";
cin >> stringInput;
ofs << "Enter Employee's Company Name: ";
ofs << stringInput << endl;
agencyEmployee.setCompanyToPay(stringInput);
agencyEmployee.printAgencyEmployeePay(ofs);
}
else {
cout << "ERROR: Out of Menu Range!" << endl;
ofs << "ERROR: Out of Menu Range!" << endl;
}
}
else {
cout << "ERROR: File could not be open!" << endl;
ofs << "ERROR: File could not be open!" << endl;
}
tryAgain:
cout << "\n\nWould You Like To Enter Data for Another Employee? [Y/N]\
n";
cin >> sentinel;
ofs << "\n\nWould You Like To Enter Data for Another Employee? [Y/N]\
n";
ofs << sentinel << endl;
switch (sentinel) {
case 'N':
case 'n':
ofs.close();
exit(0);
case 'Y':
case 'y':
break;
default:
cout << "ERROR: Enter only 'Y' or 'N'!";
ofs << "ERROR: Enter only 'Y' or 'N'!";
goto tryAgain;
}
}
return 0;
}