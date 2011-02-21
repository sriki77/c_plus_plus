#ifndef CASHIER_HH_
#define CASHIER_HH_

#include "Customer.hh"

namespace demeter {
    //Represents the cashier @ murugun idli shop
	class Cashier{
		public:
	       explicit Cashier();
	       void collectMoney(Customer& customer, double amt);
	       double amountBalance() const;
		private:
	       double _amtBalance;
	};
}


#endif /* CASHIER_HH_ */
