#include <iostream>
using namespace std;

class total {
private:
  int ca, acn, oop;
  int Total;

public:
  void setData(int a, int b, int c) {
    ca = a;
    acn = b;
    oop = c;
  }

  int getCA() {
    return ca;
  }

  int getACN() {
    return acn;
  }

  int getOOP() {
    return oop;
  }

  int getTotal() {
    Total = ca + acn + oop;
    return Total;
  }
};

int getPercent(total &t) {
  return t.getTotal() / 3;
}

int main() {
  total t;
  t.setData(45, 46, 47);
  cout << "CA:" << t.getCA() << endl;
  cout << "ACN:" << t.getACN() << endl;
  cout << "OOP:" << t.getOOP() << endl;
  cout << "Total:" << t.getTotal() << endl;
  cout << "Percent:" << getPercent(t) << endl;
}
