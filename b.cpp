#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num;

    cout << "Digite um número negativo para sair: ";
    cin >> num;
    system(clear);

    while(num >= 0){
        cout << "você digitou " << num;
        cout << "\n";
        cout << " digite outro número negativo para sair: ";
        cin >> num;
    }
    cout << "programa encerrado";
}