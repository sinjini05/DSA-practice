#include <iostream>
#include<queue>

using namespace std;

// when getting the data, if max heap-> all ele will be max
//if min heap, then will get all min eles

int main(){
    // max heap

    // will give eles in descending order or max first

    priority_queue<int>p;
    p.push(8);
    p.push(7);
    p.push(0);
    cout<<p.size()<<endl;


    //0 not printed(?)
    for(int i=0;i<p.size();i++){ //will get wrong result bc p.size() always changing
        cout<<p.top()<<endl;
        p.pop();//bc of this, changing
    }

    int a=p.size();

    for(int i=0;i<a;i++){ 
        cout<<p.top()<<endl;
        p.pop();
    }

    // min heap

    // will give eles in ascending order

    priority_queue<int,vector<int>,greater<int>> mini;


    mini.push(5);
    mini.push(2);
    mini.push(1);

    int b=mini.size();

    for(int i=0;i<b;i++){ 
        cout<<mini.top()<<endl;
        mini.pop();
    }

    return 0;
}