#include<iostream>
using namespace std;

class Maxmin {
    int num1;
    int num2;
    public:
    Maxmin(int n1,int n2) 
    {
        num1=n1;
        num2=n2;
    }
    void findMaxmin(){
        if(num1>num2)
        {
            cout<<"Maximum:"<<num1<<endl;
            cout<<"Minimum:"<<num2<<endl;
        }
        else
        {
            cout<<"Maximum:"<<num2<<endl;
            cout<<"Minimum:"<<num1<<endl;
        }
    }
};
int main () {
    int num1,num2;
    cout<<"enter the first number:";
    cin>>num1;
    cout<<"enter the first number:";
    cin>>num2;
    Maxmin find (num1,num2);
    find.findMaxmin();
}
    
