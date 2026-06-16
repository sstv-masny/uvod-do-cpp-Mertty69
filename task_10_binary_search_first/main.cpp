
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> cisla;
    int PocetCisel;
    
    cin >> PocetCisel;
    for (int i = 0; i < PocetCisel; i++) {
        int Cislo;
        cin >> Cislo;
        cisla.push_back(Cislo);
    }
    int HladaneCislo;
    
    cin >> HladaneCislo;

    int lavy = 0;
    int pravy = cisla.size() - 1;
    int vysledok = -1;

    while (lavy <= pravy) {
        int stred = (lavy + pravy) / 2;
        if (cisla[stred] == HladaneCislo) {
            vysledok = stred;
            pravy = stred - 1;  
        } else if (cisla[stred] < HladaneCislo) {
            lavy = stred + 1;
        } else {
           pravy = stred - 1;
        }
    }
    cout << vysledok;
    return 0;
}
