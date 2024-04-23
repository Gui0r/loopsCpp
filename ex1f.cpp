#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num;

    cout << "Digite um número: ";
    cin >> num;

    for(int i = 1; num > i; i+2){
        cout << i;
    }
}