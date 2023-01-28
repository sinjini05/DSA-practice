#include <iostream>
#include<list>

using namespace std;

int main(){
    //
    list<int> l;

    list<int> n(5,100);
    for(int i:n){
        cout<<i<<" ";
    }

    l.push_back(3);
    l.push_front(9);
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }

    
    return 0;
}