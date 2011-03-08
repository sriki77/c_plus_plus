#include "Wallet.hh"
#include <iostream>

namespace demeter {

    Wallet::Wallet(double amount) : _amount(amount) {}

    Wallet& Wallet::add(double amount){
        _amount += amount;
        return *this;
    }

    Wallet& Wallet::deduct(double amount) {
    	return add(-amount);
    }

    double Wallet::balance() const {
        return _amount;
    }

    double Wallet::empty() {
    	double amount = _amount;
    	_amount = 0;
    	return amount;
    }

    Wallet& Wallet::operator+=(double amount) {
        return add(amount);
    }

    void Wallet::operator+=(Wallet& otherWallet) {
        add(otherWallet.empty());
    }

    Wallet& Wallet::operator-=(double amount) {
        return deduct(amount);
    }
}
