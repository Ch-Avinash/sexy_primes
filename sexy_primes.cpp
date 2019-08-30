#include<iostream>
using namespace std;
class sexy_primes
{
	int m,n,k=0,count1=0;
	int a[1000];
	public:
		void getrange();
		void primerange();
};
void sexy_primes::getrange()
{
	int i,j,count=0;
	cout<<"Enter the starting and ending numbers of range: ";
	cin>>m>>n;
	if(m>n)
	{
		int c;
		c=m;
		m=n;
		n=c;
	}
	//p=n-m;
	for(i=m;i<n;i++)
	{
		count=0;
		for(j=2;j<i/2;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==0)
		{
			a[k]=i;
			k++;
		}
	}
}
void sexy_primes::primerange()
{
	for(int i=0;i<k;i++)
	for(int j=0;j<k;j++)
	{
		if(a[i]+6==a[j])
		{
			count1++;
			break;
		}
	}
	cout<<"The number of pairs are "<<count1;
}
main()
{
	sexy_primes sp;
	sp.getrange();
	sp.primerange();
}
