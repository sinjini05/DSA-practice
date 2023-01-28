#include <iostream>
#include<stack>

using namespace std;

int main(){

    // LIFO

    stack<string> s;
    s.push("h");
    s.push("i");
    cout<<s.top()<<endl; //last which is inserted

    cout<<s.size()<<endl;
    cout<<s.empty();//will check if empty or not
    return 0;}