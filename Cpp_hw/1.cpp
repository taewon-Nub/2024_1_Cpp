#include <iostream>
using namespace std;

void sumofodd(int a);
void sumofeven(int a);

int main() {
    int source;
    cout << "50 이하의 정수를 입력하시오: ";
    cin >> source;

    sumofodd(source);
    sumofeven(source);


    return 0;
}

void sumofodd(int a){
    int odd=0;
    for (int i=1; i<a;i++){
        if (i%2 != 0){
            odd += i;
        }
    }
    cout << "입력한 정수보다 작은 숫자 중 홀수들의 합은 " << odd << " 입니다"<<endl;
}

void sumofeven(int a){
    int even=0;
    for (int i=1; i<a;i++){
        if (i%2 == 0){
            even += i;
        }
    }
    cout << "입력한 정수보다 작은 숫자 중 짝수들의 합은 " << even << " 입니다"<<endl;
}
