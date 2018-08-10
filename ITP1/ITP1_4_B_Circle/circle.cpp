#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {

  double r;
  
  cin >> r;
  cout << fixed << setprecision(6) << pow(r,2.0) * M_PI << " " << 2 * M_PI * r; 

  return 0;
}
