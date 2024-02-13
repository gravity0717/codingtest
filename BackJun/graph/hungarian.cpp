#include <vector>
#include <algorithm>

using namespace std;

// 헝가리안 알고리즘
vector<int> hungarian(vector<vector<int>> costMat) {
    int n = costMat.size();
    vector<int> u(n+1), v(n+1), p(n+1), way(n+1);

    for (int i=1; i<=n; i++) {
        p[0] = i;
        int j0 = 0;
        vector<int> minv(n+1, INT_MAX);
        vector<char> used(n+1, false);
        do {
            used[j0] = true;
            int i0 = p[j0],  delta = INT_MAX,  j1;
            for (int j=1; j<=n; ++j)
                if (!used[j]) {
                    int cur = costMat[i0-1][j-1]-u[i0]-v[j];
                    if (cur < minv[j])
                        minv[j] = cur,  way[j] = j0;
                    if (minv[j] < delta)
                        delta = minv[j],  j1 = j;
                }
            for (int j=0; j<=n; ++j)
                if (used[j])
                    u[p[j]] += delta,  v[j] -= delta;
                else
                    minv[j] -= delta;
            j0 = j1;
        } while (p[j0] != 0);
        do {
            int j1 = way[j0];
            p[j0] = p[j1];
            j0 = j1;
        } while (j0);
    }

    // 결과 반환
    vector<int> result(n);
    for (int j=1; j<=n; ++j)
        result[p[j]-1] = j-1;
    return result;
}