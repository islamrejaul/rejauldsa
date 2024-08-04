#include <iostream>
using namespace std;

// Using static member function
// Checking total balance of the bank after deposit and withdrawal by all customers

class customer {
    string name;
    int acc_num, balance;

    static int total_customer; // static data members are private
    static int total_balance;

public:
    customer(string a, int b, int c) {
        name = a;
        acc_num = b;
        balance = c;
        total_customer++;
        total_balance = total_balance + balance;
    }

    static void accessStatic() {   // accessing static data members
        cout << "Total number of customers: " << total_customer << endl;
        cout << "Total balance: " << total_balance << endl;
    }

    void deposit(int amount) {    // deposit = credit
        if (amount > 0) {
            balance += amount;    // Update individual balance
            total_balance += amount;  // Update total balance
        }
    }

    void withdraw(int amount) {    // debit
        if (amount <= balance && amount > 0) {
            balance -= amount;    // Update individual balance
            total_balance -= amount;  // Update total balance
        }
    }

    void displayBalance() const {    // display individual balance
        cout << "Customer: " << name << ", Account Number: " << acc_num << ", Balance: " << balance << endl;
    }
};

int customer::total_customer = 0;
int customer::total_balance = 0;

int main() {
    customer A1("rohit", 1, 1000);
    customer A2("mohit", 2, 2000);
    customer A3("mohan", 3, 3000);

    // amount credit
    A1.deposit(800);

    // amount debit
    A2.withdraw(500);
    A3.deposit(200);

    // Display individual balances
    A1.displayBalance();
    A2.displayBalance();
    A3.displayBalance();

    // Display total balance and total customers
    customer::accessStatic();

    return 0;
}
