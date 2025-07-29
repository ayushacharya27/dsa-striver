#include <iostream>
using namespace std;
#include <bits/stdc++.h>

//Theory
// Input format will be given as follows:
// m n   m--> represents the number of nodes and m represents the number of edges
// m1 n1 m1,2,.., n1,2,...., represents the which nodes are connected to which other nodes.
// m2 n2
// m3 n3
// m4 n4
// m5 n5


// Storing Graphs

int main(){
    // Matrix way
    int m , n ; 
    cin >> m >> n;

    int adj[n+1][n+1];

    for(int i = 0 ; i < m ; i++){
        int m1 , n1;
        cin >> m1 >> n1;

        adj[m1][n1] = 1; // if there is no weight we put 1 , otherwise we put the weight
        adj[n1][m1] = 1; // only if it is undirecte graph.
    }

    // Adjacency list way
    int m , n ; 
    cin >> m >> n;
    vector<int>adjlist[n+1];

    for(int i = 0 ; i < m ; i++){
        int m1 , n1;
        cin >> m1 >> n1;
        adjlist[m1].push_back(n1);
        adjlist[n1].push_back(m1); // only if it is undirecte graph.
    }

    // if weights given
    vector<pair<int,int>>adjlistweight[n+1];

    // Now in for loop we use as pair to store with the weight
    for(int i = 0 ; i < m ; i++){
        int m1 , n1 , w;
        cin >> m1 >> n1 >> w;
        adjlistweight[m1].push_back({n1,w});
        adjlistweight[n1].push_back({m1,w}); // only if it is undirecte graph.
    }

    





}

