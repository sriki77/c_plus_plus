#include <gtest/gtest.h>
#include "Data.hh"
#include <algorithm>
using namespace std;

template<typename T>
void printer(T t) {
  cout << t << " ";
}

template<typename T>
T twice(T t) { return 2 * t; }

TEST(Algorithm, Sort) {
  sort(Data::integers.begin(), Data::integers.end());
  for_each(Data::integers.begin(), Data::integers.end(), printer<int>);
  cout << endl;
  transform(Data::integers.begin(), Data::integers.end(), Data::integers.begin(), twice<int>);
  for_each(Data::integers.begin(), Data::integers.end(), printer<int>);
  cout << endl;
  ASSERT_EQ(100, Data::integers.size());
}
