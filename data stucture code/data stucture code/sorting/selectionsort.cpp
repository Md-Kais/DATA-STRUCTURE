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
void  selection_sort(int *a,int size)
{
   // int min_index;
    for (int i=0;i<size-1 ; i++)
      {
          int min_index=i;
          for(int j=min_index+1;j<size;j++)
          {
              if(a[j]<a[min_index])
              {
                   min_index=j;

              }

          }

          if(i!=min_index)
            swap(a[min_index],a[i]);
      }

}


int main()
{

    int a[]={3,12,78,34,88,45,34,67,90,123};

    selection_sort(a,10);
    for (int i=0;i<10 ;i++)
    {
        cout<<a[i]<<", ";
    }




return 0;
}
