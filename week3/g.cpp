#include <iostream>
using namespace std;

int main(){
    int n,r;
    while(cin>>n>>r){
        int volun[n]={0};
        int returned[r];
        for(int i=0;i<r;i++){
            cin>>returned[i];
        }
        if(n==r){
            cout<<"*\n";
        }else{
            for(int i=0;i<r;i++){
                volun[returned[i]-1] = 1;
            }
            for(int i=0;i<n;i++){
                if(volun[i] == 0){
                    cout<<i+1<<" ";
                }
            }
            cout<<"\n";
        }

    }

}