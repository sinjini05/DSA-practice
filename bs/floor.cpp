class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(long long arr[], int n, long long x){
        int start=0;
        int ans=-1;
        int end=n-1;
        int mid=(start+end)/2;
        while(start<=end){
            if(arr[mid]==x){
                return mid;
                
            }
            else if(arr[mid]>x){
                end=mid-1;
            }
            else{
                start=mid+1;
                ans=start-1;
                
            }
        }
        return ans;
        
        
        // Your code here
        
    }
};