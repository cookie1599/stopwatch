#include<iostream>
#include<stdlib.h>
#include<dos.h>
using namespace std;

int main()
{
	while(1)
	{
		for(int j=0; j<24; j++)
		{
			for(int m=0; m<60; m++)
			{
				for(int d=1; d<60; d++)
				{
					//sleep(1);
					system("CLS");
					cout<<"Stopwatch\n";
					cout <<"========\n";
					cout<<j<<":"<<m<<":"<<d;
				}
			}
		}
	}
}
