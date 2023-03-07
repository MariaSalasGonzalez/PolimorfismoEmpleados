
#include <sstream>
using namespace std;

#include "empleado.h"

empleado::empleado(string id, string apellido, string nombre)
: _id(id), _apellido(apellido), _nombre(nombre) {
}


string empleado::toString() const {
    stringstream r;
    r << _id << ", " << _apellido << ", " << _nombre ;
    return r.str();
}

