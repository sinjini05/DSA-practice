#include <iostream>
#include<deque>

using namespace std;

int main(){
    // insertion,deletion from both ends
    //dynamic, random access possible

    deque<int>d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();

      for(int i:d){
        cout<<i<<" "; // will give 2
    }
    cout<<endl;

    cout<<d.at(0);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    cout<<d.empty()<<endl;

    cout<<d.size()<<endl; 


    return 0;
}