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

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> alpha(h);
    for(auto &x: alpha){
        cin >> x;
    }

    vector<pair<int, int>> ans(5);

    auto check = [&](int i , int j, int v, int d){
        ans.at(0).first = i + 1;
        ans.at(0).second = j + 1;
        i += v;
        j += d;
        if(alpha.at(i).at(j) == 'n') {
            ans.at(1).first = i + 1; 
            ans.at(1).second = j + 1;
            i += v;
            j += d;
            if(alpha.at(i).at(j) == 'u'){
                ans.at(2).first = i + 1; 
                ans.at(2).second = j + 1;
                i += v;
                j += d;
                if(alpha.at(i).at(j) == 'k'){
                    ans.at(3).first = i + 1; 
                    ans.at(3).second = j + 1;
                    i += v;
                    j += d;
                    if(alpha.at(i).at(j) == 'e'){
                        ans.at(4).first = i + 1; 
                        ans.at(4).second = j + 1;
                    }
                }
            }
        }
    };

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(alpha.at(i).at(j) != 's') continue;            
            if(alpha.at(i).at(j) == 's'){
                int ii = i;
                int jj = j;
                int v = -1;
                int d = 0;
                //真上への探索
                 if(i - 4 >= 0){
                    check(i, j, v, d);
                    //斜め右上
                    if(j + 4 <= w){
                        i = ii, j = jj;
                        v = -1, d = 1;
                        check(i, j, v, d);
                    }
                    //斜め左上
                    if(j - 4 >= 0){
                        i = ii, j = jj;
                        v = -1, d = -1;
                        check(i, j, v, d);
                    }
                }
                //下系への探索
                if(i + 4 <= h){
                    i = ii, j = jj;
                    v = 1, d = 0;
                    check(i, j , v, d);
                    //斜め右下
                    if(j + 4 <= w){
                        i = ii, j = jj;
                        v = 1, d = 1;
                        check(i, j, v, d);
                    }
                    //斜め左下
                    if(j - 4 >= 0){
                        i = ii, j = jj;
                        v = 1, d = -1;
                        check(i, j , v, d);
                    }
                }
                //右への探索
                if(j + 4 <= w){
                    i = ii, j = jj;
                    v = 0, d = 1;
                    check(i, j, v, d);
                }
                //左への探索
                if(j - 4 >= 0){
                    i = ii, j = jj;
                    v = 0, d = -1;
                    check(i, j, v, d);
                }
                i = ii, j = jj;
            }
            }
        }
    for(int i = 0; i < ans.size(); i++){
        cout << ans.at(i).first << ' ' << ans.at(i).second << endl;
    }
}