#include <iostream>
using namespace std;
class Punto {
public:
    int x, y;

    Punto(int x, int y) : x(x), y(y) {}

    Punto operator+(const Punto& otro) {
        return Punto(this->x + otro.x, this->y + otro.y);
    }
};

int main() {
    Punto p1(1, 2), p2(3, 4);
    cout << "Punto 1: (" << p1.x << ", " << p1.y << ")" << std::endl;
    cout << "Punto 2: (" << p2.x << ", " << p2.y << ")" << std::endl;
    Punto p3 = p1 + p2;  // Uso del operador sobrecargado
    cout << "Suma de puntos: (" << p3.x << ", " << p3.y << ")" << std::endl;
}
