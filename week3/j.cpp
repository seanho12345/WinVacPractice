#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int sum=0;
        int i = 1,k = 1;
        while(true){
            if(sum+i < n){
                sum+=i;
            }else{
                break;
            }
            i++;
            k++;
        }
       // cout<<k<<" "<<sum<<endl;
        int a,b;
        if(k%2 == 1){
            a = k - (n-sum)+1;
            b = 1 + (n-sum)-1;
        }else{
            a = 1 + (n-sum)-1;
            b = k - (n-sum)+1;
        }
        cout<<"TERM "<<n<<" IS "<<a<<"/"<<b<<"\n";
    }
}