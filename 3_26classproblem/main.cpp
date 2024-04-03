#include <iostream>
using namespace std;
bool ismultiple(int a, int b);

int main() {
    int a,b,c;
    cout <<"두 정수 입력: ";
    cin >> a >> b;
    c =ismultiple(a,b);
    if (c==1)
        cout << "Yes";
    else
        cout <<"No";
}

bool ismultiple(int a, int b){
    if( b%a == 0 )
        return true;
    else
        return false;

}