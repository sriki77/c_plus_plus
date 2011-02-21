#ifndef CUSTOMER_HH_
#define CUSTOMER_HH_

#include "Wallet.hh"

namespace demeter {
    //Represents a customer @ murugan idli shop
	class Customer{
		public:
	        Customer();
	        double pay(double amount);
	        double balance() const;
		private:
	        Wallet _wallet;
	};
}


#endif /* CUSTOMER_HH_ */
