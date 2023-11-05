#include <iostream>
#include <string>
#include <cassert>

using namespace std;

/**
 * Structure describing a bank account with bank account number and amount
 */
struct BankAccount {
    string iban;
    double amount;

    // a) deposit money
    BankAccount& operator<<(double deposit) {
        assert(deposit >= 0); // Deposit should be non-negative
        amount += deposit;
        return *this;
    }

    // b) transfer money
    BankAccount& operator<<(BankAccount& other) {
        assert(other.amount > 0); // Other account should have a positive amount
        this->amount += other.amount;
        other.amount = 0;
        return *this;
    }

    // c) Reset account
    void operator~() {
        amount = 0;
    }

    // d) create a joint account
    BankAccount operator|(const BankAccount& other) const {
        return BankAccount{"Joint account: ", this->amount + other.amount};
    }

    // e) compare
    bool operator<(const BankAccount& other) const {
        return this->amount < other.amount;
    }

    bool operator>(const BankAccount& other) const {
        return this->amount > other.amount;
    }

    bool operator==(const BankAccount& other) const {
        return this->amount == other.amount && this->iban == other.iban;
    }

    // f) add zinsen
    BankAccount& operator*=(double interestRate) {
        assert(interestRate >= 0);
        amount *= (1 + interestRate);
        return *this;
    }
};

// g) acc with max balance
BankAccount& getMax(BankAccount& a, BankAccount& b) {
    return (a.amount >= b.amount) ? a : b;
}

/**
 * Prints bank account
 */
void printBankAccount(const BankAccount& account) {
    cout << account.iban << " (" << account.amount << " EUR)" << endl;
}

/**
 * Main program
 */
int main(int argc, const char * argv[]) {
    BankAccount accountA{"ACC 1", 1000.0};
    BankAccount accountB{"ACC 2", 2000.0};
    BankAccount accountC{"ACC 3", 1500.0};

    // tests
    accountA << 500.0; // deposit
    printBankAccount(accountA);

    accountA << accountB; // transfer
    printBankAccount(accountA);
    printBankAccount(accountB);

    ~accountC; // reset
    printBankAccount(accountC);

    BankAccount jointAccount = accountA | accountC; // joint acc
    printBankAccount(jointAccount);

    // compare accs
    cout << boolalpha; //iostream function für true oder false instead of 1 oder 0

    cout << (accountA < accountB) << endl;
    cout << (accountA > accountC) << endl;
    cout << (accountA == accountC) << endl;

    // interest
    accountA *= 0.05;
    printBankAccount(accountA);

    // get max acc
    BankAccount& maxAccount = getMax(accountA, accountC);
    printBankAccount(maxAccount);

    return 0;
}
