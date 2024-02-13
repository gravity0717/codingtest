// https://www.acmicpc.net/problem/15486
// Solve: DP 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

int main(){
    freopen("input.txt", "r", stdin);
    int N;
    cin >> N;
    vector<int> dp(N+1, 0); // dp[i] = i일까지의 최대 수익
    vector<pair<int, int>> table(N);
    for(int i = 0; i < N; i++){
        int T, P;
        cin >> T >> P;
        table[i] = make_pair(T, P);
    }

    int cur_max = 0;
    for(int i = 0; i < N; i++){

        cur_max = max(cur_max, dp[i]);
        if (i + table[i].first <= N)
            dp[i+table[i].first] = max(max(dp[i+table[i].first], dp[i] + ));

    }
    
    for(auto i : dp)
        cout << i << " ";

    auto result = max_element(dp.begin(), dp.end());
    cout << *result << endl;
}
