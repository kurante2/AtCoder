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

int main() {
    int N, K;
    int A[1009], B[1009];
    cin >> N >> K;
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int j = 0; j < N; j++) cin >> B[j];

    long long diff = 0;
    for(int i = 0; i < N; i++) {
        diff += abs(A[i] - B[i]);
    }

    if(K < diff) cout << "No" << endl;
    else if((K-diff)%2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}