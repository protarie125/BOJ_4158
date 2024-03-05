#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll n, m;

vl p1;
ll ans;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  while (true) {
    ans = 0;

    cin >> n >> m;
    if (0 == n && 0 == m) {
      break;
    }

    p1 = vl(n);
    for (auto&& x : p1) {
      cin >> x;
    }

    for (auto i = 0; i < m; ++i) {
      ll x;
      cin >> x;

      if (binary_search(p1.begin(), p1.end(), x)) {
        ++ans;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}