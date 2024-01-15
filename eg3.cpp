#include <iostream>
#include <stdlib.h>
#include<typeinfo>

using namespace std;
int main()
{
	int v=3;
//	typedef int v;
	cout<<typeid(v).name()<<endl;
}
