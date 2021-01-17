#include <iostream>
using namespace std;
int main(){
    while(true){
        int num;
        cin>>num;
        if(num==0){
            break;
        }
        while (num>=10){
            int digits[10]={0};
            int digit=0;
            while(num!=0){
                digits[digit] = num%10;
                num/=10;
                digit++;
            }
            for(int i=0;i<digit;i++){
                num += digits[i];
            }
        }
        cout<<num<<"\n";
    }

}