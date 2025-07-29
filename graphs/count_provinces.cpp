#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// We wrote dfs ealier , so we use that
vector<int> dfsOfGraph(int node , int vis[] , vector<int>adj[] , vector<int> &dfs){
    vis[node]=1;
    dfs.push_back(node);
    for(auto it : adj[node]){
        if(vis[it]!=1){
            dfsOfGraph(it , vis , adj , dfs);
        }
    }
    return dfs;
}

int count_provinces(int count , int vis[] , int nodes, vector<int>adj[] ){
    for(int i = 0 ; i < nodes ; i++){
        if(vis[i]!=1){
            count++;
            dfsOfGraph(.......); // Call DFS 
        }


    }
    return count;

}