#include <iostream>
#include <iomanip>
using namespace std;

#include "StartInvesting.h"


StartInvesting::StartInvesting() {        // These are the initial values of the private member data
   start = 0;
   month = 0;
   year = 0;
   years = 0;
}

void StartInvesting::initialInvestment(double startAmount) {
   start = startAmount;
}

void StartInvesting::monthlyDeposit(double monthAmount) {
   month = monthAmount;
}

void StartInvesting::annualInterest(int yearAmount) {
   year = yearAmount;
}

void StartInvesting::numYears(int numOfYears) {
   years = numOfYears;
}

void StartInvesting::Print() {         // This print function will display the main screen with the users added values
   cout << "Initial Investment Amount: " << " $" << start << endl;
   cout << "Monthly Deposit: " << " $" << month << endl;
   cout << "Annual Interest: " << " %" << year << endl;
   cout << "Number of years: " << years << endl;
}