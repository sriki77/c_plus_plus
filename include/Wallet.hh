#pragma once

namespace demeter{
    //Represents Wallet of a customer
	class Wallet{
		public:
	        Wallet(const double amount=0.0);
	        double balance() const;
	        Wallet addAmt(double amount);
	        Wallet operator+=(double amount);
	        Wallet operator-=(double amount);
	        Wallet operator+(const Wallet& otherWallet);
		private:
	        double _amount;
	};
}
