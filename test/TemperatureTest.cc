#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "GTest.hh"
#include "Temperature.hh"
#include <iostream>
using namespace TddUnit;
using namespace std;

#define TEST_CASE TemperatureTest

class TemperatureTest: public ::testing::Test {

    protected:

        virtual void SetUp() {
            _100DegCelcius = new Temperature(100, Temperature::CELCIUS);
            _212DegFahrenheit = new Temperature(212, Temperature::FAHRENHEIT);
        }

        virtual void TearDown() {
            delete _100DegCelcius;
            delete _212DegFahrenheit;
        }

        Temperature* _100DegCelcius;
        Temperature* _212DegFahrenheit;

};

GTESTF(shouldBeAbleToRepresentTemp)
{
    ASSERT_STREQ("100 Deg C",*_100DegCelcius)<<"Unexpected string representation";
    ASSERT_STREQ("212 Deg F",*_212DegFahrenheit)<<"Unexpected string representation";
}

GTESTF(shouldBeAbleToCompareTemp)
{
    ASSERT_TRUE(*_100DegCelcius==*_212DegFahrenheit) <<"212 Deg F should be equal to 100 Deg C";

    Temperature f32(32,Temperature::FAHRENHEIT);
    Temperature C0(0,Temperature::CELCIUS);

    ASSERT_TRUE(*_100DegCelcius==*_212DegFahrenheit) <<"212 Deg F should be equal to 100 Deg C";
    ASSERT_TRUE(f32==C0) <<"32 Deg F should be equal to 0 Deg C";
}

GTESTF(shouldBeAbleToConvertBetweenUnits) {
    Temperature tempInCelcius = _212DegFahrenheit->toCelcius();
    Temperature tempInFahren = _100DegCelcius->toFahrenheit();

    ASSERT_STREQ("100 Deg C",tempInCelcius) << "Converted value should be 100 Deg C";
    ASSERT_STREQ("212 Deg F",tempInFahren) << "Converted value should be 212 Deg F";

    tempInFahren = _212DegFahrenheit->toFahrenheit();
    ASSERT_STREQ("212 Deg F",tempInFahren) << "Converted value should still remain 212 Deg F";
}
