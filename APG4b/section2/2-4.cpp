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
    /*
    参照は次のように宣言する。
    参照先の型 &参照の名前 = 参照先;
    あとから参照先を変更することはできない
    */
    int a = 3;
    int &b = a;  // bは変数aの参照

    cout << "a: " << a << endl;  // aの値を出力
    cout << "b: " << b << endl;  // bの参照先の値を出力(aの値である3が出力される)

    b = 4;  // 参照先の値を変更(aが4になる)

    cout << "a: " << a << endl;  // aの値を出力
    cout << "b: " << b << endl;  // bの参照先の値を出力(aの値である4が出力される)

    //参照渡しが便利な例
    //関数の結果を複数返したい場合
    // a,b,cの最大値、最小値をそれぞれminimumの参照先、maximumの参照先に代入する
    /*
    void min_and_max(int a, int b, int c, int &minimum, int &maximum) {
    minimum = min(a, min(b, c));  // 最小値をminimumの参照先に代入
    maximum = max(a, max(b, c));  // 最大値をmaximumの参照先に代入
    }
    
    int main() {
    int minimum, maximum;
    min_and_max(3, 1, 5, minimum, maximum);  // minimum, maximumを参照渡し
    cout << "minimum: " <<  minimum << endl;  // 最小値
    cout << "maximum: " <<  maximum << endl;  // 最大値
    }
    実行結果
    minimum: 1
    maximum: 5
    */
    
    //他にも無駄なコピーを減らす場合にも参照渡しは有効

    //参照は範囲for文でも用いることができ、
    //これによって配列の要素を書き換える処理を簡潔に書くことができる
    /*
    例
    vector<int> a = {1, 3, 2, 5};
    for (int &x : a) {
    x = x * 2;
    }
    // aは{2, 6, 4, 10}となる
    */
}