
#ifndef EMPLEADOFIJO_H
#define EMPLEADOFIJO_H

#include "empleado.h"

class empleadoFijo : public empleado {
public:
    empleadoFijo(std::string, std::string, std::string, double);
    virtual double salarioNeto() const;
    virtual std::string toString() const;
    static const double PORCENTAJE_DEDUCCIONES;
    

private:
    double _salario;
};

#endif /* EMPLEADOFIJO_H */

