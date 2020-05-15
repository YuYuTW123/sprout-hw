#include<iostream>
#define endl '\n'
using namespace std;
int perfect(int l,int r,int len,int arr[])
{
	int ll=0,rr=0;
	if(l<=arr[0]&&r>arr[len-1])
		return len;
	else if(l<=arr[0]&&r==arr[len-1])
		return len-1;
	else if(l>=arr[len-1]||r<arr[0])
		return 0;
	else
	{
    		int ll = 0, rr = len-1;
    		int ll_1 = 0, rr_1 = len-1;
    		int l_lim = 0, r_lim = 0;
    		int mid, mid_1;
    		while (ll < rr && ll_1 < rr_1) 
			{
    			  mid = (ll + rr) / 2;
      			  if (arr[mid] > r)
        			rr = mid ;
      			  else if(arr[mid] < r)
        			ll = mid + 1;
        		  else if(arr[mid] == r)
        		    ll=mid,rr=mid;
        		    
        		  mid_1 = (ll_1 + rr_1) / 2;
      			  if (arr[mid_1] >= l)
        			rr_1 = mid_1 ;
      			  else if(arr[mid_1] < l)
        			ll_1 = mid_1 ;
  			}
  			if(r > arr[len-1])
  			r_lim = len;
  			else if(rr >= ll)
  			r_lim = rr;
  			else if(rr < ll)
  			r_lim = ll;
			
			if(l <= arr[0])
  			l_lim = 0;
			else if(rr_1 >= ll_1)
  			l_lim = rr_1 ;
  			else if(rr_1 < ll_1)
  			l_lim = ll_1 ;
  		cout << r_lim <<" "<< l_lim<<endl;
	return r_lim - l_lim;
	}
}
		
int main()
{
	//cin.tie(nullptr);
   	//ios::sync_with_stdio(0);
	int plan,ques;
	while(cin>>plan>>ques)
	{
		int planet[plan];
		for(int a=0;a<plan;a++)
		{
			cin>>planet[a];
		}
		for(int b=0;b<ques;b++)
		{
			int left,right;
			cin>>left>>right;
			int ans=perfect(left,right,plan,planet);
			cout<<ans<<endl;
		}
		
	}
}
