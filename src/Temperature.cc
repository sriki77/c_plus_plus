#include <string>
#include <sstream>
#include <iostream>
using namespace std;

#include "Temperature.hh"

namespace TddUnit {

    Temperature::Temperature(double value, Unit unit):_value(value),_unit(unit) {
    }

    Temperature::operator const char*() {
        ostringstream  tempRep;
        tempRep << _value << " " << _unit;
        return tempRep.str().c_str();
    }

    bool Temperature::operator ==(Temperature & other)
    {
        double convVal = other._unit.convertTo(other._value, _unit);
        return _value == convVal;
    }

    Temperature Temperature::toCelcius()
    {
        Temperature tempInCel(_unit.convertTo(_value,CELCIUS),CELCIUS);
        return tempInCel;
    }


    Temperature Temperature::toFahrenheit()
    {
        Temperature tempInF(_unit.convertTo(_value,FAHRENHEIT),FAHRENHEIT);
         return tempInF;
    }


    const Unit Temperature::KELVIN(1,0,Unit::KELVIN, "Deg K");
    const Unit Temperature::CELCIUS(1,-273,Unit::CELCIUS, "Deg C");
    const Unit Temperature::FAHRENHEIT(5.0/9,-459.4,Unit::FAHRENHEIT,"Deg F");


}
