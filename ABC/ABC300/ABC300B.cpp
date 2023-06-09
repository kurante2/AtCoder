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
    int h, w;
    cin >> h >> w;
    vector<vector<char>> a(h,vector<char>(w));
    vector<vector<char>> b(h,vector<char>(w));
    int big = max(h,w);
    vector<int>count(big+1,0); //この配列の要素がすべて偶数になればよい
    int tmpcnt_x = 0;
    int tmpcnt_y = 0;
    for(int i=0;i<h;i++){
        for(int j=0; j<w;j++){
            cin >> a.at(i).at(j);
            if(a.at(i).at(j) == '#') tmpcnt_x++;
            if(j == w-1) {
                count.at(tmpcnt_x)++;
                tmpcnt_x=0;
            }
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0; j<w;j++){
            cin >> b.at(i).at(j);
            if(b.at(i).at(j) == '#') tmpcnt_x++;
            if(j == w-1) {
                count.at(tmpcnt_x)++;
                tmpcnt_x=0;
            }
        }
    }
    for(int i=0;i<w;i++){
        for(int j=0; j<h;j++){
            if(a.at(j).at(i) == '#') tmpcnt_y++;
            if(j == w-1) {
                count.at(tmpcnt_y)++;
                tmpcnt_y=0;
            }
        }
    }
    for(int i=0;i<w;i++){
        for(int j=0; j<h;j++){
            if(b.at(j).at(i) == '#') tmpcnt_y++;
            if(j == w-1) {
                count.at(tmpcnt_y)++;
                tmpcnt_y=0;
            }
        }
    }
    for(int i=0;i<big+1;i++){
        if(count.at(i) % 2 != 0){
            cout << "No" << endl;
            break;
        }
        if(i == big) cout << "Yes" << endl;
    }
}            