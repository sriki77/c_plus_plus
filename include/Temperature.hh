#ifndef TEMPERATURE_HH_
#define TEMPERATURE_HH_

#include "Unit.hh"

namespace TddUnit {

    class Temperature {
        public:
            Temperature(double value, Unit unit);

            operator const char*();
            bool operator==(Temperature& other);

            Temperature toCelcius();
            Temperature toFahrenheit();

            const static Unit KELVIN;
            const static Unit CELCIUS;
            const static Unit FAHRENHEIT;

        private:
            double _value;
            Unit _unit;
    };
}

#endif /* TEMPERATURE_HH_ */
