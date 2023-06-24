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

int N;
string S;

int main() {
    cin >> N;
    cin >> S;

    string ans = "";
    deque<char> deq;
    stack<char> tmp;
    bool frag = false;

    for(int i = 0; i < S.size(); i++) {
        if(S[i] != ')') deq.push_back(S[i]);
        else {
            if(deq.empty()) continue;
            else{
                while(!deq.empty()) {
                    if(deq.back() != '(') {
                        tmp.push(deq.back());
                        deq.pop_back();
                    }
                    else {
                        while(!tmp.empty()) {
                            tmp.pop();
                        }
                        deq.pop_back();
                        break;
                    }
                }
            }
        }
    }

    while(!deq.empty()) {
        cout << deq.front();
        deq.pop_front();
    }
    cout << endl;
    return 0;
}