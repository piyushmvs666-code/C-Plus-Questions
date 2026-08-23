//print table of N numbers.
#include <iostream>
using namespace std;

int main(){
    
    int num , i;
    cout<<"enter the number "<<endl;
    cin>>num;

    for(i=1;i<=10;i=i+1){
        cout<<num*i<<" ";
    }
    
    
    return 0;
}