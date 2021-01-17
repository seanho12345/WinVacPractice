#include <iostream>
#include <string>
using namespace std;
int main(){
    string input;
    while(getline(cin,input)){
        int ans=0;
        int isWord=0;
        for(int i=0;i<input.length();i++){
            if((input[i]>='A'&&input[i]<='Z')||(input[i]>='a'&&input[i]<='z')){
                isWord=1;
            }else{
                if(isWord==1){
                    ans++;
                    isWord=0;
                }
            }
           //cout<<i<<" "<<ans<<"\n";
        }
        //cout<<isWord<<" "<<ans<<"\n";
        if(isWord == 1){
            ans++;
            isWord=0;
        }
        cout<<ans<<"\n";
    }
    return 0;
}