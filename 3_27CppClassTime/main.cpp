#include <iostream>
using namespace std;

int maximum(int a[], int size){
    for(int i=0; i< size; i++)//반복조건 i=0부터 사이즈 까지
        if(a[i]>a[i+1]){
            a[i+1]=a[i];
        }
        cout<<"배열 중 가장 큰 수: "<< a[size] <<endl;
}
int minimize(int a[],int size){
    for(int i=0; i< size; i++)//반복조건 i=0부터 사이즈 까지
        if(a[i] < a[i+1]){
            a[i+1]=a[i];
        }else{
            a[i+1]=a[i+1];
        }
    cout<<"배열 중 가장 작은 수: "<< a[size] <<endl;
}
int main() {
    int array[10] = {9, 5, 11, 4, 1, 3, 7, 12, 2, 8};
    int a = sizeof(array)/sizeof(int);
    maximum(array, a);
    minimize(array, a);
    return 0;
}
