#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int main()
{
	cout<<"请输入新文章名"<<endl; 
	string str;
	cin>>str;
	string str2("hexo n post \""),str3("\"");
	system((str2+str+str3).c_str());
 } 
