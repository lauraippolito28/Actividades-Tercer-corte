#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

using RegistroDeEstudiante = map<string, map<string, double>>;

void registrarNota(RegistroDeEstudiante& registro, const string& nombre, const string& materia, doubble nota) {
    registro[nombre][materia] = nota;
}

float recolectarNotas(const RegistroEstudiantes& registro, const string& nombre, const string& materia) {
    const auto& itNombre = registro.find(estudiante);
    if (itNombre != registro.end()) {
        const auto& itNota = itNombre->second.find(materia);
        if (itNota != itNombre->second.end()) {
            return itNota->second;
        }
    }
    return 0;
}

float promedioDeNotas(const RegistroDeEstudiantes& registro, const string& nombre) {
    const auto& itNombre = registro.find(nombre);
    if (itNombre != registro.end()) {
        const auto& notas = itNombre->second;
        float suma = accumulate(notas.begin(), notas.end(), 0.0f,
                                 [](float a, const pair<string, float>& par) { return a + par.second; });
        return suma / notas.size();
    }
    return 0;
}

float promedioAsignatura(const RegistroEstudiantes& registro, const string& materia) {
    vector<float> notas;
    for (const auto& par : registro) {
        const auto& itNota = par.second.find(materia);
        if (itNota != par.second.end()) {
            notas.push_back(itNota->second);
        }
    }
    if (!notas.empty()) {
        float suma = accumulate(notas.begin(), notas.end(), 0.0f);
        return suma / notas.size();
    }
    return 0;
}

int main() {
    RegistroDeEstudiantes registro;

    registrarNota(registro, "Estudiante1", "materia1", 3.8);
    registrarNota(registro, "Estudiante2", "materia2", 3.6);
    registrarNota(registro, "Estudiante3", "materia1", 3.9);
    registrarNota(registro, "Estudiante1", "materia2", 4.3);
    registrarNota(registro, "Estudiante2", "materia1", 3.3);
    registrarNota(registro, "Estudiante3", "materia2", 4.8);

    cout << "Nota de Estudiante1 en materia1: " << obtenerNota(registro, "Estudiante1", "materia1") << endl;
    cout << "Promedio de notas de Estudiante1: " << promedioEstudiante(registro, "Estudiante1") << endl;
    cout << "Promedio de notas en materia1: " << promedioAsignatura(registro, "materia1") << endl;

    return 0;
}
