#include <iostream>
#include <locale.h>

using namespace std;
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num;

    cout << "Digite um número para ver sua tabuada de multiplicação: ";
    cin >> num;

    for( int i = 1; i <= 10; i++){
        cout << " número " << num << " x " << i << "=" << num * i;
    }
}