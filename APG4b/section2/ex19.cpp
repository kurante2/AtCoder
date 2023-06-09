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

// 参照渡しを用いて、呼び出し側の変数の値を変更する
void saiten(vector<vector<int>> &vec, int &x, int &y) {
    // 呼び出し側のAの各マスを正しい値に修正する
    // Aのうち、正しい値の書かれたマスの個数を correct_count に入れる
    // Aのうち、誤った値の書かれたマスの個数を wrong_count に入れる

    // ここにプログラムを追記
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(vec.at(i).at(j) == (i+1)*(j+1)) {
                x++;
            }
            else {
                y++;
                vec.at(i).at(j) = (i+1)*(j+1);
            }
        }
    }
    return;
}

int main() {
    // A君の回答を受け取る
    vector<vector<int>> A(9, vector<int>(9));
    for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
        cin >> A.at(i).at(j);
    }
    }

    int correct_count = 0; // ここに正しい値のマスの個数を入れる
    int wrong_count = 0;   // ここに誤った値のマスの個数を入れる

    // A, correct_count, wrong_countを参照渡し
    saiten(A, correct_count, wrong_count);

    // 正しく修正した表を出力
    for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
        cout << A.at(i).at(j);
        if (j < 8) cout << " ";
        else cout << endl;
    }
    }
    // 正しいマスの個数を出力
    cout << correct_count << endl;
    // 誤っているマスの個数を出力
    cout << wrong_count << endl;
}