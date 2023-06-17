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

int Q, t[200009], x[200009];

int main() {
    // 入力
    cin >> Q;
    for(int i = 0; i < Q; i++) cin >> t[i] >> x[i];

    vector<int> vec;
    for(int i = 0; i < Q; i++) {
        if(t[i] == 1) {
            vec.insert(vec.begin(), x[i]);
        }
        if(t[i] == 2) vec.push_back(x[i]);
        if(t[i] == 3) cout << vec.at(x[i] - 1) << endl;
    }

    return 0;
}