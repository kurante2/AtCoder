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
    vector<int> data(5);
    for(int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }

    bool answer = false;

    //ループを使わないで解くと
    /*
    if(data.at(0) == data.at(1)) answer = true;
    if(data.at(1) == data.at(2)) answer = true;
    if(data.at(2) == data.at(3)) answer = true;
    if(data.at(3) == data.at(4)) answer = true;
    if(answer) cout << "YES" << endl;
    else cout << "NO" << endl;
    */

    //パターンはif(data.at(n) == data.at(n+1)) answer = true;

    //ループで書き直す
    for(int i = 0; i < data.size() - 1; i++) {
        if(data.at(i) == data.at(i+1)) answer = true;
    }
    if(answer) cout << "YES" << endl;
    else cout << "NO" << endl;
}
