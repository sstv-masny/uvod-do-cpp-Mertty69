
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> cisla;
    int PocetCisel;
    cout << "Zadejte pocet cisel: ";
    cin >> PocetCisel;
    cout << "Zadajte cisla: ";
    for (int i = 0; i < PocetCisel; i++) {
        int Cislo;
        cin >> Cislo;
        cisla.push_back(Cislo);
    }
    int HladaneCislo;
    cout << "Zadajte hladane cislo: ";
    cin >> HladaneCislo;

    int lavy = 0;
    int pravy = cisla.size() - 1;

    while (lavy <= pravy) {
        int stred = (lavy + pravy) / 2;
        if (cisla[stred] == HladaneCislo) {
            cout << "Nasiel sa na pozicii: " << stred;
            return 0;
        }
        if (cisla[stred] < HladaneCislo) {
            lavy = stred + 1;
        } else {
            pravy = stred - 1;
        }
    }
    cout << "Cislo sa nenaslo.";
    return 0;
}
