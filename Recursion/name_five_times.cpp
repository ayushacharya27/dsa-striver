#include <iostream>
using namespace std;

int count = 0 ;

void printname(){
    if(count==5){
        return;
    }
    cout<<"Ayush"<< endl;
    count++;
    printname();



}

int main(){
    printname();
}