#include <iostream>
#include <locale.h>

using namespace std;
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
     int num, primo;

     cout << "Digite um número para verificar se ele é primo ou não: ";
     cin >> num;

      for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            primo++;
        }
    }
    if (primo == 0) {
        cout << "Seu número é primo!";
    } else {
        cout << "Seu número não é primo!";
    }
}