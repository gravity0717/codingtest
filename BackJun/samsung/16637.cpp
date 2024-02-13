//https://www.acmicpc.net/problem/16637
// Date: 2021/07/11
// Ref: https://www.acmicpc.net/source/24798291
// 문제: 괄호 추가하기 

#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<utility>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> s; 
    cin >> s; 
    vector<int> num;
    vector<char> op;
    for(int i = 0; i < N; i++){
        if(i % 2 == 0){
            num.push_back(s[i] - '0');
        }else{
            op.push_back(s[i]);
        }
    }
    int ans = -2147483648;
    int len = op.size();
    
    a
}