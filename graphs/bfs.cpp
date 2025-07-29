#include <iostream>
using namespace std;
#include <bits/stdc++.h>


// we will use queue to store the neigbours of that node which was just removed and we continue this until we dont empty the queue
// Also we wil use a visited array which tracks which node is traversed.

vector<int> bfsOfGraph(int n , vector<int>adj[]){
    // if 0 based indexing graph we can make vis array and queue of size n
    // but if its not we have to make it for n+1

    int vis[n]={0}; // 9 based indexing graph
    vis[0] = 1; // Starting node is 0

    queue<int> q;
    q.push(0);
    vector <int> bfs;
    while(!q.empty()){
        int node = q.front(); // Taking that for reference
        q.pop();
        bfs.push_back(node); // Array we want to return
        // We check neighbours now
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it]=1; // We make visited array as 1 for that node
                q.push(it); // We added neighbours to the queue
            }
        }


    }
    return bfs;
    

}

// bfs also just takes all neighbours which are connected or which are just below the level of them , prints it 
