#include <iostream>
using namespace std;

void factorial(int a);


int main(){
    int a=0;
    cout <<"팩토리얼 할 수 입력 :";
    cin >> a;
    cout << endl;
    factorial(a);
}

void factorial(int a){
    int fac = 1;
    for(int i = 1; i <a+1; i++){
        fac *= i;
    }
    cout << a<<"! ="<< fac;
}