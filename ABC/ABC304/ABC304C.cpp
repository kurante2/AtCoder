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
#include <cmath>
#include <limits>
using namespace std;

int N, D;
vector<pair<int,int>> XY(2009);

double calc_dist(int x1, int y1, int x2, int y2) {
    double dist =  sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return dist;
}

int main(){
    cin >> N >> D;
    for(int i = 0; i < N; i++) cin >> XY.at(i).first >> XY.at(i).second;

    vector<bool> Answer(N, false);
    Answer.at(0) = true;

    double dist;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i == j) continue;
            dist = calc_dist(XY.at(i).first, XY.at(i).second, XY.at(j).first, XY.at(j).second);
            cout << i << " " << j << ": " << dist << " " << (dist <= D) << endl;
            if(dist <= D) {
                if(Answer.at(i) || Answer.at(j)) {
                    Answer.at(j) = true;
                    Answer.at(i) = true;
                }
            }
        }
    }

    for(int i = 0; i < N; i++) {
        if(Answer.at(i) == true) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}