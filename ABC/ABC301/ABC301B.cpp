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

int check(vector<int> a){
    for(int i = 0; i < a.size()-1; i++){
        if(a.at(i) - a.at(i+1) <= -2){
            return -2, i;
        }
        else if(a.at(i) - a.at(i+1) >= 2){
            return 2, i;
        }
    }
    return -1,0;
}

void repair(vector<int> &A, vector<int> &ans){
    int ch,tmp_i = check(A);
    int a_dif = abs(A.at(tmp_i) - A.at(tmp_i + 1));
    vector<int> ans1(tmp_i+1);
    for(int i = 0; i < tmp_i + 1; i++){
        ans1.at(i) = A.at(i);
    }
    while(ch != -1){
        if(ch == -2){
            while(a_dif>1){
                int i = 1;
                ans1.push_back(A.at(tmp_i) + i);
                a_dif = abs(ans1.at(tmp_i + i - 1) - A.at(tmp_i + 1));
                i++;
            }
        }
        if(ch == 2){
            while(a_dif>1){
                int i = 1;
                ans1.push_back(A.at(tmp_i) - i);
                a_dif = abs(ans1.at(tmp_i + i - 1) - A.at(tmp_i + 1));
                i++;
            }
        }
        for(int i = tmp_i + 1; i < A.size(); i++){
            ans1.push_back(A.at(i));
        }
        ch, tmp_i = check(ans1);
        if(ch != -1){
            
        }
    }

}

int main() {
    int n;
    vector<int> A(n);
    for(auto &x : A){
        cin >> x;
    }
    int ch,tmp_i = check(A);
    int a_dif = abs(A.at(tmp_i) - A.at(tmp_i + 1));
    vector<int> ans1(tmp_i+1);
    for(int i = 0; i < tmp_i + 1; i++){
        ans1.at(i) = A.at(i);
    }
    while(ch != -1){
        if(ch == -2){
            while(a_dif>1){
                int i = 1;
                ans1.push_back(A.at(tmp_i) + i);
                a_dif = abs(ans1.at(tmp_i + i - 1) - A.at(tmp_i + 1));
                i++;
            }
        }
        if(ch == 2){
            while(a_dif>1){
                int i = 1;
                ans1.push_back(A.at(tmp_i) - i);
                a_dif = abs(ans1.at(tmp_i + i - 1) - A.at(tmp_i + 1));
                i++;
            }
        }
        for(int i = tmp_i + 1; i < n; i++){
            ans1.push_back(A.at(i));
        }
        ch, tmp_i = check(ans1);

    }

    for(int i = 0; i < ans1.size(); i++){
        cout << ans1.at(i) << " \n"[i == ans1.size() - 1];
    }
}