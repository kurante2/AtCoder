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

int N, A[300009];
int X[100009] = {0};


int main() {
    cin >> N;
    for(int i = 1; i <= 3 * N; i++) {
        cin >> A[i];
    }

    vector<pair<int, int>> f_i;
    for(int i = 1; i <= 3 * N; i++) {
        X[A[i]] += 1;
        if(X[A[i]] == 2) {
            pair<int, int> tmp = make_pair(i, A[i]);
            f_i.push_back(tmp);
        }
    }

    sort(f_i.begin(), f_i.end());
    for(int i = 0; i < f_i.size(); i++) {
        cout << f_i.at(i).second << " ";
    }
    cout << endl;
    return 0;
}