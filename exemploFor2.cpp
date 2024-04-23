#include <iostream>
using namespace std;

int main(){
    int num, fat;

    cout << "Digite um número para clacular o fatorial: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        fat *= i;
    }
    cout << "O fatorial de " << num << " é " << fat;
    return 0;
}