#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        long long int ans=0,multiply=0;
        for(int i=3;i<=n;i+=2){
            multiply += i;
        }
        multiply = multiply*2 +1;
        for(int i=0;i<3;i++){
            ans += multiply;
            multiply -= 2;
        }
        cout<<ans<<"\n";
    }
}