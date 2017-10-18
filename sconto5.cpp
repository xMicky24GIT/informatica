#include <iostream>
using namespace std;

int main() {

    float prezzo, prezzoScontato=0, sconto=0;

    cout << "Inserire il prezzo: ";
    cin >> prezzo;

    if (prezzo >= 300){
        sconto = (prezzo*5)/100;
        prezzoScontato = prezzo - sconto;
        cout << "Il prodotto costa piu' di 300 euro. Hai diritto ad uno sconto del 5% (" << sconto << " euro). Prezzo da pagare: " << prezzoScontato;
    } else {
        cout << "Il prodotto costa meno di 300 euro. Non hai diritto ad uno sconto.";
    }




    return 0;
}