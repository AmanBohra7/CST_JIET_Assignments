#include<bits/stdc++.h>
using namespace std;

int main(){
    int A;
    cout<<"Enter the value of A: ";
    cin>>A;
    vector<vector<int>> ar(A,vector<int>(A,0));
    for (int i = 0; i < A; i++)
        ar[i][0] = 1;

    for (int i = 1; i < A; i++)
    {
        for (int j = 1; j < A; j++)
        {
            if(i==j){
                ar[i][j] = ar[i][j-1];
            }
            else{
                ar[i][j] = ar[i][j-1] + ar[i-1][j];
            }
        }
        
    }
    
    cout<<"Answer is : "<<ar[A-1][A-1];
    
}