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
int t=0;

int left_child(int i)
{

    return 2*i;
}

int right_child(int i)
{

    return 2*i+1;
}

 int parent( int i)
 {

     return i/2;
 }
 void print_heap(int *p,int heap_size)
 {

     for (int i=1;i<=heap_size ;i++ )
        cout<<p[i] <<",";
 }

 void heapyfi(int *p,int heap_size,int i)
 {

      int l=left_child(i),r=right_child(i),largest;
        if(l<=heap_size && p[l]>p[i]) largest=l;
        else largest =i;

        if(r<=heap_size && p[r]>p[l]) largest =r;

        if(largest==i) return ;
        swap(p[i],p[l]);
    // print_heap(p,heap_size);
  //cout<<"\\\\\\"<<endl;
      heapyfi(p,heap_size, largest);



 }




int main()
{
  int heap_size=9;
  int heap[]={0,1,17,19,21,18,72,83};
   int heap1[]={0,19,7,12,3,5,17,10,1,2};
  print_heap(heap1,heap_size);
 cout<<endl;
   heapyfi(heap1,heap_size,3);
   print_heap(heap1,heap_size);

return 0;
}
