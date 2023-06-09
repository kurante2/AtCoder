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
    string s,t;
    cin >> s >> t;
    vector<int> cnt_s(27,0);
    vector<int> cnt_t(27,0);
    for(auto x : s){
        if(x != '@'){
            cnt_s.at(x-38)++;
        }
        else{
            cnt_s.at(x-'a')++;
        }
    }
    for(auto x : t){
        if(x != '@'){
            cnt_t.at(x-38)++;
        }
        else{
            cnt_t.at(x-'a')++;
        }
    }
    int dif_s, dif_t;
    for(int i = 0; cnt_s.size(); i++){
        
    }
}