#include<vector> 
#include<iostream>
using namespace std;   

int main(){
    freopen("input.txt", "r", stdin);
    int N, M;
    cin >> N >> M; 
    vector<vector<char>> board(N, vector<char>(M, 0));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            char tmp;
            cin >> board[i][j];
        }
    }    

    
}