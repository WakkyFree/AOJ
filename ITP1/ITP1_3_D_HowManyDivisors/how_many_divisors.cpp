#include <iostream>
using namespace std;

int main () {
  
  int a,b,c;
  int divisor_num = 0;

  cin >> a >> b >> c;

  for (int n = a; n <= b; n++) {
    if (c % n == 0)
      divisor_num += 1;
  }

  cout << divisor_num << endl;

  return 0;
}
