#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int count = 0 ;
int summation(int index , int n ,vector<int> sequence , int sum , int arr[] , int target){

    // if there are no elements further
    if(index>=n){

        // If the sum is equals to 2 then return 1
        if(sum==target){
            // count++; It will not work as its not taking it as global variable
            return 1;
           
        }
         
        // Otherwise return false
        else{
            return 0;
        }
    }

    // By selecting that element
    sequence.push_back(arr[index]);

    // Doing that if it return one answer, dont go for all answers , since we only want the first one 
    int to_choose = summation(index+1 , n , sequence , sum+arr[index] , arr , target);
  
 

    // By not selecting that element
    sequence.pop_back();
    // Same here again , Doing that if it return one answer, dont go for all answers , since we only want the first one
    int to_notchoose = summation(index+1 , n , sequence , sum , arr , target) ;
      
    return to_notchoose + to_choose ;


}

int main(){
    int arr[3] = {1,1,2};
    vector<int> seq;

    cout << summation(0, 3, seq, 0 , arr , 4);
}