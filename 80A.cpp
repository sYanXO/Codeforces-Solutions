// m>n
// check if m in the immediate next prime of n

#include<iostream>
using namespace std;
bool isPrime(int n){
    if (n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
        
    }
    return true;
}
int main(){
    int m,n;
    cin>>n>>m;
    int nextPrime =-1;
    for(int i=n+1;;i++){
        if(isPrime(i)){
            nextPrime=i;
            break;
        }
    }
    if (nextPrime==m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
