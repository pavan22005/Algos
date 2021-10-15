#include <iostream>
using namespace std;

int binaryToDecimal(int n){
    int ans =0;
    int x=1 ;
    while(n>0){
        int y= n%10;
        ans+=x*y;
        x*=2;
        n = n/10;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<< binaryToDecimal(n);
    return 0;
}
