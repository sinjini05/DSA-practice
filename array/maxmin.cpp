#include <iostream>
using namespace std;

int getMax(int num[],int n){
    int maxi = INT_MIN; //min of int range -2^31


    for(int i = 0; i<n ; i++){
        maxi=max(maxi,num[i]);
        
        // if(num[i] > maxi){
        //     maxi = num[i];
        // }

    }

    return maxi;

}
int main(){

    int size;
    cin>>size;

    // int num[size]; ---bad practice 

    int num[10];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"maxi value is"<<getMax(num,size);
    

    return 0;
}