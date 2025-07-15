
#include <iostream>
using namespace std;
int sum = 0 ;
void printname(int i , int n){
    if(i>n){
        cout << sum;
        return;
    }
    sum+=i;
    printname(i+1 , n);

}

// Parametreised (i.e. Parameters do the work by incremneting and decrementing)
void printname2(int i , int sum1){
    if(i<0){
        cout << sum1;
        return;
    }
    printname2(i-1 , sum1+i);


}

// Functional (You form recurrence relation)
int printname3(int n){
    if(n==0){
        return 0;
    }
    return n + printname3(n-1);



}


 
int main(){
    int n;
    cin >> n ;
    //printname(0 , n);
    //printname2(n , 0);
    cout << printname3(n) << endl;

    
}

