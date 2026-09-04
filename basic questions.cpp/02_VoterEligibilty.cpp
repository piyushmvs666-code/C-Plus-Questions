// check voter eligibilty..?
#include<iostream>
using namespace std;
int main(){
    
    int age ;
    cout<<"enter the age of person"<<endl;
    cin>>age;
    if(age>18){
        cout<<"eligible to vote : "<<age<<endl;
    }
    else{
        cout<<"not eligible to vote"<<age<<endl;
    }

    
    
    
    return 0;
}