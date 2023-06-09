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
    int x;
    cin >> x;

    if (x < 10) {
    cout << "xは10より小さい" << endl;
    }
    else if (x > 20) {
    cout << "xは10より小さくなくて、20より大きい" << endl;
    }
    else if (x == 15) {
    cout << "xは10より小さくなくて、20より大きくなくて、15である" << endl;
    }
    else {
    cout << "xは10より小さくなくて、20より大きくもなくて、15でもない" << endl;
    }
}