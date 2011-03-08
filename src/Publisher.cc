#include <iostream>
using namespace std;

#include "Publisher.hh"


namespace StubMock {

    void StubMock::Publisher::add(Subscriber* sub)
    {
        _sub=sub;
    }

    void Publisher::publish(string msg)
    {
        _sub->receive(msg);
    }

}
