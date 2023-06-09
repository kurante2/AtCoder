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
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
    }

    // ここにプログラムを追記
    // (ここで"試合結果の表"の2次元配列を宣言)
    vector<vector<char>> R(N, vector<char>(N,'-'));
    for(int i = 0; i < M; i++){
        R.at(A.at(i)-1).at(B.at(i)-1) = 'o';
        R.at(B.at(i)-1).at(A.at(i)-1) = 'x';
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << R.at(i).at(j);
            if(j == N-1) cout << endl;
            else cout << " ";
        }
    }
}