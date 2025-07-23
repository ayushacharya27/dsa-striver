
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


// My Way (It was Wrong)
/*int ninja_training(int days , int index , int merit , int &merit_max , int arr[][3] , int choosen){
    if(index==days){ max(merit , merit_max); return;}
    if(choosen>3) choosen=0;

    // Ninja Training if Choosing
    ninja_training(days , index + 1  , merit+arr[index][choosen], merit_max , arr[index+1][choosen+1]);

    // Ninja Training If Choosing 
    ninja_training(days , index + 1  , merit, merit_max , arr[index+1][choosen+1]);

    return merit_max;

}*/

// Striver Way

int ninja_training(int days , int last , int arr[][3] , int dp[][3]){

    // Base Case
    if(days==0){
        int maximum = 0 ;
        for(int i=0 ; i <= 2 ; i++){
            maximum  = max(maximum , arr[0][i]);
        }
        return dp[days][last] = maximum;

    }

    if(dp[days][last]!= -1) return dp[days][last];
    int maximum = 0 ;

    for(int i = 0 ; i<=2 ; i++){
        if(i!=last){

            int points = arr[days][i] + ninja_training(days-1 , i , arr , dp);
            maximum = max(maximum , points);

        

        }
        

    }
 
    return dp[days][last] = maximum;

}


int main(){
    int arr[3][3] = {
        {1, 2, 5},
        {3, 1, 1},
        {3, 3, 3}
    };

   


    return 0;

}