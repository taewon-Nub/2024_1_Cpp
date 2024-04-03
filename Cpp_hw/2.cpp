#include <iostream>
using namespace std;


void collectNum(int x,int y,int z);


int main(){
    int getNum,sum,count=0;

    collectNum(getNum,sum,count);

    return 0;
}

void collectNum(int x,int y,int z){
    int b = 0;
    int sum = 0;
    int count =0;
    while(true){
        cout << "임의의 숫자를 입력하세요";
        cin >> b;
        sum += b;
        count += 1;
        if(b>99){
            break;
        }
    }
    cout << "지금까지 입력한 수의 합은 = " << sum <<endl;
    cout << "지금까지 입력한 수의 평균은 = " << sum /count <<endl;
};
