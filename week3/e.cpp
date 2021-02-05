#include <iostream>
using namespace std;

int main(){
    int table[100100]={0};
    for(int i=100000;i>=1;i--){
        int re = i,tmp = i;
        while(re != 0){
            tmp += re%10;
            re/=10;
        }
        table[tmp] = i;
    }
    int times;
    cin>>times;
    while(times--){
        int n;
        cin>>n;
        cout<<table[n]<<"\n";
    }
}