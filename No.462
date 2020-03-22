#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
	//cin.tie(nullptr);
    //ios::sync_with_stdio(0);
    string in;//輸入 
    while(getline(cin,in))
    {
    	string sa;//複製輸出
    	sa=in;
    	long long int len=in.length();//字串長度 
    	long long int time;//指令數 
    	cin>>time;
    	for(long long int a=0;a<time;a++)
    	{
    		string cmd;//指令 
    		long long int count;//移動數 
    		cin>>cmd>>count;
    		//上 
    		if(cmd=="up")
    		{
    			count=count%26;
    			for(long long int b=0;b<len;b++)
    			{
    				if(sa[b]+count>'z')
    				{
    					sa[b]+=count-26;
					}
					else
					{
						sa[b]+=count;
					}
				}
			}
			//下 
			else if(cmd=="down")
    		{
    			count=count%26;
    			for(long long int b=0;b<len;b++)
    			{
    				if(sa[b]-count<'a')
    				{
    					sa[b]=sa[b]-count+26;
					}
					else
					{
						sa[b]-=count;
					}
				}
			}
			//左 
			else if(cmd=="left")
    		{
    			count=count%len;
    			for(long long int b=0;b<len;b++)
    			{
    				if(b+count>len-1)
    				{
    					sa[b]=in[b+count-len];
					}
					else 
    				{
    					sa[b]=in[b+count];
					}
				}
			}
			//右 
			else if(cmd=="right")
    		{
    			count=count%len;
    			for(long long int b=0;b<len;b++)
    			{
					if(b-count<0)
    				{
    					sa[b]=in[b-count+len];
					}
					else 
    				{
    					sa[b]=in[b-count];
					}
				}
			}
			in=sa;//儲存變化 
			cout<<sa<<endl;
		}
	}
    return 0;
}
