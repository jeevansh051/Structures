#include<iostream>
using namespace std;

struct cube {
    double height=2.0;
    double width=4.0;
    double length=6.0;
    
};
int main(){


cube cube1;
int vol=cube1.height*cube1.length*cube1.width;

cout<<vol;



}
