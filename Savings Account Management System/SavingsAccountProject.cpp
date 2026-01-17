#include <iostream>
using namespace std;
int main() {
    double annualTaxRate, balance;
    int months;

    double deposit[100];
    double withdraw[100];
    double tax[100];
    double totalDeposit = 0;
    double totalWithdraw = 0;
    double totalTax = 0;

    cout <<"Enter Annual Tax Rate: ";
    cin >> annualTaxRate;

    cout <<"Enter Initial Balance: ";
    cin >> balance;

    cout <<"Enter Number of Months: ";
    cin >> months;

    for (int i = 0; i < months; i++) {
        cout << "\nMonth " << i + 1 << endl;

        cout <<"Enter Deposit Amount: ";
        cin >> deposit[i];
        while (deposit[i] < 0) {
            cout <<"Invalid. Enter positive amount: ";
            cin >> deposit[i];
        }
        balance = balance + deposit[i];
        totalDeposit = totalDeposit + deposit[i];

        cout <<"Enter Withdrawal Amount: ";
        cin >> withdraw[i];
        while (withdraw[i] < 0) {
            cout <<"Invalid. Enter positive amount: ";
            cin >> withdraw[i];
        }
        balance = balance - withdraw[i];
        totalWithdraw = totalWithdraw + withdraw[i];

        double monthlyRate = (annualTaxRate / 12.0) / 100.0;

        if (balance > 0) {
            tax[i] = balance * monthlyRate;
        } else {
            tax[i] = 0;
        }

        balance = balance - tax[i];
        totalTax = totalTax + tax[i];
    }
    cout <<"\n--- Account Summary ---" << endl;
    cout <<"Final Balance: " << balance << endl;
    cout <<"Total Deposited: " << totalDeposit << endl;
    cout <<"Total Withdrawn: " << totalWithdraw << endl;
    cout <<"Total Tax Deducted: " << totalTax << endl;
    return 0;
}
