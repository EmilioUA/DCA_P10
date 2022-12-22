//Impresión de figuras Emilio Prieto Uclés 
#include <iostream>

using namespace std;

string CARACTER = "*";

struct Figura {
    int ancho;
    int alto;
    string caracter;

    Figura(int ancho, int alto, string caracter) {
        this->ancho = ancho;
        this->alto = alto;
        this->caracter = caracter;
    }

    string cuadrado() {
        string aux;
        for (int i = 0; i < alto; i++) {
            for (int j = 0; j < alto; j++) {
                aux.append(caracter);
            }
            aux.append("\n");
        }
        return aux;
    }

    string triangulo() {
        string aux;
        for (int i = 0; i < alto; i++) {
            for (int j = 0; j < alto; j++) {
                if (j <= i) {
                    aux.append(caracter);
                }
            }
            aux.append("\n");
        }
        return aux;
    }

    string rectangulo() {
        string aux;
        for (int i = 0; i < alto; i++) {
            for (int j = 0; j < ancho; j++) {
                aux.append(caracter);
            }
            aux.append("\n");
        }
        return aux;
    }
};


int main(){

    Figura F = Figura(4, 3, CARACTER);

    cout<<"APLICACIÓN PARA IMPRIMIR FIGURAS"<<endl;
    cout<< "1. Impresión del cuadrado"<<endl;
    cout<<F.mal()<<endl;
    cout<< "2. Impresión del rectángulo"<<endl;
    cout<<F.rectangulo()<<endl;
    cout<< "3. Impresión del triángulo"<<endl;
    cout<<F.triangulo()<<endl;

    string cuadrado = "***\n***\n***\n";
    string rectangulo = "****\n****\n****\n";
    string triangulo = "*\n**\n***\n";

return 0;
}
