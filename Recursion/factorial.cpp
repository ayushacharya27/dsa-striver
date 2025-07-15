#include <iostream>
using namespace std;

// Parameterized way

void fact1(int n , int fact){
    if(n==0){
        cout<<fact<<endl;
        return;
    }
    fact1(n-1 , fact*n);

}

// Functional Way

int fact2(int n){
    if(n==0){
        return 1;
    }
    return n*fact2(n-1);
}

int main(){
    int n ; cin>> n;
    //fact1(n , 1);
    cout << fact2(n);
}