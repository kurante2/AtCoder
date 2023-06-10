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

int N, Q, A[200009], L, R;


int main() {
    // 入力
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    cin >> Q;
    
    // 累積和の計算
    long long S[(A[N] - A[1] + 9)];

    S[0] = 0;
    int t = 0;
    for(int i = 2; i <= N; i++) {
        if(i % 2 == 0) {
            while(t != A[i] - A[1]) {
                S[t + 1] = S[t];
                t++;
            }
        }
        else {
            while(t != A[i] - A[1]) {
                S[t + 1] = S[t] + 1;
                t++;
            }
        }
    }

    // 答えの計算と出力
    int L, R;
    for(int i = 0; i < Q; i++) {
        cin >> L >> R;
        cout << S[R] - S[L] << endl;
    }

    //cout << S[1800];
    return 0;
}

