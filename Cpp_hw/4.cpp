#include <iostream>
using namespace std;

void getArray(int a[100]);


int main(){
    int a[100]={0};
    int b[100]={0};
    getArray(a);
    for(int i = 0; i<100;i++){
        b[i] = a[99-i];
    }
    cout << "입력받은 배열 역순 출력\n";
    for(int i = 0; i < 100 ; i++ ){
        if(b[i] == 0){continue;}
        cout << b[i] <<"   ";
    }
    return 0;
}

void getArray(int a[100]){
    int b = 0;
    int i = 0 ;
    while(true){
        cout << "배열에 넣을 원소를 입력하세요(정수): ";
        cin >> b;
        if(b == 0){
            break;
        }
        a[i] = b;
        i++;
        cout <<endl;
    }
}