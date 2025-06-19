// Fuel Quantity Checker
#include <iostream>
using namespace std;
int main() {
    float amount;
    cout << "Enter amount (in ₹): ";
    cin >> amount;
    cout << "Petrol quantity: " << amount / 100 << " L" << endl;
    return 0;
}