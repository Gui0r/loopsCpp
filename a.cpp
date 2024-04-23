#include <iostream>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int i = 1;
    while (i <= 5){
        std::cout << i;

        i++;
    }
    std::cout << "\n";
    return 0;
}