#include <iostream> 
#include <string> 
#include <set> 
#include <vector>

using namespace std; 

int main(){
    set<string> frutas; 

     /*insert(): agregar un elemento al conjunto 
        erase(): eliminar un elemento del conjunto
        find(): buscar un elemento en el conjunto*/
    frutas.insert("arandanos");
    frutas.insert("uvas");
    frutas.insert("cerezas");
    frutas.insert("sandia");

    cout << "Conjunto de frutas: " << endl; 
    for (const string& fruta: frutas)
    {
        cout << fruta << endl; 
    }

    frutas.insert("mango");
    
    cout << "Conjunto de frutas: " << endl; 
    for (const string& fruta : frutas)
    {
        cout << fruta << endl; 
    }

    fruta.erase("cerezas");

    cout << "Conjuntos de frutas: " << endl; 
    for (const string& fruta : frutas)
    {
        cout << fruta << endl; 
    }

    string buscar="arandanos";
    string buscar2="cerezas";
    auto iterador=frutas.find(buscar);
    if (iterador!=frutas.end())
    {
        cout << "se encontro el elemento " << buscar << " en el conjunto de frutas";
    }else{
        cout << "no se encontro el elemento " << buscar << " en el conjunto de frutas";
    }

    // Ejercicio en clase: conjunto de canciones de reproduccion de 3 canciones y luego se agrega una mas, se eliminan dos y se busca una
    set<string> canciones; 

    canciones.insert("Luna");
    canciones.insert("Me voy");
    canciones.insert("TQMQA");

    canciones.insert("Te empeliculaste");

    canciones.erase("Me voy"); 

    string buscar="TQMQA";
    auto itCancion=canciones.find(buscar);
    if (ifCancion!= canciones.end()){
        cout << buscar << "esta en la lista." << endl; 
    }else {
        cout << buscar << "no esta en la lista." << endl; 
    }

    // Operaciones (interseccion, union y diferencia)
    set<int> conjuntoA={1,2,3,4,5};
    set<int> conjuntoB={3,4,5,6,7};
    // Interseccion 
    set<int> interseccion;
    for (int elemento:conjuntoA)
    {
        if(conjuntoB.count(elemento)){
            interseccion.insert(elemento);
        }
        cout<< elemento << " .";
    }
    for (int elemento : interseccion){
        cout << elemento << " .";
    }
    // Union
    set <int> union=conjuntoA;
    union.insert(conjuntoB.begin(), conjuntoB.end());
    cout << "union: ";
    for (int elemento : union){
        cout << elemento << " .";
    }
    // Diferencia conjunto A - conjunto B 
    set<int> diferencia;
    set_difference(conjuntoA.begin(), conjuntoA.end(), conjuntoB.begin(), conjuntoB.end(), insert(diferencia,diferencia.begin()))
    for (auto it = diferencia.begin(); it != diferencia.end(); ++it){
        cout << *it << " .";
    }
    return 0;
}