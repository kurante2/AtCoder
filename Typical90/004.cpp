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

int H, W;

int main() {
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cin >> A.at(i).at(j);
        }
    }

    vector<int> yoko(H, 0);
    vector<int> tate(W, 0);

    // 行、列ごとの累積和
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            yoko.at(i) += A.at(i).at(j);
            tate.at(j) += A.at(i).at(j); 
        }
    }

    // 出力
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cout << yoko.at(i) + tate.at(j) - A.at(i).at(j) << " \n"[j==W-1];
        }
    }
}