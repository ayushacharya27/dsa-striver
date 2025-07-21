#include <iostream>
using namespace std;
#include <bits/stdc++.h>


void summation(int index , int n ,vector<int> sequence , int sum , int arr[] , int target){

    // if there are no elements further
    if(index>=n){

        // If the sum is equals to 2 then print the sequence
        if(sum==target){
            for(int i=0 ; i< sequence.size() ; i++ ){
            cout << sequence[i] << " ";
        }
        cout<<" "<<endl;
        return;
        }

        // Otherwise return
        else{
            return;
        }
    }

    // By selecting that element
    sequence.push_back(arr[index]);
    summation(index+1 , n , sequence , sum+arr[index] , arr , target);

    // By not selecting that element
    sequence.pop_back();
    summation(index+1 , n , sequence , sum , arr , target );


}

int main(){
    int arr[3] = {1,1,2};
    vector<int> seq;

    summation(0, 3, seq, 0 , arr , 2);
}