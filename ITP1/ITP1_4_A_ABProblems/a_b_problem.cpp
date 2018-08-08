#include <iostream>
#include <iomanip>
using namespace std;

int main () {

  int a,b;
  int d,r;
  float f;

  cin >> a >> b;
  cout << a/b << " " << a%b << " " << fixed << setprecision(5) << (1.0 * a)/ static_cast<float>(b) << endl;

  return 0;
}
