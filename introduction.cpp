#include<iostream>
using namespace std;
int main(){
    int n=1,sum=0;
    while(n<=10){
        cout<<n<<" ";
        sum+=n;
        n++;
    }
    cout<<sum<<endl;
    return 0;
}