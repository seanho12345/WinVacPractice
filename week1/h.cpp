#include <iostream>
using namespace std;
int main(){
    while(true){
        int time;
        cin>>time;
        if(time==0){
            break;
        }
        int divx,divy;
        cin>>divx>>divy;
        for(int t=0;t<time;t++){
            int x,y;
            cin>>x>>y;
            if(divx==x||divy==y){
                cout<<"divisa"<<"\n";
                continue;
            }
            if(x>divx){
                if(y>divy){
                    cout<<"NE"<<"\n";
                }else{
                    cout<<"SE"<<"\n";
                }
            }else{
                if(y>divy){
                    cout<<"NO"<<"\n";
                }else{
                    cout<<"SO"<<"\n";
                }
            }
        }
    }
    return 0;
}