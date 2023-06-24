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
    int N;
    long long A[79];
    cin >> N;
    for(int i = 1; i <= 7 * N; i++) cin >> A[i];

    long long B = 0;
    for(int i = 1; i <= 7*N; i++) {
        B += A[i];
        if(i % 7 == 0) {
            cout << B << " ";
            B = 0;
        }
    } 
    cout << endl;
}