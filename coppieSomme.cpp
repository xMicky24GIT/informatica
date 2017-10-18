#include <iostream>
using namespace std;

int main() {

    int i=0,m=0,N,S;

    cout << "Inserisci un numero: ";
    cin >> N;

    while(i < N){
        while (m < N){
            S = i + m;
            if (S == N){
                cout << "La somma dei numeri " << i << " e " << m << " ha come risultato: " << N << endl;
            }
            m++;
        }
        i++;
        m=0;
    }

    cout << "Finito" << endl;


    return 0;
}