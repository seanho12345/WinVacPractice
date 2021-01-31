#include <iostream>
using namespace std;

int main(){
    int time;
    cin>>time;
    while(time--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int arr[16];
        int doubled=0,undoubled=0;
        for(int i=3;i>=0;i--){
            arr[i]   = a%10;
            arr[i+4] = b%10;
            arr[i+8] = c%10;
            arr[i+12]= d%10;
            a/=10;
            b/=10;
            c/=10;
            d/=10;
        }
        for(int i=0;i<=14;i+=2){
            int tmp = arr[i]*2;
            if(tmp>=10){
                doubled += tmp%10 + tmp/10;
            }else{
                doubled += tmp;
            }
        }
        for(int i=1;i<=15;i+=2){
            undoubled += arr[i];
        }
        /*
        for(int i=0;i<16;i++){
            cout<<arr[i];
        }
        cout<<endl;
        cout<<doubled<<" "<<undoubled<<"\n";
        */
        if((doubled + undoubled)%10 == 0){
            cout<<"Valid\n";
        }else{
            cout<<"Invalid\n";
        }
    }
}