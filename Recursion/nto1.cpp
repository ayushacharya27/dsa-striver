#include <iostream>
using namespace std;



void printname(int n){
    if(n==0){
        return;
    }
    cout<< n << endl;
    n--;
    printname(n);



}

int main(){
    int n = 0 ;
    cin >> n ;
    printname(n);
}