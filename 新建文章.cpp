#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int main()
{
	cout<<"��������������"<<endl; 
	string str;
	cin>>str;
	string str2("hexo n post \""),str3("\"");
	system((str2+str+str3).c_str());
 } 
