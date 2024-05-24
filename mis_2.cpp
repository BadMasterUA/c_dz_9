#include<iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Russian");

    int varOne, varTwo;
    const int *pRef = &varOne;

    *pRef = 6; //тут ошибка мы пытаемся присвоить значение константной переменной

    cout << "Значение varOne: " << varOne << endl;

    pRef = &varTwo; //тут ошибка мы пытаемся присвоить значение константной переменной

    return 0;
}