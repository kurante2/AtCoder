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
    int n, t;
    cin >> n >> t;
    vector<int> c(n);
    vector<int> r(n);
    for(int i=0;i<n;i++){
        cin >> c.at(i);
    }
    for(int i=0;i<n;i++){
        cin >> r.at(i);
    }
    bool tap = false;
    int max_t = -1;
    int ans_t = -1;
    int max_nt = r.at(0);
    int ans_nt = 1;
    for(int i=0; i <n; i++){
        if(c.at(i) == t){
            tap = true;
            if(r.at(i) > max_t){
                max_t = r.at(i);
                ans_t = i+1;
            }
        }
        else if(r.at(i) > max_nt){
            max_nt = r.at(i);
            ans_nt = i+1;
        }
    } 
    cout<< (tap?ans_t:ans_nt)<<endl;
}