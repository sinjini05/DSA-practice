#include<iostream>
#include<stack>
using namespace std;

// int main(){
//     stack<int> s;

//     s.push(4);
//     s.push(9);
//     // cout<<s.top()<<" ";  --gives 9 4
//     s.pop();

//     // cout<<s.top();        --when used together with above, only top executed   

//     return 0;
// }

class Test
{
private:
   int x;
public:
   void setX (int x)
   {
       // The 'this' pointer is used to retrieve the object's x
       // hidden by the local variable 'x'
       this->x = x;
   }
   void print() { cout << "x = " << x << endl; }
};
  
int main()
{
   Test obj;
   int x = 20;
   obj.setX(x);
   obj.print();
   return 0;
}