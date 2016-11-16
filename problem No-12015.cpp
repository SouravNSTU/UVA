#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char url[10][100];
    int value [10],i,j,T,max;
    cin>>T;
    for(i=1;i<=T;i++){

        for(j=0;j<10;j++){
            cin>>url[j]>>value[j];
        }
           max=value[0];
        for(j=1;j<10;j++){
            if(value[j]>max){
                max=value[j];
            }
        }
        cout<<"Case #"<<i<<":"<<endl;
        for(j=0;j<10;j++){
            if(value[j]==max){
                cout<<url[j]<<endl;
            }
        }
    }
    return 0;
}
