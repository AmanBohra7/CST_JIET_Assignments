#include<iostream>
using namespace std;
int main ()
{
  int a[] = { 1, 1, 2, 3, 2 };
  int len = sizeof (a) / sizeof (a[0]);
  int res = a[0];
  for (int j = 1; j < len; j++)
    {
      res = res ^ a[j];
    }
  cout<<"Result :"<<res;
}
