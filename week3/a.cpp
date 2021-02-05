#include <iostream>
using namespace std;

int main(){
    while(true){
        int i,ans = 0;
        int bin[32]={0};
        cin>>i;
        if(i == 0){
            break;
        }
        int a = 0;
        for(a=0;i>0;a++){
            bin[a] = i%2;
            if(bin[a] == 1){
                ans++;
            }
            i/=2;
        }
        a--;
        cout<<"The parity of ";
        while(a>=0){
            cout<<bin[a];
            a--;
        }
        cout<<" is "<<ans<<" (mod 2).\n";
    }
}