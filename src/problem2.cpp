#include <iostream>

using namespace std;

int main() {
    long sum = 0;
    int x1 = 1;
    int x2 = 2;
    while (x2 < 4000000) {
      if (x2 % 2 == 0) {
        sum += x2;
      }
      x2 += x1;
      x1 = x2;
      x2 += x1;
      x1 = x2;
    }
    cout << sum;
    return 0;
}