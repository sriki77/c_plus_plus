#pragma once

namespace demeter{
    //Represents Wallet of a customer
	class Wallet{
		public:
	        explicit Wallet(const double amount = 0.0);
	        double balance() const;
	        Wallet& addAmt(double amount);
	        Wallet& operator+=(double amount);
	        Wallet& operator-=(double amount);
	        void operator+=(Wallet& otherWallet);
	        double empty();

		private:
	        double _amount;
	};
}
