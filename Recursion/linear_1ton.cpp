#include <iostream>
using namespace std;

int count = 1 ;

void printname(int n){
    if(count==(n+1)){
        return;
    }
    cout<< count << endl;
    count++;
    printname(n);



}

int main(){
    int n = 0 ;
    cin >> n ;
    printname(n);
}