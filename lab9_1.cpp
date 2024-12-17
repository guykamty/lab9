#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
double loan, interestRate, pay;
double PrevBalance, total, interest, NewBalance;
cout << "Enter initial loan: ";
cin >> loan;
cout << "Enter interest rate per year (%): ";
cin >> interestRate;
cout << "Enter amount you can pay per year: ";
cin >> pay;

cout << setw(13) << left << "EndOfYear#";
cout << setw(13) << left << "PrevBalance";
cout << setw(13) << left << "Interest";
cout << setw(13) << left << "Total";
cout << setw(13) << left << "Payment";
cout << setw(13) << left << "NewBalance";
cout << "\n";

int year = 1;
PrevBalance = loan;
interest = PrevBalance * (interestRate / 100.0);
total = PrevBalance + interest;
if(total<pay){
        pay = total;
    }
NewBalance = total - pay;
cout << fixed << setprecision(2);
cout << setw(13) << left << year;
cout << setw(13) << left << PrevBalance;
    cout << setw(13) << left << interest;
    cout << setw(13) << left << total;
    cout << setw(13) << left << pay;
    cout << setw(13) << left << NewBalance;
    cout << "\n";
    year++;
while(NewBalance>0){
   PrevBalance = NewBalance;
   interest = PrevBalance * (interestRate / 100.0);
   total = PrevBalance + interest;
   NewBalance = total - pay;
   
   if(total<pay){
       pay = total;
       NewBalance = total - pay;
       }
       
   cout << fixed << setprecision(2);
   cout << setw(13) << left << year;
   cout << setw(13) << left << PrevBalance;
   cout << setw(13) << left << interest;
   cout << setw(13) << left << total;
    cout << setw(13) << left << pay;
    cout << setw(13) << left << NewBalance;
    cout << "\n";
   
    year++;

}

return 0;
}