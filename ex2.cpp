#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num, i = 1, soma;

    cout << "Digite 1 número para somar: ";
    cin >> num;

    while (i < num)
    {
        soma += i;
        i++;

    }
    cout << soma;
    
}