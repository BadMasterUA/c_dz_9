#include<iostream>

int main(){

    int *pointer_a = new int; //новый указатель
    *pointer_a = 11; //присваеваем ему значение
    pointer_a = new int; //присваеваем новую область памяти
    *pointer_a = 84; //присваеваем значение
    return 0;
}