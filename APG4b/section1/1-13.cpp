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
    vector<int> vec = { 1, 2, 3 };

    vec.push_back(10); // 末尾に10を追加
    vec.push_back(23);

    // vecの全要素を出力
    for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
    }

    vec.pop_back();//末尾の要素を削除

    // vecの全要素を出力
    for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
    }
}