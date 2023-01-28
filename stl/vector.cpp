#include <iostream>
#include<vector>

using namespace std;

int main(){
    //dynamic array--vector--when full, and more 
    // items left,it will make a new vector, double
    //  its size and will leave the old structure

    vector<int>v;

    vector<int>a(5,1);//here 5 is the size of vector and all eles are 1

    vector<int> last(a);//to copy a vector to another

    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    cout<<v.capacity()<<endl; //capacity is the mem allocated to it, size is the no.of ele
    v.push_back(4);
    cout<<v.capacity()<<endl; //will give 1
    v.push_back(3);
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;//will give 4 even if only 3 items pushed bc the mem. gets doubled
    cout<<v.size()<<endl;//however, size will be 3

    cout<<v.at(2)<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    cout<<v.capacity()<<endl;
     
}

