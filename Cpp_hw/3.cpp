#include <iostream>
using namespace std;

void multiple(int start, int end);


int main(){
    int num1,num2=0;
    cout << "크기순으로 정수를 2개 입력하세요: ";
    cin >> num1 >>num2;
    multiple(num1,num2);
    return 0;
}

void multiple(int start, int end){
    int mult = 0;
    for (int j= start; j < end+1; j++) {
        printf("---------------------\n");
        for (int i = 1; i < 13; i++) {
            mult = j*i;
            printf("%d X %d = %4d\n",j,i,mult);
        }
    }

}