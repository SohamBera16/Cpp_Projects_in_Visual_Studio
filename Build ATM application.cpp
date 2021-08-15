
#include <iostream>
using namespace std;

void showMenu() {
    cout << " * ******MENU *******" << endl;
    cout << "1. check balance " << endl;
    cout << "2. Deposit to account 1" << endl;
    cout << "3. Withdraw from account 1" << endl;
    cout << "4. Transfer" << endl;
    cout << " *******************" << endl;

}
int main()
{
    //ATM having check balance, deposit(only from account 1),withdraw( account 1),transfer
    int option;
    double balance1 = 10000, balance2 = 20000;

    showMenu();
    cout << "Option : \n";
    cin >> option;
    system("cls");

    switch (option) {
    case 1: cout << "The balance amounts are " << balance1 << " and " << balance2 << endl;
        break;
    case 2: cout << "Enter deposit amount: " << endl;
        double deposit;
        cin >> deposit;
        balance1 += deposit;
        cout << "current balance: " << balance1;
        break;
    case 3: cout << "Enter withdraw amount  \n";
        double withdrawAmount;
        cin >> withdrawAmount;
        if (withdrawAmount <= balance1) {
            balance1 -= withdrawAmount;
            cout << "current balance: " << balance1;
        }
        else
            cout << " you are poor buddy!";
        break;
    case 4: cout << "choose account 1 or 2 to transfer money: \n";
        int accountNumber;
        cin >> accountNumber;
        cout << "amount to be transferred: \n";
        int transferamount;
        cin >> transferamount;
        if (accountNumber == 1) {
            balance2 += transferamount;
            balance1 -= transferamount;
        }
        else {
            balance1 += transferamount;
            balance2 -= transferamount;
        }
        cout << "the balance in two accounts are: " << balance1 << " and " << balance2 << endl;

    }
}
