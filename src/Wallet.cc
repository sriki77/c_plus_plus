#include "Wallet.hh"
#include <iostream>

using std::cout;
using std::endl;

namespace demeter {

    Wallet::Wallet(double amount) : _amount(amount) {}

    Wallet& Wallet::operator+=(double amount) {
        return addAmt(amount);
    }

    void Wallet::operator+=(Wallet& otherWallet) {
        addAmt(otherWallet.empty());
    }

    Wallet& Wallet::operator-=(double amount){
        _amount-= amount;
        return *this;
    }

    Wallet& Wallet::addAmt(double amount){
        _amount+=amount;
        return *this;
    }

    double Wallet::balance() const {
        return _amount;
    }

    double Wallet::empty() {
    	double amount = _amount;
    	_amount = 0;
    	return amount;
    }
}
