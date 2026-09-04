//print sum of n natural numbers.
 #include <iostream>
using namespace std;
int main(){

    int num;
    cout<<"enter the number "<<endl;
    cin>>num;
    int sum = 0;
    for(int i =1;i<=num;i = i+1){
        sum = sum+i;
        cout<<sum<<" ";
    }
   




    return 0;


}