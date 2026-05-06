#include<iostream>
using namespace std;
int main(){
    int initial_term , common_difference , n ;
    cout<<"Enter the initial term : " ;
    cin>>initial_term ;
    cout<<"Enter the common difference : " ;
    cin>>common_difference ;
    cout<<"Enter the number of terms : " ;
    cin>>n ;
    for(int i = 0 ; i<n ; i++){
        cout<<initial_term +(i*common_difference)<<endl ;
    }
    return 0;
}