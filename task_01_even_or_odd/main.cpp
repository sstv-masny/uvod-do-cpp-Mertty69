
#include <iostream>
using namespace std;

int main() {
    long long n;
    if (!(std::cin >> n))
        return 0;
    // TODO: print "even" or "odd"
    if (n % 2 == 0) {
        cout << "odd";
    } else {
        cout << "even";
    }
    return 0;
}
