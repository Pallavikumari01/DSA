#include <iostream>
#include<vector>
using namespace std;
int prints(int s, int sum, int n, int index, int arr[]){
    if(index==n){
        if(s== sum)
          
              
         return 1;
        
        else return 0; 
        
    }
    
  
    
    s+= arr[index];
    int l=prints(s, sum,  n, index+1,arr);
        
  
     s-= arr[index];
    int r=  prints(s, sum,  n, index+1,arr);
        return l+r;
}
  
int main()
{
    int n=3;
    int sum=2;
    int arr[]={1,2,1};
 
    
   cout<< prints(0,sum, n, 0,arr);

    return 0;
}
