#include <iostream>
using namespace std;

#include "StationNameBasedTrainFinder.hh"


namespace MockSample{


    StationNameBasedTrainFinder::StationNameBasedTrainFinder(StationCodeProvider *s, TrainNumberProvider *t)
    {
       scp=s;
       tnp=t;
    }

    int StationNameBasedTrainFinder::getTrainNum(string src, string dest){
        return tnp->getTrainNumber(scp->getCode(src),scp->getCode(dest));
    }
}
