#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


const double PI = acos(-1);


#define PB push_back
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (abs(a*b)/gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int Partition(int *a,int low,int high)
{
    int pivort=a[high];
    int i,j;
   for ( j=low,i=low; j<high;j++ )
   {
       if(a[i]<pivort)
       {
           swap(a[i],a[j]);
           i++;
       }


   }

   swap(a[i],a[high]);
   return i ;



}


  void quick_sort(int *a,int low,int high)
  {

      if(high<=low)
        return;

      int p=Partition(a,low,high);

      quick_sort(a,low,p-1);

      quick_sort(a,p+1,high);

  }

int main()
{
    int a[]={12,45,1,3,67,23,19,12,34,67};

    int low=0;
    int high=9;
    quick_sort(a,low,high);
    for (int i=0; i<10;i++ )
        cout<< a[i] << ",";
    cout<<endl;


return 0;
}
