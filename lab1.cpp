#include<iostream>
using namespace std;

class Triangle{
private:
double width;
double height;
public:
Triangle (double w,double h){
width=w;
height=h;
}
double area(){
  return 0.5*width*height;
}
};
int main (){
  double height,width;
cout<<"enter the width of the triangle:";
cin>>width;
cout<<"enter the height of the triangle:";
cin>>height;
Triangle triangle (height,width);
cout<<"the area of the triangle is:"<<triangle.area()<<endl;
return 0;
}
