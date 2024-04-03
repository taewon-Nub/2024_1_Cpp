#include <iostream>
using namespace std;

/* -> switch문 예제
int main() {
    int score, div;
    cout << "점수를 입력하세요: ";
    cin >> score;
    if(score > 100 || score<0){
        cout << "잘못된 점수입니다";
        return 0;
    }
    div = score/10;
    switch (div) {
        case 10:
        case 9:cout << "A";break;
        case 8:cout << "B"; break;
        case 7:cout << "C";
            break;
        case 6: cout << "D";
            break;
        default:
            cout <<"F";
            break;

    }
    */

    int main(){
        int n[10];
        double d[]={0.1,0.2,0.5,3.9};

        int i;
        for(i=0;i<10;i++)n[i]=i*2;
        for(i=0;i<10;i++)cout << n[i]<<" ";
        cout <<"\n";

        double sum=0;
        for(i=0; i<sizeof d;i++ ){
            d[i] =
        }
        for(i=0;i<4;i++){
            sum +=d[i];
        }
        cout<<"배열 d의 합은 "<< sum;

        /* -> while 무한루프 안에 break와 continue를 이용한 예시.
        int a;
        while(true){
            cout <<"정수입력: ";
            cin >> a;
            if(a==0)
                break;
            if(a%3 != 0){
                cout << "No" <<"\n";
                continue;
            }
            cout <<"YES"<<"\n";
        }
         */
        /*
        int i, a, b, sum=0;
        cout << "정수 2개 입력: ";
        cin >> a >> b;
         */
    /* -> for문 (시작조건; 반복조건; 변화하는 조건 )
        for(i=a;i<=b;i++){
            sum += i;
        }
    */
    /* -> while문
     * while(조건식-> 조건 완료하면 반복 종료){반복하고 싶은 함수 설정}
        i=a;
    while (i<=b){
        sum +=i;
        i++;
    }
     */
    /* -> do-while문
     * do{반복할 함수}while(증감조건, 반복종료 조건);
    i=a;
    do{
        sum += i;
        i++;
    } while (i<=b);
    */
    /*
    cout << a <<"에서" << b << "까지 합은" << sum;
        */
    }


