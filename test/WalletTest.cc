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
    wallet.add(10) += 30;
    ASSERT_EQ(50.0, wallet.balance());
    wallet += 10;
    ASSERT_EQ(60.0,wallet.balance());
}

GTEST(shouldSupportRemAmt) {
    Wallet wallet(20);
    ASSERT_EQ(20, wallet.balance());
    wallet -= 10;
    ASSERT_EQ(10, wallet.balance());
    wallet.deduct(10);
	ASSERT_EQ(0.0,wallet.balance());
}

GTEST(shouldBeAbleToMergeAnotherWallet) {
	Wallet parentWallet(10);
	Wallet childWallet(5);

	ASSERT_EQ(10, parentWallet.balance());
	ASSERT_EQ(5, childWallet.balance());

	parentWallet += childWallet;

	ASSERT_EQ(15, parentWallet.balance());
	ASSERT_EQ(0, childWallet.balance());
}
