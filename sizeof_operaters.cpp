//Wap to find the size reserved by all the data types using class and object
#include<iostream>
using namespace std;
class Datatype
{
	public:
	void size()
	{
		cout<<"Size of integer:"<<sizeof(int)<<" Bytes"<<endl;
		cout<<"Size of float:"<<sizeof(float)<<" Bytes"<<endl;
		cout<<"Size of character:"<<sizeof(char)<<" Bytes"<<endl;
		cout<<"Size of double:"<<sizeof(double)<<" Bytes"<<endl;
		cout<<"Size of string:"<<sizeof(string)<<" Bytes"<<endl;
		cout<<"Size of short integer:"<<sizeof(short)<<" Bytes"<<endl;
		cout<<"Size of long integer:"<<sizeof(long)<<" Bytes"<<endl;
		cout<<"Size of boolean:"<<sizeof(bool)<<" Bytes"<<endl; 
	}
};
int main()
{
	Datatype obj;
	obj.size();
	return 0;
}
