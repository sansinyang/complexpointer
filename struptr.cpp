/*
 * File:      struptr.cpp
 * Author:    sansinyang
 * Email:     sansinyang@gmail.com
 * Create on: 2018.3.30
 */

#include <iostream>

using namespace std;

typedef struct {
	int j;
}Fi;

int main(int argc, char* argv[])
{
    Fi (*f)[3];
    Fi F[3];

    f=&F;
    F[0]={55};
    (*f)[1]={56};

    cout<<"**f:"<<(**f).j<<endl;
    cout<<"(*(f+1)):"<<(*(*f+1)).j<<endl;

    cout<<"(*F).j:"<<(*F).j<<endl;
    cout<<"F:"<<F<<endl;
    cout<<"&F:"<<&F<<endl;
    cout<<"f:"<<f<<endl;

    return 0;
}
