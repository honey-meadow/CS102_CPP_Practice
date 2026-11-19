#include <iostream>
using namespace std;
int main() {
    int hours;
    char carTypes;
    cout << "Enter parking hours: ";
    cin >> hours;
    cout << "Enter car type: ";
    cin >> carTypes;
    if ( hours <= 0 ) {
        cout << "Invalid hours!";
        return 0;
    }
    double total;
    if (hours > 5) {
        total = hours * 2;
    } else {
        total = hours * 3;
    }
    switch (carTypes) {
        case 'E':
        case 'e':
            total = total * 0.5;
            break;
        case 'H':
        case 'h':
            total = total * 0.8;
            break;
        case 'G':
        case 'g':
            break;
        default:
            cout << "Invalid car type!";
            return 0;
    }
    cout << "Total to pay: $" << total;
    return 0;
}