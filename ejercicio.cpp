#include <iostream>

using namespace std;

void imprimirTriangulo(int altura) {
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    imprimirTriangulo(3);
    imprimirTriangulo(2);
    imprimirTriangulo(3);

    return 0;
}
