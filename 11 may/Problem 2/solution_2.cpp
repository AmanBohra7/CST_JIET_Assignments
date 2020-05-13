#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ar={1,2,3,5,6,8,9};
    int p,mi=INT_MAX;
    sort(ar.begin(),ar.end());
    for (int i = 1; i < ar.size(); i++)
    {
        p = ar[i-1] ^ ar[i];
        if(p < mi)
            mi=p;
    }
    cout<<"Minmum xor value: "<<mi;
    
}