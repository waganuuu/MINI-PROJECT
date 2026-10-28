#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){
    char names[5][20];
    int marks[5][3];
    int totals[5]={0};
    double averages[5]={0.0};
    int maxtotal=0;
    int topstudent=0;
    for(int i=0;i<5;i++){
        cout<<"Enter the name for student "<<i+1<<":";
        cin.getline(names[i],20);
cout<<"Enter the 3 marks for "<<names[i]<<" : "<<endl;
totals[i]=0;
for(int j=0;j<3;j++){
    cin>>marks[i][j];
    totals[i]+=marks[i][j];

}averages[i]=totals[i]/3;
if(totals[i]>maxtotal){
    maxtotal=totals[i];
    topstudent=i;
}
cin.ignore();
cout<<"--------------------"<<endl;}
cout<<setw(15)<<"name";
cout<<setw(6)<<"m1"<<setw(6)<<"m2"<<setw(6)<<"m3";
cout<<setw(8)<<"total";
cout<<setw(8)<<"AVG"<<endl;
for(int i=0;i<5;i++){
    cout<<setw(15)<<names[i];
    cout<<setw(6)<<marks[i][0]<<setw(6)<<marks[i][1]<<setw(6)<<marks[i][2];
    cout<<setw(8)<<totals[i]<<setw(8);
    cout<<setw(8)<<averages[i]<<endl;
}
cout<<"Top student: "<<names[topstudent]<<endl;
 return 0;
}