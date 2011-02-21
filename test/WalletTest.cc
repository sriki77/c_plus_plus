#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "GTest.hh"
#include "Wallet.hh"
using namespace demeter;

#define TEST_CASE WalletTest

GTEST(shouldSupportAmtBalance) {
    Wallet emptyWallet;
    ASSERT_EQ(0.0,emptyWallet.balance());
    Wallet wallet_10_bucks(10);
    ASSERT_EQ(10.0,wallet_10_bucks.balance());
}

GTEST(shouldSupportAddAmt) {
    Wallet wallet(10);
    ASSERT_EQ(10.0,wallet.balance());
    wallet.addAmt(10);
    ASSERT_EQ(20.0,wallet.balance());
    wallet += 10;
    ASSERT_EQ(30.0,wallet.balance());
    wallet = wallet+ 10;
    ASSERT_EQ(40.0,wallet.balance());
}

GTEST(shouldSupportRemAmt) {
    Wallet wallet(10);
    ASSERT_EQ(10,wallet.balance());
    wallet -= 10;
    ASSERT_EQ(0,wallet.balance());
}
