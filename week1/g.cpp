#include <iostream>
using namespace std;
int main(){
    int time;
    cin>>time;
    for(int t=0;t<time;t++){
        int h,f;
        cin>>h>>f;
        for(int i=0;i<f;i++){
            for(int j=1;j<=h;j++){
                for(int k=0;k<j;k++){
                    cout<<j;
                }
                cout<<"\n";
            }
            for(int j=h-1;j>=1;j--){
                for(int k=0;k<j;k++){
                    cout<<j;
                }
                cout<<"\n";
            }
            if(i!=f-1){
                cout<<"\n";
            }
        }
        if(t!= time-1){
            cout<<"\n";
        }
    }
    return 0;
}