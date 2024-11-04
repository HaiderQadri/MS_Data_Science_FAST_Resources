# include<iostream>
using namespace std;

class BankAccount {
    private:
    string accNo;
    string accHolder;
    double balance;

    public:

    // constructor
    BankAccount(string accNo, string accHolder, double balance) {
        this -> accNo = accNo;
        this -> accHolder = accHolder;
        this -> balance = balance;
        cout << "Account created with " << accNo << endl;
    }

    // function to deposit
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit must be positive." << endl;
        }
    }

    // function to widraw
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawd: " << amount << endl;
        } else {
            cout << "Enter valid amount." << endl;
        }
    }

    // function to display ammount details
    void display() {
        cout << "The account no " << accNo << " having holder name " << accHolder << " has " << balance << " balance." << endl;
    }

    // operator overloading
    BankAccount operator+ (const BankAccount &other) {
        return BankAccount("MergedAccount", "Combined", this -> balance + other.balance);
    }

};

// main function
int main() {

    // creating object
    BankAccount account1("123456", "Alice", 1000.0);
    BankAccount account2("987654", "John", 1500.0);

    account1.deposit(1000.0);
    account1.display();

    account2.withdraw(500.0);
    account2.display();

    // merging both account balance
    BankAccount mergedAccount = account1 + account2;
    mergedAccount.display();
}