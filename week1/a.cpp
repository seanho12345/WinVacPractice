#include <iostream>
using namespace std;
int main(){
    int time;
    cin>>time;
    for(int t=0; t<time; t++){
        int min,max,ans=0;
        cin>>min>>max;
        for(int i=min;i<=max;i++){
            if(i%2==1){
                ans += i;
            }
        }
        cout<<"Case "<<t+1<<": "<<ans<<"\n";
    }

}