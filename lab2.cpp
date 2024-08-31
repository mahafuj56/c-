#include<iostream>
using namespace std;

class sum {
public:
int calculateSum(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

};
int main (){
  int num1,num2,num3;
cout<<"enter the first number:";
cin>>num1;
cout<<"enter the second number:";
cin>>num2;
cout<<"enter the third number:";
cin>>num3;
sum calculator;
int sum=calculator.calculateSum(num1,num2,num3);
cout<<"the sum of the three number is :"<<sum<<endl;
}
