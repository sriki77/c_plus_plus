#pragma once

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
