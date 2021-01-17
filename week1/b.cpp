#include <iostream>
using namespace std;
int main(){
    while(true){
        int m1,h1,m2,h2;
        int ans = 0;
        cin>>h1>>m1>>h2>>m2;
        if(m1==0&&h1==0&&m2==0&&h2==0){
            break;
        }
        if(h2<h1){
            h2+=24;
        }
        if(h2==h1 && m2<m1){
            h2+=24;
        }
        if(m2<m1){
            h2--;
            m2+=60;
        }
        ans = (h2-h1)*60+m2-m1;
        cout<<ans<<"\n";
    }
    return 0;
}