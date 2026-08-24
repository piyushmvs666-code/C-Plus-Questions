//calculate the factorial of a number.
#include <iostream>
using namespace std;
int main(){
    
    
    int num ,fact = 1;
    cout<<"enter the number "<<endl;
    cin>>num;

    for(int i=1;i<=num;i=i+1){
        fact = fact*i;
        
       
        
    }
    cout<<fact<<" ";
     
    
    
    
    return 0;
}