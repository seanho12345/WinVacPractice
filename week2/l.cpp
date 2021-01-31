#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int time,cases=1;
    while(cin>>time){
        int ans = 0;
        while(time--){
            string str;
            int alpha[26]={0};
            cin>>str;
            if(str.length() == 1){
                continue;
            }
            for(int i=0;i<str.length();i++){
                alpha[str[i] - 'a']++;
            }
            sort(alpha,alpha+26,greater<int>());
            int valid = 1;
            for(int i=0;i<26;i++){
                if(alpha[i] == 0){
                    break;
                }else{
                    if(alpha[i] == alpha[i+1]){
                        valid = 0;
                        break;
                    }
                }
            }
            if(valid == 1){
                ans++;
            }
        }
        cout<<"Case "<<cases<<": "<<ans<<"\n";
        cases++;
    }
}

/*
3
azxdftgyb
aabccd
aabbbcccdeee
4
rtryuy
tavcsrewqetmmm
iiuyytttttzzzz
cccvvbbbbdddddd
5
ada
bbacccd
lkjgfsrw
dsfeswfz
owergvxdrw
2
illness
a
3
ttgdfgghdf
dfghdfhghfgh
hgfhgfhgfhg

2
adasf
bdfgfd
5
a
ddf
vv
ddfghylkk
jhtywer
11
asdf
assddff
eerrttyy
ttyyuiiu
reerrttyu
ertyfgghhjki
oluyyrtrmn
dfgrtesq
zxfvhyuo
dghhvdfhjk
fhnnbvdfdxvg
7
rrtugds
fhfgjghjkjfhf
fghjfgjghj
fhfgjhghjhgjkh
fghjgjhgkjjhkjh
fjhghjhkjhk
jghjghjkhkjhk
9
rrtugds
eetgrdwasvchfutf
nnbdfearsf
avvddgjhgjkhgjkh
fgrtdsgsdds
bvgfterwabfggd
jvcbmoipwrw
kkllllloooottttt
nbbbbsffffwwwhg
*/