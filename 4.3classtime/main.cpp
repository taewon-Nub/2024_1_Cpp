#include <iostream>
using namespace std;

class coffeeMachine{
private:
    int coffee, water, sugar;
public:
    int drinkEspresso();
    int drinkAmericano();
    int drinkSugarCoffee();
    void show();
    void fill();
    coffeeMachine();
    coffeeMachine(int a, int b, int c);

};

int main(){
    coffeeMachine java(5,10,3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
    return 0;
}


coffeeMachine::coffeeMachine() {
    coffee =0;
    water = 0;
    sugar =0;
}
coffeeMachine::coffeeMachine(int a, int b, int c) {
    this -> coffee = a;
    this -> water = b;
    this -> sugar = c;
}

int coffeeMachine::drinkAmericano() {
    coffee -=1;
    water -=2;

}

int coffeeMachine::drinkEspresso() {
    coffee -=1;
    water -=1;
}
int coffeeMachine::drinkSugarCoffee() {
    coffee -=1;
    water -=2;
    sugar -=1;
}
void coffeeMachine::fill() {
    coffee =10;
    water = 10;
    sugar =10;
}

void coffeeMachine::show() {
    cout << "커피머신 상태,"<<"커피: "<<coffee<<" 물: "<<water <<" 설탕: "<<sugar<<endl;

}