#include<iostream> 
#include <map> 
using namespace std;

int main(){
    map<int, string> frutas; 
    frutas[1]="arandanos";
    frutas[2]="uvas";
    frutas[3]="cerezas";
    frutas[4]="sandia";
    for (const auto& par:frutas)
    {
        int clave = par.first();
        string valor = par.second();
        cout << "Clave:" << clave << endl;
        cout << "Valor:" << valor << endl;
    }
    
    string nombre="cerezas"; 
    auto it=frutas.find(nombre);
    if (it!=frutas.end())
    {
        cout << "Se encontro" << nombre << "en el conjunto";
    }else{
        cout << "No se encontro" << nombre << "en el conjunto";
    }

    string fruit="uvas";
    frutas.erase(fruit);
    
}