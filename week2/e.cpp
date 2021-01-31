#include <iostream>
using namespace std;
int main(){
    int time;
    cin>>time;
    while(time--){
        int n;
        cin>>n;
        int digits[10]={0};
        for(int i=1;i<=n;i++){
            int tmp = i;
            while(tmp>0){
                digits[tmp%10]++;
                tmp/=10;
            }
        }
        for(int i=0;i<9;i++){
            cout<<digits[i]<<" ";
        }
        cout<<digits[9]<<"\n";
    }
}