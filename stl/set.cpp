#include <iostream>
#include<set>

using namespace std;
// set-- only unique eles stored, repeating ele will be stored once
// implement using BST

// eles returned in sorted order

// unordered set is faster but not sorted

int main(){

    set<int> s;
    s.insert(6);
    s.insert(39);
    for(auto i:s){
        cout<<i<<endl;
    }

    cout<<s.count(5)<<endl;//tells if 5 present or not
    cout<<s.count(39)<<endl;

    cout<<s.find(1)<<endl;//use iterator



    return 0;
}