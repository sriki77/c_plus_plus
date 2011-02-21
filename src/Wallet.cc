#include "Wallet.hh"

namespace demeter {


    Wallet::Wallet(double amount):_amount(amount){

    }

    Wallet Wallet::operator+=(double amount){
        return addAmt(amount);
    }

    Wallet Wallet::operator+(const Wallet& otherWallet){
        return addAmt(otherWallet._amount);
    }

    Wallet Wallet::operator-=(double amount){
        _amount-= amount;
        return *this;
    }

    Wallet Wallet::addAmt(double amount){
        _amount+=amount;
        return *this;
    }

    double Wallet::balance() const{
        return _amount;
    }

}
