#pragma once

namespace demeter{
    //Represents Wallet of a customer
	class Wallet{
		public:
	        explicit Wallet(const double amount = 0.0);
	        virtual ~Wallet() {}

	        double balance() const;
	        Wallet& add(double amount);
	        Wallet& deduct(double amount);
	        double empty();

	        // Convenience functions
	        Wallet& operator+=(double amount);
	        Wallet& operator-=(double amount);
	        void operator+=(Wallet& otherWallet);

		private:
	        double _amount;
	};
}
