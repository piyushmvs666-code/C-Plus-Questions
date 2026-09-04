// print character a to z.
#include <iostream>
using namespace std;
int main(){

    char name;
    cout<<"enter the alphabet"<<endl;
    cin>>name;

    for(name ='a'; name<='z'; name = name +1){
        cout<<"the following alphabet "<<name<<endl;
    }
    
    return 0;
}
