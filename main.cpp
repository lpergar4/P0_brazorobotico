#include <iostream>
#include <string>

using namespace std;

// Estructura para representar el estado del brazo robótico
struct BrazoRobotico {
    string id;
    double anguloBase;
    double anguloHombro;
    double anguloCodo;
};

// Función para mostrar el estado actual del brazo
void mostrarEstado(const BrazoRobotico& brazo) {
    cout << "--- Estado del Brazo Robótico [" << brazo.id << "] ---" << endl;
    cout << "  * Angulo Base:   " << brazo.anguloBase << "°" << endl;
    cout << "  * Angulo Hombro: " << brazo.anguloHombro << "°" << endl;
    cout << "  * Angulo Codo:   " << brazo.anguloCodo << "°" << endl;
}

int main() {
    // Inicializar el brazo con valores por defecto
    BrazoRobotico miBrazo = {"RoboArm-01", 0.0, 45.0, 90.0};

    cout << "¡Proyecto Brazo Robótico inicializado correctamente!" << endl;
    mostrarEstado(miBrazo);

    return 0;
}
