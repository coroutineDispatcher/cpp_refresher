// funcPractice.cpp

#include <iostream>
using namespace std;

const double SALES_TAX = 0.075;

// order actually matters in c++ (get back to university)
void computeTax(double subTotal, double &tax, double &total, double taxRate = SALES_TAX);

int main()
{
    double subTotal = 10;
    double tax = 0;
    double total = 0;

    computeTax(subTotal, tax, total);

    cout << "Total: " << total << "\n";
    cout << "Tax: " << tax << endl;
}

void computeTax(double subTotal, double &tax, double &total, double taxRate)
{
    tax = subTotal * taxRate;
    total = subTotal + tax;
}
