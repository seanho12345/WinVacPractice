#include <iostream>
using namespace std;

int main(){
    int time;
    cin>>time;
    while(time--){
        int e,f,c;
        cin>>e>>f>>c;
        int ans = 0;
        while(e>=c){
            int tmp;
            tmp = e/c;
            ans += tmp;
            e = tmp + e%c;
        }
        f += e;
        while(f>=c){
            int tmp;
            tmp = f/c;
            ans += tmp;
            f = tmp + f%c;
        }
        cout<<ans<<"\n";
    }

}