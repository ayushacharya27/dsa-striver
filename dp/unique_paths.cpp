#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int unique_paths_obstacles(int dest_x , int dest_y , int initial_x , int initial_y , int cost_map[][500]){

    if(initial_x == dest_x && initial_y == dest_y ) return 1;
    if(initial_x<dest_x && initial_y<dest_y && cost_map[initial_x][initial_y] == 100) return 0;
    if(initial_x>dest_x or initial_y>dest_y) return 0;

    int left = unique_paths_obstacles(dest_x , dest_y , initial_x - 1 , initial_y , cost_map );
    int right = unique_paths_obstacles(dest_x , dest_y , initial_x + 1 , initial_y , cost_map );
    int straight = unique_paths_obstacles(dest_x , dest_y , initial_x  , initial_y + 1 , cost_map );

    return left + right + straight ; 
    


}
