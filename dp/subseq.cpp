#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void subseq(int index , int n , vector<int> sequence , int arr[] ){

    // If there is no more Elements in front of it then just print the current sequences formed
    if(index>=3){
        for(int i=0 ; i< sequence.size() ; i++ ){
            cout << sequence[i] << " ";
        }
        cout<<" "<<endl;
        return;

    }

    // To select
    sequence.push_back(arr[index]);
    subseq(index+1 , n , sequence , arr );

    // To not select
    sequence.pop_back();
    subseq(index+1 , n , sequence , arr );

}

int main(){
    int arr[3] = {3,1,2};
    vector<int> seq;

    subseq(0,3,seq,arr);

}