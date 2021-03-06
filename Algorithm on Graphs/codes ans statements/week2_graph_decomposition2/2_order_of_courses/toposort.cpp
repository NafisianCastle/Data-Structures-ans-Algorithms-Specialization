<<<<<<< HEAD
#include <iostream>
#include <algorithm>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int> > &adj, vector<int> &used, vector<int> &order, int x) {
    used[x] = 1;
    for(int i = 0; i < adj[x].size(); i++) {
        if(!used[adj[x][i]]) dfs(adj, used, order, adj[x][i]);
    }
    order.push_back(x);
}

vector<int> toposort(vector<vector<int> > adj) {
    vector<int> used(adj.size(), 0);
    vector<int> order;
    for(int i = 0; i < adj.size(); i++) {
        if(!used[i]) dfs(adj, used, order, i);
    }
    reverse(order.begin(), order.end());
    return order;
}

int main() {
    size_t n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n, vector<int>());
    for(size_t i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
    }
    vector<int> order = toposort(adj);
    for(size_t i = 0; i < order.size(); i++)
        cout << order[i] + 1 << " ";
}
=======
#include <iostream>
#include <algorithm>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int> > &adj, vector<int> &used, vector<int> &order, int x) {
    used[x] = 1;
    for(int i = 0; i < adj[x].size(); i++) {
        if(!used[adj[x][i]]) dfs(adj, used, order, adj[x][i]);
    }
    order.push_back(x);
}

vector<int> toposort(vector<vector<int> > adj) {
    vector<int> used(adj.size(), 0);
    vector<int> order;
    for(int i = 0; i < adj.size(); i++) {
        if(!used[i]) dfs(adj, used, order, i);
    }
    reverse(order.begin(), order.end());
    return order;
}

int main() {
    size_t n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n, vector<int>());
    for(size_t i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
    }
    vector<int> order = toposort(adj);
    for(size_t i = 0; i < order.size(); i++)
        cout << order[i] + 1 << " ";
}
>>>>>>> 41b8f92f3a46828fb0f1a61a96c2446049322ce7
