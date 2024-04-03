#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    Circle(){radius=1;}
    Circle(int radius){this -> radius = radius;}
    double getArea() {return 3.14 * radius * radius;}
};

void swap(Circle *a, Circle *b){
    Circle temp = *a;
    *a = *b;
    *b = temp;



}

int main() {

    Circle c1(1);
    Circle c2(5);

    cout << "c1 넓이 = "<< c1.getArea() << endl;
    cout << "c2 넓이 = "<< c2.getArea() <<endl;
    cout << "스왑" <<endl;
    swap(c1,c2);
    cout << "c1 넓이 = "<< c1.getArea() << endl;
    cout << "c2 넓이 = "<< c2.getArea() <<endl;

}
