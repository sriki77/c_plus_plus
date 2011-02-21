#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "GTest.hh"
#include "Customer.hh"
using namespace demeter;

#define TEST_CASE CustomerTest

GTEST(shouldSupportPay) {
    Customer customer;
    ASSERT_EQ(10,customer.pay(10));
    ASSERT_EQ(10,customer.balance());
}
