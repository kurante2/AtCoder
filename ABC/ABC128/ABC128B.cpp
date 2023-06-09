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

int main(){
    int N;
    cin >> N;
    vector<tuple<string, int, int>> SP(N);

    for(int i = 0; i < N; i++) {
        string s;
        int a, b;
        cin >> s >> a;
        b = i + 1;
        SP.at(i) = make_tuple(s,-a,b);
    }

    sort(SP.begin(), SP.end());

    for(int i = 0; i < N; i++) {
        cout << get<2>(SP.at(i)) << endl;
    }
}