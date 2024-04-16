#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

using ColombiaMap = map<string, pair<string, string>>;

// Asociar departamentos con ciudades
pair<string,string> buscarCiudades(const ColombiaMap& colombia, const string& ciudad) {
    auto it = colombia.find(ciudad);
    if (it != colombia.end()) {
        return it->second;
    } else {
        return {"Departamento", "Ciudad"};
    }
}


// Asociar cuidades con climas
vector<string> buscarClimas(const ColombiaMap& colombia, const string& clima) {
    vector<string> ciudades;
    for (const auto& par : colombia) {
        if (par.second.second == clima) {
            ciudades.push_back(par.second.first);
        }
    }
    return ciudades;
}

int main() {
    ColombiaMap colombia = (string departamento, string clima){
        {"Amazonas", {"Leticia", "Tropical"}},
        {"Antioquia", {"Medellín", "Templado"}},
        {"Arauca", {"Arauca", "Tropical"}},
        {"Atlántico", {"Barranquilla", "Tropical"}},
        {"Bolívar", {"Cartagena", "Tropical"}},
        {"Boyacá", {"Tunja", "Frio"}},
        {"Caldas", {"Manizales", "Tropical"}},
        {"Caquetá", {"Florencia", "Templado"}},
        {"Casanare", {"Yopal", "Templado"}},
        {"Cauca", {"Popayán", "Tropical"}},
        {"Cesar", {"Valledupar", "Tropical"}},
        {"Chocó", {"Quibdó", "Tropical"}},
        {"Córdoba", {"Montería", "Tropical"}},
        {"Cundinamarca", {"Bogotá", "Frío"}},
        {"Guainía", {"Inírida", "Templado"}},
        {"Guaviare", {"San José Del Guaviare", "Templado"}},
        {"Huila", {"Neiva", "Tropical"}},
        {"Guajira", {"Rioacha", "Tropical"}},
        {"Magdalena", {"Santa Marta", "Tropical"}},
        {"Meta", {"Villavicencio", "Templado"}},
        {"Nariño", {"Pasto", "Frío"}},
        {"Norte de Santander", {"Cúcuta", "Tropical"}},
        {"Putumayo", {"Mocoa", "Templado"}},
        {"Quindío", {"Armenia", "Tropical"}},
        {"Risaralda", {"Pereira", "Tropical"}},
        {"San Andrés y Providencia", {"San Andrés", "Tropical"}},
        {"Santander", {"Bucaramanga", "Templado"}},
        {"Sucre", {"Sincelejo", "Tropical"}},
        {"Tolima", {"Ibagué", "Templado"}},
        {"Valle del Cauca", {"Cali", "Tropical"}},
        {"Vaupés", {"Mitú", "Frío"}},
        {"Vichada", {"Puerto Carreño", "Frío"}},
    };

    // Funcion que muestra capital y clima 
    string departamentos = departamento;
    auto capitalYClima = buscarDepartamento(colombia, departamento);
    cout << "La capital de" << departamento << " es: " << capital_y_clima.first << endl;
    cout << "El clima de la capital es: " << capital_y_clima.second << endl;

    // Funcion que muestra cuidades con un mismo clima 
    string climas = clima;
    vector<string> ciudades_con_clima = climaDepartamentos(colombia, clima);
    cout << "Las ciudades con clima" << clima << " son:" << endl;
    for (const auto& ciudad : ciudades_con_clima) {
        cout << ciudad << endl;
    }

    return 0;
}
