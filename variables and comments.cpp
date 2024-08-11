#include<iostream>
using namespace std;
//var names cantbegin with any number
int glo=9;

void fun(){
    cout<<"\nThe value of glo as printed in fun() is:"<<glo;
    cout<<"\nFirst it looks if glo is a local var in fun()/main() and then it prints global var value if glo is absent as local var";
}

void bool_dis(){
bool is_true=true;
bool is_false=false;
cout<<"\nThe value of is_true and is_false respectively "<<is_true<<","<<is_false;
}


int main(){
    int glo=6;
    int sum=8;
    glo=69;
    cout<<"hey"<<" Sowmya's bday is on feb "<<sum<<"th"<<"\nmine on dec 9th";
    cout<<"\nlocal variable takes precedence over global variable. The value of glo when main fun is run: "<<glo;//glo will be 69 as its re-initialized
    fun();
    bool_dis();
    return 0;
    /*nothings gonna hold me back*/
}
