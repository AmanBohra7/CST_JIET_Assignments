#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans = 1 , A = 19;
    cout<<"Enter the value of A: ";
    
    if(A==0 || A==1){
        cout<<A;
        return 0;
    }
    int i=1;
    while(ans <= A){
        i++;
        ans = i*i;
    }
    cout<<i-1;
}