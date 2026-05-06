#include<iostream>
using namespace std;
int main(){
    int x , y ;
    cout <<"Enter the value of x ";
    cin>>x;
    cout <<"Enter the value of y ";
    cin>>y;
    if(x>0 && y>0){
        cout<<"The point lies in first quadrant";
    }
     else if(x <0 && y>0){
        cout<<"The point lies in second quadrant ";
     }
     else if(x<0 && y<0){
        cout<<"The point lies in third quadrant ";
     }
     else if(x>0 && y<0){
        cout<<"The point lies in fourth quadrant ";
     }
     else if(x==0 && y==0){
        cout<<"The point lies at the origin ";
     }
     else if(x==0){
        cout<<"The point lies on the y-axis ";
     }
     else if(y==0){
        cout<<"The point lies on the x-axis ";
     }
}