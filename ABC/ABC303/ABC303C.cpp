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

int N, M, H, K;
string S;


int main(){
    cin >> N >> M >> H >> K >> S;
    vector<pair<int,int>> XY(M);
    for(int i = 0; i < M; i++) cin >> XY.at(i).first >> XY.at(i).second;

    // XYを昇順にソート
    sort(XY.begin(), XY.end());

    // 現在の座標
    int x = 0, y = 0;
    // 移動ができるかどうか
    bool Answer = true;
    for(int i = 0; i < N; i++) {
        if(S.at(i) == 'R') {
            x += 1;
            H -= 1;
            if(H < 0){
                Answer = false;
                break;
            }
            if(H < K){
                if(binary_search(XY.begin(), XY.end(), make_pair(x, y))) H = K;
            }
        }
        if(S.at(i) == 'L') {
            x -= 1;
            H -= 1;
            if(H < 0){
                Answer = false;
                break;
            }
            if(H < K){
                if(binary_search(XY.begin(), XY.end(), make_pair(x, y))) H = K;
            }
        }
        if(S.at(i) == 'U'){
            y += 1;
            H -= 1;
            if(H < 0){
                Answer = false;
                break;
            }
            if(H < K){
                if(binary_search(XY.begin(), XY.end(), make_pair(x, y))) H = K;
            }
        }
        if(S.at(i) == 'D') {
            y -= 1;
            H -= 1;
            if(H < 0){
                Answer = false;
                break;
            }
            if(H < K){
                if(binary_search(XY.begin(), XY.end(), make_pair(x, y))) H = K;
            }
        }
    }

    cout << (Answer ? "Yes" : "No") << endl;
}