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
    int a,b=-1;
    bool ans = false;
    for(int i=0;i<n;i++){
        if(a == -1){
            if(s.at(i) == '|'){
            a = i;
            }
        }
        else if(s.at(i) == '*'){
            b=i;
        }
        if(s.at(i) == '|' && a<b){
            ans = true;
            break;
        }
    }
    cout << (ans ? "in" : "out") << endl;
}