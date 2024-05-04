#include <iostream> 
#include <vector> 

using namespace std; 

int encontrarMaximo(const vector<int> &lista){
    int maximo = lista[0];
    for (int i = 1; i < lista.size(); i++){
        if(lista[i] > maximo){
            maximo = lista[i];
        }
    }
    return maximo;
}
 
int main(){
    vector<int> lista = {5, 12, 9, 7, 3, 15, 8, 10, 6, 4};

    int resultado = encontrarMaximo(lista);

    cout << "El máximo elemento en la lista es: " << resultado << endl;

    return 0;
}

/* 
    1. Entiende el problema: consiste en encontrar el número máximo de la lista, en este caso es un vector
    2. Identifica las partes críticas: en el bucle for que recorre la lista, determina la cantidad de veces que se ejecutan las operaciones claves
    3. Conteo de operaciones básicas: las comparaciones (lista[i]>maximo) y la asignacion ddel maximo (maximo=Lista[i])
    4. Notación O grande (O): 
    5. Analiza los bucles: 
    6. Considera funciones y recursión:
    7. Evalúa algoritmos específicos: 
    8. Prueba con diferentes tamaños de entrada:
    9. Comparación con escalabilidad: 
    10. Documentación de conclusiones: 
    11. Optimizar (si es necesario): 
*/
