#include <iostream>
using namespace std;
int main() {

    int n, sum = 0;
    cout << "Zadaj cislo: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        sum = sum + i;
    }
    cout << sum;
    // TODO: compute sum 1..n (watch overflow; use 64-bit)
    return 0;
}
