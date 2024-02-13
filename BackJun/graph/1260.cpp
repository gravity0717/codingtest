#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void dfs(int start, vector<vector<int>>& graph, bool* visited);
void bfs(int start, vector<vector<int>>& graph, bool* visited, int N);

int main(){
    int N, M, V;
    freopen("input.txt", "r", stdin); // 필요한 경우 주석 해제
    
    cin >> N >> M >> V;
    
    vector<vector<int>> graph(N + 1, vector<int>(N + 1, 0));

    for(int i = 0; i < M; i++){
        int x, y;
        cin >> x >> y;
        graph[x][y] = 1;
        graph[y][x] = 1;
    }

    bool visited[N + 1];
    fill(visited, visited + N + 1, false);

    dfs(V, graph, visited);
    cout << endl;

    fill(visited, visited + N + 1, false); // BFS 전에 visited 초기화
    bfs(V, graph, visited, N);
    cout << endl;
}

void dfs(int start, vector<vector<int>>& graph, bool* visited){
    visited[start] = true;
    cout << start << " ";

    for(int i = 1; i < graph[start].size(); i++){
        if(graph[start][i] && !visited[i]){
            dfs(i, graph, visited);
        }
    }
}

void bfs(int start, vector<vector<int>>& graph, bool* visited, int N){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    cout << start << " ";

    while(!q.empty()){
        int currentNode = q.front();
        q.pop();

        for(int i = 1; i <= N; i++){
            if(graph[currentNode][i] && !visited[i]){
                visited[i] = true;
                q.push(i);
                cout << i << " ";
            }
        }
    }
}
