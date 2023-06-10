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
char S[509][509];

bool check_snuke(int, int);

int main() {
    // 入力
    cin >> H >> W;
    for(int i = 1; i <= H; i++) {
        for(int j = 1; j <= W; j++) {
            cin >> S[i][j];
        }
    }

    bool frag = false;
    pair<int, int> Answer;
    for(int x = 1; x <= H; x++) {
        for(int y = 1; y <= W; y++) {
            if(S[x][y] == '.') {
                bool ans = check_snuke(x, y);
                if(ans) {
                    frag = true;
                    Answer = make_pair(x,y);
                    break;
                }
            }
        }
        if(frag) break;
    }

    cout << Answer.first << " " << Answer.second << endl; 
}

bool check_snuke(int x, int y) {
        int count = 0;
        if(x > 1 && S[x-1][y] == '#') count++;
        if(y < W && S[x][y+1] == '#') count++;
        if(x < H && S[x+1][y] == '#') count++;
        if(y > 1 && S[x][y-1] == '#') count++;
        
        if(count >= 2) return true;
        else return false;
}