/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
bool check(string S)
{
    int arr[26]={0};
    int n=S.size();
    int index;
    for(int i=0;i<n;i++)
    {
        index=(int)S[i]-97;
        arr[index]++;
    }
    for(int i=0;i<n;i++)
    {
        index=(int)S[i]-97;
        if(arr[index]!=index+1)
          return false;
    }
    return true;
}
int main()
{
    string S="bba";
    if(check(S)==true)
       cout<<"Yes"<<endl;
    else 
       cout<<"No"<<endl;
}