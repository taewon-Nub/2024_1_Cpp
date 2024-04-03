#include <iostream>
using namespace std;

void maximum(int a[], int size){
    int b = a[0];
    for(int i=0; i< size; i++){
        if(a[i]>b){
            b = a[i];
        }
    }
    cout<<"배열 중 가장 큰 수: "<< b <<endl;
}
void minimize(int a[],int size){
    int b = a[0];
    for(int i=0; i< size; i++){// 반복문 시작
        if(a[i] < b){
            b = a[i];
        }
    }
    cout<<"배열 중 가장 작은 수: "<< b <<endl;
}
int main() {
    int array[10] = {9, 5, 11, 4, 1, 3, 7, 12, 2, 8};
    int a = 10;
    minimize(array, a);
    maximum(array, a);
    return 0;
}
