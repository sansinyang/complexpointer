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
    F[0]={55};	//only in .cpp file

    cout<<"*F:"<<(*F).j<<endl;
    cout<<"F:"<<F<<endl;
    cout<<"&F:"<<&F<<endl;
    cout<<"f:"<<f<<endl;

    return 0;
}
