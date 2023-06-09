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
    int p;
    cin >> p;
    string text;
    int price;

    // パターン1
    if (p == 1) {
    cin >> price;
    }

    // パターン2
    if (p == 2) {
    cin >> text >> price;
    cout << text << "!" << endl;
    }

    int N;
    cin >> N;


    cout << price * N << endl;
}