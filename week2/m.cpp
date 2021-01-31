#include <iostream>
using namespace std;
int main(){
    int time;
    cin>>time;
    while(time--){
        long long int key,house;
        cin>>key>>house;
        if(key == 1 && house == 1){
            cout<<"0"<<endl;
            continue;
        }
        long long int ans = (house - 1 + house - key)*key/2;
        cout<<ans<<endl;
    }
}