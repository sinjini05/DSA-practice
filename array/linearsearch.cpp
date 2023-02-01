#include <iostream>
using namespace std;

bool search(int arr[],int size, int ele){
    for(int i=0;i<size;i++){
        if(arr[i]==ele){
            return true;
        }
    }
    return false;

}

int main(){

    int arr[3]={3,6,7};
    //search an element
    cout<<"enter ele to search for";
    int ele;
    cin>>ele;

    bool found = search(arr,3,ele);
    if (found){
        cout<<"key present"<<endl;
    }
    else{
    cout<<"key absent";
    }


    return 0;
}