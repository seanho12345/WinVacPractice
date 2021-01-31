#include <iostream>
#include <string>
using namespace std;
int main(){
    int time;
    cin>>time;
    while(time--){
        string str;
        cin>>str;
        int continous=0,score=0;
        for(int i=0;i<str.length();i++){
            if(str[i] == 'O'){
                continous++;
                score += continous;
            }else{
                continous = 0;
            }
        }
        cout<<score<<"\n";
    }

}