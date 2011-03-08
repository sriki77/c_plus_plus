#ifndef _DATA_HH_
#define _DATA_HH_

#include <vector>

class Data {
  public:
    static int initData();

  public:
    static std::vector<int> integers;
    static std::vector<double> doubles;
};

#endif // _DATA_HH_
