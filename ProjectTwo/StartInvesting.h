#ifndef STARTINVESTING_H
#define STARTINVESTING_H


class StartInvesting {        // This class will create the object for the main screen
   public:
      StartInvesting();
      void initialInvestment(double startAmount);
      void monthlyDeposit(double monthAmount);
      void annualInterest(int yearAmount);
      void numYears(int numOfYears);
      void Print();

   private:
      double start;
      double month;
      int year;
      int years;
};

#endif