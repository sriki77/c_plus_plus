#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "GTest.hh"
#include "TrainFinder.hh"
#include "StationNameBasedTrainFinder.hh"
#include "TrainNumberProvider.hh"
#include "StationCodeProvider.hh"
using namespace MockSample;

#define TEST_CASE TrainFinderTest

class StationCodeProviderStub : public StationCodeProvider {
    public :
        string getCode(string stationName);

};


string StationCodeProviderStub::getCode(string stationName)
{
    return stationName == "Bangalore" ? "BLR" : "DLH";
}

class TrainNumberProviderStub : public TrainNumberProvider {
    public :
        int getTrainNumber(string fromSta, string toStation);
};


int TrainNumberProviderStub::getTrainNumber(string stationCode, string toStation) {
    return 1234;
}




GTEST(shouldReturnTheTrainNumber) {
    StationCodeProviderStub stnCdPrvStub;
    TrainNumberProviderStub trnNumPrvStub;
    TrainFinder* trainFinder=new StationNameBasedTrainFinder(&stnCdPrvStub,&trnNumPrvStub);
    int trainNum = trainFinder->getTrainNum("Bangalore", "Chennai");
    EXPECT_EQ(1234,trainNum)<<"Train number should be 1234";
    delete trainFinder;

}
