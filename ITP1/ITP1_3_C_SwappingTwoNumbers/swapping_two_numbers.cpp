#include <iostream>
#include <vector>
using namespace std;

int main () {
  int x,y;
  int n;
  vector<vector<int> > v;

  for(n = 0; n < 3000; n++){
    cin >> x >> y;

    if(x > y)
      v.push_back({y,x});
    else
      v.push_back({x,y});

    if((x||y) == 0)
      break;
  }

  for(int m = 0; m < n; m++){
    cout << v[m][0] << " " << v[m][1] << endl;
  }

  return 0;
}

