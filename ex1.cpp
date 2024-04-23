#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int num, num1 = 1, i = 0;

    cout << "Digite um número: ";
    cin >> num;

    while (i <= num && i % 2 == 0){
        cout << i;
         i++;
         i++;
    }
    

    
}
//num % 2 == 0