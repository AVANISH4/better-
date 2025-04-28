#include<iostream>
using namespace std;
int main(){
    int sum,n,d;
    d=0;
   cin>>n;
    int p=n;
    while(n!=0){
       sum=n%10;
        d=d*10+sum;
n=n/10;
    }
if(p==d){
    cout<<"pollindom number"<<p;
}
else{
    cout<<"not a pollindom number"<<endl;
}

}