#include <iostream>
using namespace std;

class Rectangle {
    public:
        float a;
        float b;

void circuit() {
float c = (2*a) + (2*b);
cout << "Obwód: " << c << " ";
};

void area() {
float c = a*b;
cout << "Pole: " << c << " ";

};

};



int main(int argc, char** argv) {
setlocale(LC_CTYPE, "Polish");
Rectangle PP;
PP.a=2.0;
PP.b=3.0;
PP.circuit();
PP.area();

};


