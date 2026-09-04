//check whether the number is positive , negative , or zero.
#include<iostream>
using namespace std;
int main(){
    
    int num;
    cout<<"enter the number : "<<endl;
    cin>>num;
    if(num > 0){
        cout<<"print positive number "<< num <<endl;
        if (num < 0){
             cout<<"print negative number "<< num <<endl;
        

        }
    }
    else{
        cout<<"print 0 " <<endl;
    }
    
    
    
    return 0;
}