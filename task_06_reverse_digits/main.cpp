#include <iostream>
using namespace std;
int main() {

    unsigned long n, reversed = 0;
    cin >> n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
    cout << reversed << endl;
    return 0;
}
