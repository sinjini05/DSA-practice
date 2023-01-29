#include <iostream>
using namespace std;

int getMax(int num[],int n){
    int max = INT_MIN; //min of int range -2^31

    for(int i = 0; i<n ; i++){
        if(num[i] > max){
            max = num[i];
        }

    }

    return max;

}
int main(){

    int size;
    cin>>size;

    // int num[size]; ---bad practice 

    int num[10];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"max value is"<<getMax(num,size);
    

    return 0;
}