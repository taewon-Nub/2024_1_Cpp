#include <iostream>
using namespace std;

void getArea(int a);


int main(){
    float a=0;
    cout <<"원 반지름 입력 :";
    cin >> a;
    cout << endl;
    getArea(a);
}

void getArea(int a){
    float area =0;
    float pi = 3.14;
    area = a*a*pi;
    cout << "입력한 반지름을 가진 원의 넓이는 "<< area << " 입니다";
}