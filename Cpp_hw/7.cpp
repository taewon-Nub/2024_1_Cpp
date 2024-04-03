#include <iostream>
using namespace std;

void swapArray(int *p, int *q, int size);
void printArray(int *p,int *q, int size);

int main(){

    int a[] = { 1,2,3,4,5 };
    int b[] = { 9,8,7,6,5 };
    int size = sizeof(a)/ sizeof(int);
    printArray(a,b,size);
    cout <<"\n";

    swapArray(a,b,size);

    printArray(a,b,size);
}

void swapArray(int *p, int *q, int size){
    for(int i=0;i<size; i++) {
        int temp = *(p+i);  // temp에 p[i]의 원소를 할당
        *(p+i) = *(q+i); // temp = p 에 q를 삽입
        *(q+i) = temp; //  q[i]에 temp = p[i]의 원소 차례로 삽입
    }
}
void printArray(int *p, int *q , int size){
    cout << "배열 a = ";
    for(int i =0; i<size;i++){
        cout << *(p+i)<<" ";
    }

    cout <<"\n";

    cout << "배열 b = ";
    for(int i =0; i<size;i++){
        cout << *(q+i)<<" ";
    }
}