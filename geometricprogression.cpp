#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i = 1 ; i<= 1* pow (2 , n-1); i+=2){
        cout<<i<<endl;

    }
}