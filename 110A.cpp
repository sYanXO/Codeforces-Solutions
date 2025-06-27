// lucky number contains only 4 and 7 digits

// lucky digits are 4 and 7 only
// nearly lucky numbers are those that have lucky digits = lucky number
/*
If count = 4 →  nearly lucky

If count = 7 →  nearly lucky

If count = 47 →  nearly lucky

If count = 447 →  nearly lucky

*/


#include<bits/stdc++.h>
using namespace std;
bool isLucky(string s){
    for(char c:s){
        if(c!='4'&& c!='7'){
            return false;
        }
    }
    return true;
}
int main(){
    string n;
    cin>>n;
    int lucky=0;
    for(char c:n){
        if((c=='4'||c=='7')){
            lucky++;
        }
    }

    

    if(isLucky(to_string(lucky))){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}