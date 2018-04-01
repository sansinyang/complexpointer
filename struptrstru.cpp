/*
 * File:      struptrstru.cpp
 * Author:    sansinyang
 * Email:     sansinyang@gmail.com
 * Create on: 2018.3.31
 */

#include <iostream>
#include <string>

using namespace std;
typedef struct {
	int j;
}Fi;

typedef struct {
	int i;
	Fi *F[];	
}Ai;

int main()
{
    Fi *f[3];
    f[0]=(Fi*)malloc(sizeof(Fi));
    f[1]=(Fi*)malloc(sizeof(Fi));
    f[2]=(Fi*)malloc(sizeof(Fi));
    *f[0]={55};
    *f[1]={56};
    *f[2]={57};
    Ai A1={12,f[0]};
    Ai A2={12,f[1]};

    cout<<(**A1.F).j<<endl;
    cout<<(**A2.F).j<<endl;

    free(f[0]);
    free(f[1]);
    free(f[2]);

    return 0;
}

