#include<bits/stdc++.h>
#pragma gcc optimize ( unroll-loops )
#define endl '\n'
using namespace std;
int main()
{
	string DNA;
	while(cin>>DNA)
	{
		int pos = 0;
		int flag = 0;
		while(DNA.find("ATG", pos) != string::npos)
		{
			pos = DNA.find("ATG", pos);
			//cout<<pos<<endl;
			size_t si1=DNA.find("TAG", pos), si2=DNA.find("TAA", pos), si3=DNA.find("TGA", pos);
			if(si1 != string::npos && si1<si2 && si1 < si3)
			{
				int pos1 = pos+3, pos2 = DNA.find("TAG", pos) - pos1;
				if(pos2 % 3 == 0 && pos2 != 0)
				{
					for(int a = pos1;a < pos1 + pos2; a++)
						cout<<DNA[a];
					flag++;
					cout<<endl;
				}
				pos = DNA.find("TAG", pos+3);
			}
			
			else if(si2 != string::npos && si2 < si3)
			{
				int pos1 = pos+3, pos2 = DNA.find("TAA", pos) - pos1;
				if(pos2 % 3 == 0 && pos2 != 0) 
				{
					for(int a = pos1;a < pos1 + pos2; a++)
						cout<<DNA[a];
					flag++;
					cout<<endl;
				}
				pos = DNA.find("TAA", pos+3);
			}
			
			else if(si3 != string::npos)
			{
				int pos1 = pos+3, pos2 = DNA.find("TGA", pos) - pos1;
				if(pos2 % 3 == 0 && pos2 != 0)
				{
					for(int a = pos1;a < pos1 + pos2; a++)
						cout<<DNA[a];
					flag++;
					cout<<endl;
				}
				pos = DNA.find("TGA", pos+3);
			}
			//cout<<flag<<endl;
		}
		if(!flag)
			cout<<"No gene."<<endl; 
	}
	//cin.tie(nullptr);
    //ios::sync_with_stdio(0);
    return 0;
}
