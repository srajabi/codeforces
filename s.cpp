#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ul = unsigned long long;
using db = long double;
using str = string;


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t;
  cin >> t;

  while (t--) {
    ll y, x;
    cin >> y >> x;
    
    ll b = max(y, x);
    ll ma = b*b;
    ll mi = (b-1)*(b-1);
    ll mid = ma - (b-1);

    if (b%2) {
      if (y>x) {
        cout << mi + x << endl;
      }
      else {
        cout << mid + (b - y) << endl; 
      }
    }
    else {
      if (x>y) {
        cout << mi + y << endl;
      }
      else {
        cout << mid + (b - x) << endl;
      }
    }
  }

  return 0;
}
