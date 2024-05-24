#include<iostream>

using namespace std;

int main(){
    
    int a = 5, b = 10;

    int *pNum = &a; //указатель на переменную а

    cout << "a = " << *pNum << endl;

    pNum = &b; 

    cout << "b = " << *pNum << endl;

    return 0;
}