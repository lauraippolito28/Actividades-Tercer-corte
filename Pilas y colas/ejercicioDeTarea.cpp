/* LISTA DE CAMCIONES DE VIDEOS FAVORITOS DE YOUTUBE Y DECRI SI ES PILA O COLA. 
CREAR UN EJERCICIO: SIMULAR LOS TURNOS QUE SE PIDE EN UNA EPS PARA ACCEDER A UNA CITA MÉDICA Y DETERMINAR SI ES PILA O COLA.*/


#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> FavoritosYoutube;

    // Agregar canciones a la lista
    FavoritosYoutube.push("Hookiao");
    FavoritosYoutube.push("Your Song");
    FavoritosYoutube.push("Saturno");
    FavoritosYoutube.push("Un mundo ideal");

    // Mostrar la lista de favoritos
    cout << "Canciones de favoritos en YouTube:" << endl;
    while (!FavoritosYoutube.empty()) {
        cout << FavoritosYoutube.top() << endl;
        FavoritosYoutube.pop();
    }

    return 0;
}

/*ESTE CÓDIGO USÓ PILAS*/
