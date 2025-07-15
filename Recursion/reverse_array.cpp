#include <iostream>
using namespace std;

// Functional way

void swap(int *i , int *j){
    int temp=*i;
    *i=*j;
    *j=*i;

}

void reverse_array(int arr[] , int l , int r ){
     
 

    if(l==r){
        return;
    }
    swap(arr[l] , arr[r]);
    reverse_array(arr , l+1 , r-1);


}

void reverse_array3(int arr[] , int i ,   int n ){
    int l = i ; int r = n-(i+1);
    if(l>=n/2){
        return;
    }
    
    swap(arr[l] , arr[r]);
    //cout<< arr[l] + arr[r] << endl;
    reverse_array3(arr , l+1 , n);
 

    


}

int main(){

    int arr[5]= {1,2,3,4,5};
    //reverse_array(arr , 0 , 4);
    reverse_array3(arr , 0 ,  5);
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<endl;
    }


}

