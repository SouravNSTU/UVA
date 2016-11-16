#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int l,w,h,t,i;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>l>>w>>h;
        cout<<"Case "<<i<<": ";
        if(l>20||w>20||h>20){
            cout<<"bad"<<endl;
        }
        else
            cout<<"good"<<endl;
    }
    return 0;
}

