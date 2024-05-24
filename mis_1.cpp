#include<iostream>

int main(){

    setlocale(LC_ALL, "Russian");
    
    int a = 5;
    int &rurl = a;
    int *pTemp = &rurl;

    std::cout << "Начальное значение а: " << a << std::endl;

    rurl = 25;

    std::cout << "Значение 'а' через ссылку а: " << a << std::endl;

    *pTemp = 99;

    std::cout << "Значение 'а' через указатель а: " << a << std::endl;

    return 0;
}