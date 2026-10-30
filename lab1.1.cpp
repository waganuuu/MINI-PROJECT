#include<iostream>
#include<iomanip>
using namespace std;
void greet();
int main()
{//first function
    greet();
    cout<<"back in main"<<endl;
    return 0;

}
void greet(){
    cout<<"hello from greet"<<endl;
}