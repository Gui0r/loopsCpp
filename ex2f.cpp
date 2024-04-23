#include <iostream>
#include <locale.h>

using namespace std;
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
     int num;

     cout << "Digite um número para verificar se ele é primo ou não: ";
     cin >> num;
     for(int i = 0; i < 1; i++){
        if(num > 1 && num % num == 0 && num % 1 == 0){
            cout << "Seu número é primo!";
        }else{
            cout << "Seu número não é primo!";
        }
     }
}