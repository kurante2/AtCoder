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
    vector<int> A(3), B(3);
    for (int i = 0; i < 3; i++) {
    cin >> A.at(i);
    }
    for (int i = 0; i < 3; i++) {
    cin >> B.at(i);
    }

    // 答えを保持する変数
    bool answer = false;

    // ここにプログラムを追記
    for(int x : A){
        for(int y : B) {
            if(x == y) answer = true;
        }
    }

    if (answer) {
    cout << "YES" << endl;
    }
    else {
    cout << "NO" << endl;
    }

}