 #include <iostream>
using namespace std;
int main(){

    int num;
    cout<<"enter the year "<<endl;
    cin>>num;

    if(num%400==0)
    {
        cout<<"leap year"<<num<<endl;
    }
    else if(num%4==0 && num%100!=0){
        cout<<"leap year"<<num<<endl;

    }
    else{
        cout<<"not a leap year"<<endl;
    }
}