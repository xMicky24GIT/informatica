#include <iostream>
using namespace std;

int main() {

    int M1, hours=0, minutes=0;

    cout << "Inserisci i minuti: ";
    cin >> M1;

    hours = M1/60;
    minutes = M1%60;

    cout << hours << "h " << minutes << "m";




    return 0;
}