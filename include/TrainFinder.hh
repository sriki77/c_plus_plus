#ifndef TRAINFINDER_HH_
#define TRAINFINDER_HH_

#include <string>
using namespace std;

namespace MockSample {
	class TrainFinder{
		public:
	        virtual int getTrainNum(string src, string dest)=0;
		private:
	};
}


#endif /* TRAINFINDER_HH_ */
