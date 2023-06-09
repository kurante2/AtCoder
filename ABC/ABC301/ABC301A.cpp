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
    int n;
    string s;
    cin >> n >> s;
    int win = (n+1)/2;
    int cnt_t,cnt_a =0;
    for(auto x : s){
        if(x == 'T') cnt_t++;
        else cnt_a++;
        if(cnt_a >= win){
            cout << 'A' << endl;
            break;
        }
        if(cnt_t >= win) {
            cout << 'T' << endl;
            break;        
        }
    }
}