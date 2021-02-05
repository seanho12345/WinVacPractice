#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        for(int i=0;i<str.length();i++){
            cout<<(char)(str[i]-7);
        }
        cout<<"\n";
    }
}