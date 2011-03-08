#include "Data.hh"
#include <iostream>

using namespace std;

vector<int> Data::integers;

void resetIntegers() {
  Data::integers.clear();
  for (int i = 100; i > 0; i--) {
    Data::integers.push_back(i);
  }
}

int Data::initData() {
  cerr << "Initializing data..." << endl;
  resetIntegers();
  return 0;
}

int dummy = Data::initData();
