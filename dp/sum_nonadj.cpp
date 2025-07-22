#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void maxSum_nonadj(int index , int &max_sum , int sum , int n , int arr[]){
    if(index>=n){
        max_sum = max(max_sum , sum);
        return;
    }

    // To Pick the Element
    maxSum_nonadj(index+2 , max_sum , sum+arr[index] , n , arr );

    // To not Pick
    maxSum_nonadj(index+1 , max_sum , sum , n , arr );

    return;

}

int main(){
    int arr[5] = {1,2,3,4,5};
    int max_sum = 0 ;
    maxSum_nonadj(0 , max_sum , 0 , 5 , arr);
    cout<< max_sum;
}


         