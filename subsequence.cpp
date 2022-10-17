#include <iostream>
#include<vector>
using namespace std;
void subsequence (int arr[], vector<int>&ps, int n,int i){
    if(i==n){
    for(auto t: ps){
          cout<<t<<" ";
    }
        if(ps.size() == 0){
            cout<<"{}";
        }  

    
    return;
    cout<<endl;
    }
    subsequence(arr, ps, n, i+1);
    ps.push_back(arr[i]);
    subsequence(arr, ps, n, i+1);
    ps.pop_back();
    
    
    
}
int main()
{
   int arr[]={3,1,2};
   int n;
   n=3;
   vector<int>ps;
  subsequence(arr, ps, n, 0);
   

    return 0;
}
