#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num, num2;

    cout << "Digite um número: ";
    cin >> num;

    cout << "Digite outro número maior que o primeiro número digitado: ";
    cin >> num2;

    for(int i = num;i <= num2; i++){
    if(i % 2 != 0){
        cout << i;
        cout << "\n";
        }
    }
}