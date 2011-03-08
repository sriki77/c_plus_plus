#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "GTest.hh"
#include "Publisher.hh"
#include "Subscriber.hh"

using namespace StubMock;
using testing::StrictMock;

#define TEST_CASE PubSubTest


class StubSubscriber: public Subscriber{

    public:
        void receive(string msg);
        string msgReceived;

};

void StubSubscriber::receive(string msg){
    msgReceived=msg;
}


class MockSubscriber:public Subscriber{
    public:
    MOCK_METHOD1(receive,void(string));

};

GTEST(subShouldReceiveMsgUsingStub) {
    StubSubscriber* sub=new StubSubscriber;
    Publisher pub;
    pub.add(sub);
    const char *msg = "Hello World!!";
    pub.publish(msg);
    EXPECT_EQ(msg,sub->msgReceived);
    delete sub;
}

GTEST(subShouldReceiveMsgUsingMock) {
    const char *msg = "Hello World!!";
    StrictMock<MockSubscriber> subMock;
    EXPECT_CALL(subMock,receive(msg)).Times(1);
    Publisher pub;
    pub.add(&subMock);
    pub.publish(msg);
}

