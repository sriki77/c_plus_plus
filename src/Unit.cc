#include "Unit.hh"
#include <cstring>
#include <iostream>
using namespace std;



namespace TddUnit {

    bool Unit::operator ==(const Unit & other)
    {
        return _baseunit==other._baseunit && _offset==other._offset
                && _unitType==other._unitType && strcmp(_strRep,other._strRep)==0;
    }


    Unit::Unit(double baseunit, double offset, UnitType unitType, const char *strRep)
    : _baseunit(baseunit),_offset(offset),_unitType(unitType),_strRep(strRep)
    {

    }

    Unit::operator const char*()
    {
        return _strRep;
    }

    double Unit::convertTo(double value, Unit toUnit)
    {
        return (value-_offset)*_baseunit/toUnit._baseunit+toUnit._offset;
    }

}
