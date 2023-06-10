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

char P, Q;
int S[10];

int main() {
    cin >> P >> Q;

    // 累積和計算
    S[0] = 0;
    S[1] = S[0] + 0;
    S[2] = S[1] + 3;
    S[3] = S[2] + 1;
    S[4] = S[3] + 4;
    S[5] = S[4] + 1;
    S[6] = S[5] + 5;
    S[7] = S[6] + 9;

    int p, q;

    if(P == 'A') p = 1;
    if(P == 'B') p = 2;
    if(P == 'C') p = 3;
    if(P == 'D') p = 4;
    if(P == 'E') p = 5;
    if(P == 'F') p = 6;
    if(P == 'G') p = 7;

    if(Q == 'A') q = 1;
    if(Q == 'B') q = 2;
    if(Q == 'C') q = 3;
    if(Q == 'D') q = 4;
    if(Q == 'E') q = 5;
    if(Q == 'F') q = 6;
    if(Q == 'G') q = 7;

    cout << abs(S[p] - S[q]) << endl;

}