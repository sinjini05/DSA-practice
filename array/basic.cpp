#include <iostream>
using namespace std;

// array- where u can put items of same kind--datatype
// contiguous mem allocation

int main(){
    // int array[size]; --> bad pratcice to have variable size
    int array[10000]; //garbage value will be stored 10000 times
    int array[10000] = {0}; //0 will be stored 10000

    // how to initialise with 1 or any other no.

    for(int i=0;i<10;i++){
        array[i] = 1;
        cout<<array[i]<<endl;
    }

    




    

    return 0;
}