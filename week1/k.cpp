#include <iostream>
using namespace std;
int main(){
    int fib[39];
    fib[0] = 1;
    fib[1] = 2;
    for(int i=2;i<39;i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    int time;
    cin>>time;
    while(time--){
        int num,flag=0;
        cin>>num;
        cout<<num<<" = ";
        for(int i=38;i>=0;i--){
            if(num - fib[i]>=0){
                num -= fib[i];
                cout<<"1";
                flag = 1;
            }else if(flag == 1){
                cout<<"0";
            }
        }
        cout<<" (fib)"<<endl;
    }
    return 0;
}