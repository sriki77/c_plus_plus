#include "Customer.hh"

namespace demeter {

    Customer::Customer() :
        _wallet(20) {

    }

    double Customer::pay(double amount) {
        _wallet -= amount;
        return _wallet.balance();
    }

    double Customer::balance() const {
        return _wallet.balance();
    }

}
