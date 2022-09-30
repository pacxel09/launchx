#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int num,*dir_num;

    num=20;
    dir_num = &num;
    cout<<"numero: "<<*dir_num<<endl;
    cout<<"dir memoria "<<dir_num<<endl;

    getch();
    return 0;

}
