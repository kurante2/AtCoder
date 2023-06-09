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
    2次元配列は
    vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値))
    で宣言できる。
    初期値は省略可能。省略した場合は「要素の型」に対応するゼロ値で初期化される
    例えば要素の型がintなら、初期値は0で、stringなら空文字列("")
    変数名.size()で縦の、変数名.at(0).size()で横の大きさを取得できる
    */
    
    /*
    後から配列に要素を追加して使う場合などに、N*0の配列を宣言することがある
    以下のように書くと、N*0の二次元配列になる。
    vector<vector<型>> 変数名(N);
    外側のvectorの初期値を省略することで、N個の配列の要素数は
    それぞれ0になる
    N×0の二次元配列に後から要素を追加していく場合などに
    「行毎に要素数の違う二次元配列」ができることがあります。
    このような配列はジャグ配列と呼ばれることがあります。

    以下のdataはジャグ配列の例
    vector<vector<int>> data(3);  // 3×0の配列

    data.at(0).push_back(1);
    data.at(0).push_back(2);
    data.at(0).push_back(3);
    // data.at(0)は3要素の配列

    data.at(1).push_back(4);
    data.at(1).push_back(5);
    data.at(1).push_back(6);
    data.at(1).push_back(7);
    // data.at(1)は4要素の配列

    data.at(2).push_back(8);
    data.at(2).push_back(9);
    // data.at(2)は2要素の配列
 
    */
    
}