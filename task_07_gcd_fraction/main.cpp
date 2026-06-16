#include <cstdlib>
#include <iostream>
using namespace std;

long long NSD(long long delenec, long long delitel) {
    delenec = abs(delenec);
    delitel = abs(delitel);
    while (delitel > 0) {
        long long zvysok = delenec % delitel;
        delenec = delitel;
        delitel = zvysok;
    }
    return delenec;
}
int main() {
    long long delenec, delitel;
    std::cin >> delenec >> delitel;
    long long NSD_hodnota = NSD(delenec, delitel);
    long long a = delenec / NSD_hodnota;
    long long b = delitel / NSD_hodnota;
    
    // Ensure denominator is always positive
    if (b < 0) {
        a = -a;
        b = -b;
    }
    
    cout << a <<' '<< b << endl;
    
    return 0;
}
