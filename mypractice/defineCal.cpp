//
// Created by 김태원 on 2024/03/20.
//

#include "Calculator.h"

Calculator::Calculator() {
    num1= 0;
    num2= 0;
    num3 =0;
}

Calculator::Calculator(int num1, int num2) {
    this ->num1=num1;
    this ->num2=num2;
}
void Calculator::input() {
    cout << "연산하고 싶은 두 수를 차례로 입력하세요: ";
    cin >> num1 >> num2;
}

int Calculator::add() {
    return num3 = num1+num2;
}

int Calculator::sub() {
    return num3 = num1 - num2;
}

int Calculator::mult() {
    return num3 = num2*num1;
}

float Calculator::div() {
    return num3=num1/num2;
}

void Calculator::sol() {
    cout << "두 수를 더하면: "<<Calculator::add()<<endl;
    cout << "두 수를 빼면: "<<Calculator::sub()<<endl;
    cout << "두 수를 곱하면: "<<Calculator::mult()<<endl;
    cout << "두 수를 나누면: "<<Calculator::div()<<endl;

}