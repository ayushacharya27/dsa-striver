#include <iostream>
using namespace std;
#include <bits/stdc++.h>


bool summation(int index , int n ,vector<int> sequence , int sum , int arr[] , int target){

    // if there are no elements further
    if(index>=n){

        // If the sum is equals to 2 then print the sequence
        if(sum==target){
            for(int i=0 ; i< sequence.size() ; i++ ){
            cout << sequence[i] << " ";
        }
        cout<<" "<<endl;
        return true;
        }

        // Otherwise return false
        else{
            return false;
        }
    }

    // By selecting that element
    sequence.push_back(arr[index]);

    // Doing that if it return one answer, dont go for all answers , since we only want the first one 
    if(summation(index+1 , n , sequence , sum+arr[index] , arr , target)==true){
        return true;
    }

    // By not selecting that element
    sequence.pop_back();
    // Same here again , Doing that if it return one answer, dont go for all answers , since we only want the first one
    if(summation(index+1 , n , sequence , sum , arr , target ) ==true){
        return true;
    }
    return false;


}

int main(){
    int arr[3] = {1,1,2};
    vector<int> seq;

    summation(0, 3, seq, 0 , arr , 2);
}