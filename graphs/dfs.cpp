#include <iostream>
using namespace std;
#include <bits/stdc++.h>



// In dfs we go depth first , and then we see if there are no nodes we return
// Its just like recursion

vector<int> dfsOfGraph(int node , int vis[] , vector<int>adj[] , vector<int> &dfs){
    vis[node]=1;
    dfs.push_back(node);
    for(auto it : adj[node]){
        if(!vis[it]){
            vis[it]=0;
            dfsOfGraph(it , vis , adj , dfs);
        }
    }
    return dfs;
}