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

int N, P, Q;
long long A[109];

long long product(long long a, long long b, long long c, long long d, long long e) {
    long long pro = (a * b) % P;
    pro = (pro * c) % P;
    pro = (pro * d) % P;
    pro = (pro * e) % P;
    return pro;
}

int main() {
    // 入力
    cin >> N >> P >> Q;
    for(int i = 1; i <= N; i++) cin >> A[i];

    // A[i]をPで割ったあまりを求めておく
    for(int i = 1; i <= N; i++) A[i] = A[i] % P;

    int Answer = 0;
    long long tmp;
    for(int i = 1; i <= N - 4; i++) {
        for(int j = i + 1; j <= N - 3; j++) {
            for(int k = j + 1; k <= N - 2; k++) {
                for(int l = k + 1; l <= N - 1; l++) {
                    for(int m = l + 1; m <= N; m++) {
                        tmp = product(A[i], A[j], A[k], A[l], A[m]);
                        if(tmp == Q) Answer += 1;      
                    }
                }
            }
        }
    }

    cout << Answer << endl;
}