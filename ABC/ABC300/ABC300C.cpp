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
    int h, w;
    cin >> h >> w;
    vector<string> c(h);
    for(auto &x : c) cin >> x;

    auto ok = [&](int i, int j){
        return 0 <= i and i < h and 0 <= j and j < w;
    };
    auto test = [&](int i, int j, int d){
        for(auto x : vector{+d, -d}){
            for(auto y : vector{+d, -d}){
                int s = i + x, t = j + y;
                if(!ok(s,t) || c.at(s).at(t) !='#') return false;
            }
        }
        return true;
    };

    int n = min(h,w);
    vector<int> ans(n+1);
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(c.at(i).at(j) != '#') continue;
            if(test(i,j,1)) {
                int d = 1;
                while(test(i,j,d+1))d++;
                ans.at(d)++;
            }
        }
    }
    for(int i = 1; i < n+1; i++){
        cout << ans.at(i) << " \n" [i == n];
    }
}