#include "Cashier.hh"

namespace demeter {

    Cashier::Cashier():_amtBalance(0){

    }

    double Cashier::amountBalance() const{
        return _amtBalance;
    }

    void Cashier::collectMoney(Customer& customer, double amt){
        _amtBalance += customer.pay(amt);
    }
}
