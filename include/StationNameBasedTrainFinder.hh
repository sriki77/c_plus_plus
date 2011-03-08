#ifndef STATIONNAMEBASEDTRAINFINDER_HH_
#define STATIONNAMEBASEDTRAINFINDER_HH_

#include "TrainFinder.hh"
#include "StationCodeProvider.hh"
#include "TrainNumberProvider.hh"

namespace MockSample {
    class StationNameBasedTrainFinder: public TrainFinder {
        public:
            StationNameBasedTrainFinder(StationCodeProvider* s,
                    TrainNumberProvider* t);
            int getTrainNum(string src, string dest);
        private:
            StationCodeProvider* scp;
            TrainNumberProvider* tnp;
    };
}


#endif /* STATIONNAMEBASEDTRAINFINDER_HH_ */
