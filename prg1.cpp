//wap to scan a student name roll no brach sec and marks of 5 subjects using modular pragrraming technique.
#include<iostream>
using namespace std;
void input(string name,string section ,string branch,int roll, int marks[]){
    cout<<"enter name;"
    cin>>name;
    cout<<"enter branch:"
    cin>>branch;
    cout<<"enter section:"
    cin>>section;
    cout<<"enter roll no:";
    cin>>roll;
    for(int i=0;i<5;i++)
    {
        cout<<"enter marks of"<<i+1<<":"
        cin>>marks[i];
    }

}
void show(string name,string branch,string section, int roll,int marks[],int){
    cout<<"name:"<<name<<endl;
    
}
void calc(int marks[],int &total,float &percent)
{
    for(int i=0;i<5;i++)

}
imt main(){
    string name,section,branch;
    int roll,marks[5],total=0;
    float percent

})