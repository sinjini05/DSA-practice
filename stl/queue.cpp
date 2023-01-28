#include <iostream>
#include<queue>

using namespace std;

int main(){
    //FIFO
    queue<string> q;
    q.push("hello");
    q.push("hi");
    cout<<q.front()<<endl;


    return 0;
}