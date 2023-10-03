#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using db = long double;
using str = string;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t=1;
  //cin >> t;
  while (t--) {
    ll n, R, r;
    cin >> n >> R >> r;

    if ((n == 1 && R >= r) 
      || (n == 2 && 2*R >= 2*r*n)
      || (n >= 3 && R > r && (r + 1e-7 < (R-r)*sin(numbers::pi / n)))
      ) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
