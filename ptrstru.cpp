/*
 * File:      ptrstru.cpp
 * Author:    sansinyang
 * Email:     sansinyang@gmail.com
 * Create on: 2018.3.30
 */
#include <iostream>

using namespace std;

typedef struct {
	int j;
}F;

int main(int argc, char* argv[])
{
    F *f[3];

    f[0]=(F*)malloc(sizeof(F));
    f[1]=(F*)malloc(sizeof(F));
    f[2]=(F*)malloc(sizeof(F));
    *f[0]={55};
    *f[1]={56};
    *f[2]={57};

    cout<<(*f[0]).j<<endl;

    return 0;
}
