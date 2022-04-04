#include <iostream>
#include "sha1.h"
 
using namespace std;
 
int main(int argc, char *argv[])
{
	string ten;
	cin>>ten;
    cout << "Ma hoa theo SHA-1: " << sha1(ten) << endl;
    return 0;
}
