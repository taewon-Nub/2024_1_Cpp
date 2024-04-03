//
// Created by 김태원 on 2024/03/20.
//

#ifndef MYPRACTICE_SOMETHING_H
#define MYPRACTICE_SOMETHING_H

#endif //MYPRACTICE_SOMETHING_H

#include <iostream>
using namespace std;

class Calculator{
private:
    int num1;
    int num2;
    int num3;
public:
    Calculator();
    Calculator(int num1, int num2);
    void input();
    int add();
    int sub();
    int mult();
    float div();
    void sol();
};