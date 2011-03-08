#ifndef STATIONCODEPROVIDER_HH_
#define STATIONCODEPROVIDER_HH_
#include <string>
using namespace std;

namespace MockSample {
	class StationCodeProvider{
		public:
	        virtual string getCode(string stationName)=0;
		private:
	};
}


#endif /* STATIONCODEPROVIDER_HH_ */
