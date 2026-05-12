#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    long k, fare;
    // TODO: compute the fare as specified and print with two decimals
    cout << "Zadaj najazdene kilometre: ";
    cin >> k;
    float y = 0;

    if (k <= 2) {
        fare = 4.00;
    } else if (k > 2) {
        y = ceil(k - 2);
        fare = 4 + k * 1.5;
    }
    cout << "Kilometre: " << y << endl;
    cout << "Fare: " << fixed << setprecision(2) << fare << endl;
    return 0;
}
