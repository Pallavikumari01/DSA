#include <iostream>
#include<stack>
using namespace std;
class solution{
    private:
    vecctor<int>nextsmallerelement(vector<int>&arr,int n){
        stack<int>s;
        s.push(-1);
        vector<int>ans;
        for(int i=n-1; i>=0; i--){
            int curr = arr[i];
            }
            while(s.top()!=-1 && arr[s.top()]>=curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
            
    }
    return ans;
}
vector<int>prevsmallerelement(vector<int>&arr, int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans;
    for(int i=0; i<n; i++){
        int curr=arr[i];
    }
    while(s.top()!=-1 && arr[s.top()]>=curr){
        s.pop();
    }
    ans[i]=s.top();
    s.push(i);
        
    }
    return ans;
}
    public:
    
    int maximumheight(vector<int>&height){
        int n=height.size();
        vector<int>next(n);
        next=nextsmallerelement(height,n);
        vector<int>prev(n);
        prev=prevsmallerelement(height,n);
        int area=INT_MIN;
        for(int i=0; i<n; i++){
            int l= height[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int b=next[i]-prev[i]-1;
            int arear=l*b;
            area=max(area,arear);
        }
        return area;
    }
};
