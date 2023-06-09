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
    string s;
    cin >> s;
    if(s[0]==s[1]){
        if(s[1] == s[2]) {
            cout<< -1 << endl;
        }
        else cout << s[2] << endl;
    }
    else if(s[0] == s[2]){
        cout << s[1] << endl;
    }
    else cout << s[0] << endl;
}
