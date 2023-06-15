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

int main() {
    int N, Q;
    cin >> N;
    vector<int> C(N+1),P(N+1);
    for(int i = 1; i <= N; i++) cin >> C.at(i) >> P.at(i);
    cin >> Q;
    vector<int> L(Q), R(Q);
    for(int i = 0; i < Q; i++) cin >> L.at(i) >> R.at(i);

    // 各組ごとの学籍番号順の累積和をとる
    vector<int> S1(N+1, 0), S2(N+1, 0);
    if(C.at(1) == 1) S1.at(1) = P.at(1);
    else S2.at(1) = P.at(1);
    for(int i = 2; i <= N; i++) {
        S1.at(i) = S1.at(i - 1);
        S2.at(i) = S2.at(i - 1);
        if(C.at(i) == 1) S1.at(i) += P.at(i);
        else S2.at(i) += P.at(i);
    }

    // 出力
    for(int i = 0; i < Q; i++) {
        cout << S1.at(R.at(i)) - S1.at(L.at(i) - 1) << " ";
        cout << S2.at(R.at(i)) - S2.at(L.at(i) - 1) << endl;
    }
}