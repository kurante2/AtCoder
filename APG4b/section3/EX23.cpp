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

int N, A[100009];

int main() {
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> A[i];


    map<int, int> cnt;
    for(int i = 1; i <= N; i++) {
        if(cnt.count(A[i])){
            cnt[A[i]] = cnt[A[i]] + 1;
        }
        else cnt[A[i]] = 1;
    }

    pair<int, int> Answer;
    int ans = 0;

    for(auto p : cnt) {
        auto key = p.first;
        auto value = p.second;
        if(ans <= value) {
            ans = value;
            Answer = make_pair(key, value);
        }
    }

    cout << Answer.first << " " << Answer.second << endl;

}

