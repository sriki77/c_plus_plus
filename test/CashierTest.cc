#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "GTest.hh"
#include "Cashier.hh"
using namespace demeter;

#define TEST_CASE CashierTest

GTEST(shouldCollectMoney) {
    Cashier cashier;
    Customer customer;
    cashier.collectMoney(customer, 10);
    ASSERT_EQ(10,cashier.amountBalance());
    ASSERT_EQ(10,customer.balance());
}
