#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    int n;
    setlocale(LC_ALL, "pt_BR.UTF-8");
    cout << "Digite o valor de n para imprimir a sequência de Fibonacci até o n-ésimo termo: ";
    cin >> n;

    int termo1 = 0, termo2 = 1;

    cout << termo1 << " " << termo2 << " ";

    int i = 1;  

    while (i < n) {
        int proximoTermo = termo1 + termo2;
        cout << proximoTermo << " ";
        termo1 = termo2;
        termo2 = proximoTermo;
        i++;
    }

    cout << endl;

    return 0;
}
