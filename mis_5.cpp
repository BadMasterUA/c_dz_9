#include<iostream>

using namespace std;
/*Можно объявить второй указатель или по возможности отказаться
от их использования*/
int main(){
    
    int a = 5, b = 10;

    int *pNum = &a; //указатель на переменную а
    int *pNum_2 = &b; //указатель на переменную а


    cout << "a = " << *pNum << endl; 

    cout << "b = " << *pNum_2 << endl;

    return 0;
}