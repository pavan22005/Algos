#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n=5;
    int arr[]={3,6,4,1,8};
    bool swapped =false;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

 return 0;
}