#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Please enter the integer number : ";
    cin>>num1>>num2;

    if(num1==num2){
        cout<<"Both are equal";
    }
    else if(num1>num2){
        cout<<num1<<" is greater";


    }
    else{
        cout<<num2<<" is greater";
    }
    return 0;
}