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

bool chcek(string s){
    int left = 0, right = s.size() - 1;
    while(left < right) {
        if(s[left] != s[right]) return false;
        left += 1;
        right -= 1;
    }
    return true;
}

int main() {
    int N;
    string S[59];
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> S[i];

    for(int i = 1; i <= N - 1; i++) {
        for(int j = i + 1; j <= N; j++) {
            string str = S[i] + S[j];
            if(chcek(str)) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}