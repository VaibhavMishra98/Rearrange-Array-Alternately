#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int main()
{
    int i,j;
  int a[ ] = {1,2,3,4, 5,6};
  int n=sizeof(a)/sizeof(a[0]);

 for(i=0;i<n;i=i+2)
{
int    key= a[n-1];
for(j=n-1;j>i;j--)
{
    a[j]=a[j-1];
}

swap(a[i],key);

}
cout<< endl;
 for(int i=0;i<n;i++)
 cout << a[i] << " ";

   return 0;
}



