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
    Punto p3 = p1 + p2;  // Uso del operador sobrecargado
}
