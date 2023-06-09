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

int N;
vector<pair<string,int>> SA(109);

int main(){
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> SA.at(i).first >> SA.at(i).second;
    }

    long long min = 1'000'000'000'000LL;
    int Place = -1;
    for(int i = 0; i < N; i++) {
        if(SA.at(i).second <= min) {
            Place = i;
            min = SA.at(i).second;
        }
    }

    if(Place == 0) {
        for(int i = 0; i < N; i++) cout << SA.at(i).first << endl;
    }
    else {
        for(int i = Place; i < N; i++) cout << SA.at(i).first << endl;
        for(int i = 0; i < Place; i++) cout << SA.at(i).first << endl;
    }
}