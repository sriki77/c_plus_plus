#ifndef UNIT_HH_
#define UNIT_HH_

namespace TddUnit {
    class Unit {
        public:
            enum UnitType {CELCIUS,FAHRENHEIT,KELVIN};
            Unit(double baseunit,double offset, UnitType unitType, const char* strRep);
            bool operator==(const Unit& other);
            operator const char*();
            double convertTo(double value, Unit toUnit);
        private:
            const char* _strRep;
            double _baseunit;
            double _offset;
            UnitType _unitType;
    };
}

#endif /* UNIT_HH_ */
