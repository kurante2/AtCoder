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
using namespace std;

long long gcd(long long a, long long b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    long long A, B, C;
    cin >> A >> B >> C;
    long long r = gcd(A, gcd(B, C));

    cout << (A / r - 1LL) + (B / r - 1LL) + (C / r - 1LL) << endl;
}