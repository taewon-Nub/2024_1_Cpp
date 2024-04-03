#include <iostream>
using namespace std;

void output_process(int i, string basicString);


int main (){
    string name;
    int std_no;
    while(true){
        cout << "학번입력: ";
        cin >> std_no;
        if (std_no ==0 )
            break;
        cout << "이름 입력: ";
        cin >> name;
        output_process(std_no, name);
    }
    return 0;
}
void output_process(int a, string b){
    cout << endl << "입력 내용 출력 " <<endl;
    cout << "학번: "<< a << endl;
    cout << "이름 :" << b << endl;
}