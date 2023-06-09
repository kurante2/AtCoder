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

int my_min (int x, int y) {
    if(x < y) {
        return x;
    }
    else {
        return y;
    }

}

void hello(string text) {
    cout << "Hello, " << text << endl;
    return;
}

int input() {
    int x;
    cin >> x;
    return x;
}

void hello2();

int main() {
    //int answer = my_min(10,5);
    //cout << answer << endl;
    //hello("Tom");
    //hello("C++");
    //int num = input();
    //cout << num + 5 << endl;
    hello2();
}

void hello2() {
    cout << "hello!" << endl;
    return;
}