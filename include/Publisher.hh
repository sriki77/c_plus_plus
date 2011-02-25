#ifndef PUBLISHER_HH_
#define PUBLISHER_HH_

#include "Subscriber.hh"

namespace StubMock {
	class Publisher{
		public:
	        void add(Subscriber* sub);
	        void publish(string msg);

		private:
	        Subscriber* _sub;
	};
}





#endif /* PUBLISHER_HH_ */
