#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	cout << "argc:"<< argc<< endl;
	for(int i=0; i<argc; i++)
	{
		cout << "argv["<< i <<"]:" << argv[i] << endl;
	}

	cout << "hello world by main.cpp" << endl;

	return 0;
}
