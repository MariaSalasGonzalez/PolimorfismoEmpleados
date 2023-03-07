
#include <iomanip>
#include <sstream>
using namespace std;

#include "empleadoFijo.h"

empleadoFijo::empleadoFijo(string id, string apellido, string nombre, double salario)
: empleado(id, apellido, nombre), _salario(salario) {

}

double empleadoFijo::salarioNeto() const {
    return _salario * (1.0 - PORCENTAJE_DEDUCCIONES);
}

const double empleadoFijo::PORCENTAJE_DEDUCCIONES = 0.12;

string empleadoFijo::toString() const {
    stringstream r;
    r << empleado::toString() << ", ";
    r << setprecision(2) << fixed << _salario;
    return r.str();
}