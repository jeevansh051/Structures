#include<iostream>
using namespace std;

class cube {
    public:
    double height=2.0;
    double width=4.0;
    double length=6.0;


    void volume(){
        
int vol=height*length*width;
cout<<" The volume is:"<<endl;
cout<<vol;
    }


    
};
int main(){


cube cube1;
cout<<"enter height";
cin>>cube1.height;
cout<<"enter width";
cin>>cube1.width;
cout<<"enter length";
cin>>cube1.length;
cube1.volume();




}