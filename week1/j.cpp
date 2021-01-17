#include <iostream>
using namespace std;
int main(){
    int ca=1;
    while(true){
        int num,ans=0,time=1;
        cin>>num;
        if(num<0){
            break;
        }
        while(time<num){
            time *= 2;
            ans++;
        }
        cout<<"Case "<<ca<<": "<<ans<<"\n";
        ca++;
    }
    return 0;
}