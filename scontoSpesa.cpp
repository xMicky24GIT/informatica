#include <iostream>
using namespace std;

int main() {

    float prezzo, sconto, prezzoScontato = 0;

    cout << "inserire prezzo: ";
    cin >> prezzo;
    cout << "inserire sconto: ";
    cin >> sconto;

    prezzoScontato = (prezzo*sconto)/100;
    prezzoScontato = prezzo - prezzoScontato;

    cout << "prezzo scontato: " << prezzoScontato;



    return 0;
}