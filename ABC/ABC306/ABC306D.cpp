#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <numeric> // gcd
#include <cmath>

using namespace std;

int N;
long long X[300009], Y[300009];

// dp
long long dp[2][300009];

int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> X[i] >> Y[i];

    // dp配列の初期化
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j <= N; j++) dp[i][j] = 0LL;
    }

    for(int i = 0; i <= N; i++) {
        if(X[i] == 0) {
            dp[0][i+1] = max({dp[0][i] + Y[i], dp[1][i] + Y[i], dp[0][i]});
            dp[1][i+1] = dp[1][i];
        }
        if(X[i] == 1) {
            dp[1][i+1] = max({dp[0][i] + Y[i], dp[1][i]});
            dp[0][i+1] = dp[0][i];
        }
    }

    cout << max(dp[0][N+1], dp[1][N+1]) << endl;

}