#include <iostream>
using namespace std;
int gcd(int i,int j){
    for(int k=i;k>0;k++){
        if(i%k == 0 && j%k == 0){
            return k;
        }
    }
}
int main(){
    while(true){
        int n;
        cin>>n;
        if(n == 0){
            break;
        }
        int ans = 0;
        for(int i=1;i<n;i++){
            for(int j= i+1;j<=n;j++){
                for(int k=i;k>0;k--){
                    if(i%k == 0 && j%k == 0){
                        ans += k;
                        break;
                    }   
                }
            }
        }
        cout<<ans<<"\n";
    }
}