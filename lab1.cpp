#include<iostream>
#include<iomanip>
using namespace std;
/*
void greet(){
    cout<<"hello the from  greet"<<endl;
}
int main()
{//first function
    greet();
    greet();
    greet();
    cout<<"back in main"<<endl;
    return 0;

}*/
/*
float num = 42.8;
int x=5,y=7;
void show(){int y=10;
cout<<x<<" "<<y<<endl;}
int main()
{
    float num=24.6;
    show();
    cout<<num<<" "<<::num;
}*/
//pass by reference
/*
void swapval(int a, int b){
    int t=a;a=b;b=t;
}
int main()
{
    int x=5,y=10;
    swapval(x,y);
cout<<x<<" "<<y<<endl;
swapref(x,y);
cout<<x<<""<<y<<endl;
}*/
int absolute(int x){if(x<0 )return -x;
else return x;}
double absolute(double x){if(x<0.0) return -x;
return x;}
int main(){
    cout<<absolute(-5)<<endl;
    cout<<absolute(-2.5)<<endl;
}