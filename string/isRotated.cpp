#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)

    {

        // Your code here

        if(s1.size()!=s2.size())

        return 0;

        for(int i=0;i<s1.size();i++){

            if(s1[i]==s2[0]){

                string ans="";

                // substr-takes two arg pos and len, and makes a copy

                ans=s1.substr(i,s1.size())+s1.substr(0,i);

                if(ans==s2){

                    return 1;

                }

            }

        }

        return 0;

    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;
    }
    return 0;
}