#include <string>
#include <sstream>
using namespace std;

#include "Temperature.hh"

namespace TddUnit {

    Temperature::Temperature(double value, Unit unit):_value(value),_unit(unit) {
        calcRawValue();
    }

    Temperature::operator const char*() {
        ostringstream  tempRep;
        tempRep << _value << " Deg " << _unitRep[_unit];
        return tempRep.str().c_str();
    }

    const char Temperature::_unitRep[2]={'C','F'};

    bool Temperature::operator ==(Temperature & other)
    {
        return _rawValue == other._rawValue;
    }


    void Temperature::calcRawValue()
    {
        _rawValue=(_unit==CELCIUS ? _value: (5.0/9)*(_value-32));

    }

}
