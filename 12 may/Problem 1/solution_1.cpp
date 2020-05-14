#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C;
    cout<<"Input A:";
    cin>>A;
    cout<<"Input B:";
    cin>>B;
    cout<<"Input C:";
    cin>>C;
    
    int count=0;
    for(int i = 1 ; i <= A;i++){
        if(i%B==0 && i%C==0)
            count++;
    }
    
    cout<<count;
}
