#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int climb_stairs(int target){

    // Assuming it Perfectly Landed on the 0th stair , so we count that as 1 way
    if(target==0){
        return 1;
    }

    // Edge Case for if it jumps for 2 after reaching the second last stair
    if(target==-1){
        return 0;
    }
    int jumping_one_first = climb_stairs(target-1);
    int jumping_two_first = climb_stairs(target-2);

    return jumping_one_first + jumping_two_first;



}

int main(){
    cout << climb_stairs(4);
}