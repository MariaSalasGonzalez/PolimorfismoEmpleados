
#include <iomanip>
#include <sstream>
using namespace std;

#include "empleadoDestajo.h"

empleadoDestajo::empleadoDestajo(string id, string apellido, string nombre,
        double salarioHora, double horasTrabajadas)
: empleado(id, apellido, nombre),
_salarioHora(salarioHora), _horasTrabajadas(horasTrabajadas) {

}

double empleadoDestajo::salarioNeto() const {
    return _salarioHora * _horasTrabajadas;
}

string empleadoDestajo::toString() const {
    stringstream r;
    r << empleado::toString() << ", ";
    r << setprecision(2) << fixed << _salarioHora;
    r << ", " << _horasTrabajadas;
    return r.str();
}