// Compile: g++ -o 12865 12865.cpp -std=c++11 && ./12865"""
//https://www.acmicpc.net/problem/12865


#include<iostream>
#include<map>
#include<utility>//pair
#include<vector>

using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    int N, K;
    cin >> N >> K;
    
    vector<int> values;
    vector<int> weights;
    for (int i = 0; i<N; i++){
        int W, V;
        cin >> W >> V;
        weights.push_back(W);
        values.push_back(V);
    }
    
    vector<int> dp(K + 1, 0);
    
    for (int i = 0; i < N; i++) {
        for (int j = K; j >= weights[i]; j--) {
            dp[j] = max(dp[j], dp[j - weights[i]] + values[i]);
        }
    }
    
    cout << dp[K];
    
}