#ifndef TEMPERATURE_HH_
#define TEMPERATURE_HH_

namespace TddUnit {

    class Temperature {
        public:
            enum Unit{ CELCIUS, FAHRENHEIT};
            Temperature(double value, Unit unit);
            operator const char*();
            bool operator==(Temperature& other);
            Temperature toCelcius();
            Temperature toFahrenheit();
        private:
            void calcRawValue();
        bool isFahren();
            double _rawValue;
            double _value;
            Unit _unit;
            static const char _unitRep[2];
    };
}


#endif /* TEMPERATURE_HH_ */
