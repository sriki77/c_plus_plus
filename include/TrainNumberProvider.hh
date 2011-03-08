#ifndef TRAINNUMBERPROVIDER_HH_
#define TRAINNUMBERPROVIDER_HH_
#include <string>
using namespace std;

namespace MockSample {
	class TrainNumberProvider{
		public:
	        virtual int getTrainNumber(string fromStation, string toStation)=0;
		private:
	};
}


#endif /* TRAINNUMBERPROVIDER_HH_ */
