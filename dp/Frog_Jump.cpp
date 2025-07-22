#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void lowest_energy(int &min_energy ,int energy, int index , int n , int energy_arr[]){
    if(index==n-1){
        if(energy<min_energy){
            min_energy = energy; // Just calculating the minimum of the energy utilised
        }
        return ;
    }
    if(index==n){
        return;
    }

    lowest_energy(min_energy , energy + abs(energy_arr[index] - energy_arr[index+1]) , index +1 , n ,   energy_arr  );
    lowest_energy(min_energy , energy + abs(energy_arr[index] - energy_arr[index+2]) , index + 2 , n ,   energy_arr  );

    return  ;


    

}

int main (){
    int energy_arr[4] ={10,20,30,10};
    int min_energy = 10000;

    lowest_energy(  min_energy , 0  , 0 , 4, energy_arr);
    cout << min_energy;


}
