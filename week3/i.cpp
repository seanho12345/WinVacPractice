#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string str;
    while(true){
        cin>>str;
        if(str == "*"){
            break;
        }
        int ans = 0,sum = 0;
        for(int i=0;i<str.length();i++){
            if(str[i] == '/'){
                if(sum == 64){
                    ans++;
                }
                sum = 0;
            }else{
                if(str[i] == 'W'){
                    sum += 64;
                }else if(str[i] == 'H'){
                    sum += 32;
                }else if(str[i] == 'Q'){
                    sum += 16;
                }else if(str[i] == 'E'){
                    sum += 8;
                }else if(str[i] == 'S'){
                    sum += 4;
                }else if(str[i] == 'T'){
                    sum += 2;
                }else if(str[i] == 'X'){
                    sum += 1;
                }
            }
        }
        cout<<ans<<"\n";
    }

}
