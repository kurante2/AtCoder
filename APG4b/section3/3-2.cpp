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

// tuple<int, int, int> t = (1, 2, 3);
// int a, b, c;
// tie(a, b, c) = t
// こうすることでtのそれぞれの要素を各変数に分解できる
// tie(a, b, ignore) = t; のようにignoreを使うとその要素を捨てることができる
// この場合3が捨てられる

int main(){
    tuple<int, int, int> data(1, 2, 3);
    auto a = get<2>(data);

    cout << a << endl;

    return 0;
}