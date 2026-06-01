#include <cstdlib>
#include <iostream>
using namespace std;

long long NSD(long long delenec, long long delitel) {
    while (delitel > 0) {
        int zvysok = delenec % delitel;
        delenec = delitel;
        delitel = zvysok;
    }
    return delenec;
}
int main() {
    long long delenec, delitel;
    std::cout << "Zadaj delenec a delitel: ";
    std::cin >> delenec >> delitel;
    long long NSD_hodnota = NSD(delenec, delitel);
    long long a = delenec / NSD_hodnota;
    long long b = delitel / NSD_hodnota;
    cout << a << "/" << b << endl;
    cout << "NSD: " << NSD_hodnota << endl;
    return 0;
}
