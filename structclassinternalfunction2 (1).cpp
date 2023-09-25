#include<iostream>
using namespace std;

class cube {
    private:
    double height=2.0;
    double width=4.0;
    double length=6.0;

public:
     volume(){
  
int vol=height*length*width;
cout<<" The volume is:"<<endl;
return vol;
    }

    void input(){
        cout<<"enter height";
cin>>height;
cout<<"enter width";
cin>>width;
cout<<"enter length";
cin>>length;
    }
    
};
int main(){

int vl1;
cube cube1;
cube1.input();


vl1=cube1.volume();
cout<<vl1;



}