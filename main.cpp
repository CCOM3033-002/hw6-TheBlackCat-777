#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

const double Pi = 3.14159265358979323846;

// Prototipos de funciones
void volumen(double, double);
void volumen(double);
void volumen(double, double, double);
void area(double, double);
void area(double);
void area(double, double, double);

int main() {
    // Propósito del programa
    cout << "Este programa calcula el volumen y el área de la superficie de tres figuras." << endl;

    // Pedir al usuario que escoja entre las siguientes figuras en 3 dimensiones: cilindro, esfera, prisma rectangular.
    char opcion_figura;
    string figura;
    cout << "\nEscoja una figura: " << "\na. Cilindro" << "\nb. Esfera" << "\nc. Prisma rectangular" << endl;
    cin >> opcion_figura;

    // Input validation
    while (opcion_figura < 'a' || opcion_figura > 'c') {
        cout << "Entre las opciones a, b o c: " << endl;
        cin >> opcion_figura;
    }

    // Opciones
    switch (opcion_figura) {
        case 'a': figura = "cilindro"; break;
        case 'b': figura = "esfera"; break;
        case 'c': figura = "prisma rectangular"; break;
    }

    // Mostrar selección
    cout << "Selección: " << figura << endl;

    // Preguntar si quiere calcular el volumen o el área de la superficie de la figura escogida.
    char que_calcular;
    cout << "\nEscoga entre los siguientes opciones: " << "\na. Volumen" << "\nb. Área de la superficie" << endl;
    cin >> que_calcular;

    // Input validation
    while (que_calcular < 'a' || que_calcular > 'b') {
        cout << "Entre las opciones a o b: " << endl;
        cin >> que_calcular;
    }

    // Opciones
    string calcular;
    switch (que_calcular) {
        case 'a': calcular = "volumen"; break;
        case 'b': calcular = "area de la superficie"; break;
    }

    // Mostrar selección
    cout << "Selección: " << calcular << endl;

    // Calcular volumen y áreas de las figuras
    if (figura == "cilindro") {
        double radio, altura;

        cout << "Entre el radio del cilindro: " << endl;
        cin >> radio;

        // Input validation del radio
        while (radio < 0) {
            cout << "Entre solo números positivos: " << endl;
            cin >> radio;
        }

        cout << "Entre la altura del cilindro: " << endl;
        cin >> altura;

        // Input validation de la altura
        while (altura < 0) {
            cout << "Entre solo números positivos: " << endl;
            cin >> altura;
        }

        if (calcular == "volumen")
            volumen(radio, altura);
        else
            area(radio, altura);
    }

    // Calcular volumen o área de la esfera
    if (figura == "esfera") {
        double radio;

        cout << "Entre el radio de la esfera: " << endl;
        cin >> radio;

        // Input validation del radio
        while (radio < 0) {
            cout << "Entre solo números positivos: " << endl;
            cin >> radio;
        }

        if (calcular == "volumen")
            volumen(radio);
        else
            area(radio);
    }

    // Calcular volumen o área del prisma rectangular
    if (figura == "prisma rectangular") {
        double largo, ancho, alto;

        cout << "Entre el largo del prisma rectangular: " << endl;
        cin >> largo;

        // Input validation del largo
        while (largo < 0) {
            cout << "Entre solo números positivos: " << endl;
            cin >> largo;
        }

        cout << "Entre el ancho del prisma rectangular: " << endl;
        cin >> ancho;

        // Input validation del ancho
        while (ancho < 0) {
            cout << "Entre solo números positivos: " << endl;
            cin >> ancho;
        }

        cout << "Entre el alto del prisma rectangular: " << endl;
        cin >> alto;

        // Input validation del alto
        while (alto < 0) {
            cout << "Entre solo números positivos: " << endl;
            cin >> alto;
        }

        if (calcular == "volumen")
            volumen(largo, ancho, alto);
        else
            area(largo, ancho, alto);
    }

    return 0;
}

// Volumen cilindro
void volumen(double radio, double altura) {
    double volumen = Pi * pow(radio, 2) * altura;
    cout << setprecision(2) << fixed << "El volumen del cilindro es " << volumen << endl;
}

// Volumen esfera
void volumen(double radio) {
    double volumen = (4.0 / 3.0) * Pi * pow(radio, 3);
    cout << setprecision(2) << fixed << "El volumen de la esfera es " << volumen << endl;
}

// Volumen prisma rectangular
void volumen(double largo, double ancho, double alto) {
    double volumen = largo * ancho * alto;
    cout << setprecision(2) << fixed << "El volumen del prisma rectangular es " << volumen << endl;
}

// Área cilindro
void area(double radio, double altura) {
    double area = 2 * Pi * radio * (altura + radio);
    cout << setprecision(2) << fixed << "El área del cilindro es " << area << endl;
}

// Área esfera
void area(double radio) {
    double area = 4 * Pi * pow(radio, 2);
    cout << setprecision(2) << fixed << "El área de la esfera es " << area << endl;
}

// Área prisma rectangular
void area(double largo, double ancho, double alto) {
    double area = 2 * (largo * ancho + largo * alto + ancho * alto);
    cout << setprecision(2) << fixed << "El área del prisma rectangular es " << area << endl;
}
