#include <iostream>
#include <locale.h>

using namespace std;
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num;
    char ast = '*';

    cout << "Digite um número de asteriscos que deseja imprimir em cada linha: ";
    cin >> num;


    for(int i = 0; i < num; i++){
        for(int j = 0; j <= i;j++){
        cout << ast;
        }
        cout << "\n";
    }

    

}