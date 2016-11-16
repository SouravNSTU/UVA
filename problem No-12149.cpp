#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n;
    long long int sum=0;
    while((cin>>n)){
        if(n==0){
            return 0;
        }
            sum=0;
        for(int i=n;i>0;i--){
            sum=i*i+sum;
        }
        cout<<sum<<endl;
    }

    return 0;
}
