#ifndef SUBSCRIBER_HH_
#define SUBSCRIBER_HH_

#include <string>
using namespace std;

namespace StubMock{
	class Subscriber{
		public:
	        virtual void receive(string msg)=0;
		private:
	};
}


#endif /* SUBSCRIBER_HH_ */
