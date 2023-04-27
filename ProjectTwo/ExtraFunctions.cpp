#include <iostream>
using namespace std;

#include "StartInvesting.cpp"


void stars(int spaces) {         // This function allows me to make random number of *'s  when called
   char star;
   star = cout.fill('*');
   cout.width(spaces);
   cout << "";
}

void emptySpaces(int empty) {         // This function allows me to make random number of " "'s  when called
   char quote;
   quote = cout.fill(' ');
   cout.width(empty);
   cout << "";
}

void doubleLine(int doubles) {         // This function allows me to make random number of ='s  when called
   char equals;
   equals = cout.fill('=');
   cout.width(doubles);
   cout << "";
}

void singleLine(int singles) {         // This function allows me to make random number of -'s  when called
   char dash;
   dash = cout.fill('-');
   cout.width(singles);
   cout << "";
}

void heading() {        // This function creats the row of stars and Data Input heading
   cout << endl;
   stars(10);
   cout << " Data Input ";
   stars(12);
   cout << endl;
}

void printImg() {       // This function will print the main screen to the user without accepting any inputs
   cout << "Initial Investment Amount:" << endl;
   cout << "Monthly Deposite:" << endl;
   cout << "Annual Interest:" << endl;
   cout << "Number of years:" << endl;
   cout << "Press any key to continue . . ." << endl;
}

void printImg2() {       // This function will print the continuing/result screen to the user
   cout << "      Balance and Interest Without Additional Monthly Deposits     " << endl;
   doubleLine(64);
   cout << endl;
   cout << "  Year"; 
   emptySpaces(6);
   cout << "Year End Balance";
   emptySpaces(8);
   cout << "Year End Earned Interest" << endl;
   singleLine(64);
   cout << endl;
   
}

void printImg3() {       // This function will print the continuing/result screen to the user
   cout << "      Balance and Interest With Additional Monthly Deposits     " << endl;
   doubleLine(64);
   cout << endl;
   cout << "  Year"; 
   emptySpaces(6);
   cout << "Year End Balance";
   emptySpaces(8);
   cout << "Year End Earned Interest" << endl;
   singleLine(64);
   cout << endl;
}

void phaseOne() {       // The main function with the most affect to the program
   StartInvesting investment;
   double start;
   double month;
   int year;
   int years;
   bool continuing;


   double hundred;
   hundred = 100;
   double twelve;
   twelve = 12;
   int i;
   double total;
   double totals;
   double almostComplete;
   double complete;
   double totalInterest;
   double totalsInterest;
   double closing;
   double closed;
   double newOpening;
   double newlyOpened;
   int yearlyInterest;
   double holder;

   cout << "Enter initial investment amount: " << endl;
   cin >> start;
   cout << "Enter monthly deposit amount: " << endl;
   cin >> month;
   cout << "Enter annual interest: " << endl;
   cin >> year;
   cout << "Enter number of years: " << endl;
   cin >> years;
   cout << endl;

   investment.initialInvestment(start);
   investment.monthlyDeposit(month);
   investment.annualInterest(year);
   investment.numYears(years);
   stars(34);
   heading();
   investment.Print();

   while (continuing != true) {        // This line stops from showing any future results unless a button is pressed
      cout <<  "Press any key to continue . . .";
      cin >> continuing;
      break;
   }

   cout << endl;
   
   total = start + month;
   totals = start;
   yearlyInterest = years * 12;
   almostComplete = (year / hundred);
   complete = almostComplete / twelve;
   totalInterest = total * complete;
   closing = total + totalInterest;

   totalsInterest = totals * almostComplete;
   closed = totals + totalsInterest;

   printImg2();         // This will print the top portion of the third screen (without additional monthly deposits)
   for (i = 0; i < yearlyInterest; ++i) {
      newlyOpened = closed;
      totalsInterest = newlyOpened * (almostComplete / twelve);
      holder = totalsInterest * 12;
      closed = newlyOpened + totalsInterest;
      
      if (i % 12 == 0) {         // This line will only print every 12 month
         cout << "     " << i / 12 + 1;
         emptySpaces(17);
         cout << fixed << setprecision(2) << "$" << newlyOpened;
         emptySpaces(27); 
         cout << "$" << holder << endl;
      }
   }

   cout << endl << endl;

   printImg3();         // This will print the top portion of the forth screen (with additional monthly deposits)
   for (i = 1; i <= yearlyInterest; ++i) {
      newOpening = closing;
      total = newOpening + month;
      totalInterest = total * complete;
      closing = total + totalInterest;

      if (i % 12 == 0) {         // This line will only print every 12 month
         cout << "     " << i / 12;
         emptySpaces(14);
         cout << fixed << setprecision(2) << "$" << newOpening << endl << endl;        // FIX ME: I wasn't able to produce the Year End Earned Interest correctly
      }
   }

   
}

void show() {
   cout << endl;
   stars(34);
   heading();
   printImg();
   phaseOne();
}