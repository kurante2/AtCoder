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

string N;
int K;

long long base8_to_long(string N) {
    long long res = 0;
    for(int i = 0; i < N.size(); i++) {
        res = res * 8 + int(N[i] - '0');
    }
    return res;
}

string long_to_base9(long long N) {
    if (N == 0) {
        return "0";
    }
    string res;
    while(N>0) {
        res = char(N % 9 + '0') + res;
        N /= 9;
    }
    return res;
}

int main() {
    // 入力
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        N = long_to_base9(base8_to_long(N));
        for (int j = 0; j < N.size(); j++) {
            if(N[j] == '8') {
                N[j] = '5';
            }
        }
    }

    cout << N << endl;
    return 0;
}