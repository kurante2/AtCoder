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
  //int a;
  //cin >> a;
  //vector<int> data(5);
  /*
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
  int answer = 0; 
  
  範囲for文:配列すべての要素に何かしらの処理を施す場合に便利
  for (int i : data) {
    if(i == a) answer++;
  }
  cout << answer << endl;
  */
 string str = "hello";
 for(char c : str) {
    if(c == 'l') {
        c = 'L';
    }
    cout << c;
 }
 cout << endl;
}