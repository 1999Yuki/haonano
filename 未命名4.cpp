#include <bits/stdc++.h>
#include <algorithm> //用来给sort用 
using namespace std;
int cmp (int a,int b)
{
	return a>b;
}
int main()
{
	int a[5]={3,4,2,1,5};
	sort(a,a+5,cmp);
	for(int i=0;i<5;i++)
		cout<<a[i]<<" ";		
} 
