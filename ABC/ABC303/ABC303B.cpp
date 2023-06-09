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

int N ,M;
int A[59][59];

int main(){
    cin >> N >> M;
    for(int i = 1; i <= M; i++) {
        for(int j = 1; j <= N; j++) cin >> A[i][j];
    }

    int R[N + 1][N + 1];
    for(int i = 1; i <= N ; i++){
        for(int j = 1; j <= N; j++) {
            R[i][j] = 0;
        }
    }

    for(int i = 1; i <= M; i++) {
        for(int j = 2; j <= N - 1; j++) {
            R[min(A[i][j-1],A[i][j])][max(A[i][j-1],A[i][j])] = 1;
            R[min(A[i][j+1],A[i][j])][max(A[i][j+1],A[i][j])] = 1;
        }
    }

    int Answer = 0;
    for(int i = 1; i <= N - 1; i++){
        for(int j = i + 1; j <= N; j++) {
            if(R[i][j] == 0) Answer += 1;
        }
    }    

    cout << Answer << endl;
}