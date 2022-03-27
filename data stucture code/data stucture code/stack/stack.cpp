
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

#define stack_size 10
class my_stack
{
public:
    int a[stack_size];
    int top;


};

void push(my_stack *p,int value)
{
    if(p->top==stack_size)
    {
        cout<< "stack is full\n";
        return ;

    }

    p->a[p->top++]=value;

}


int pop(my_stack *p)
{
    if(p->top==0)
    {
        cout<< "stack is empty\n";
        return -1;
    }
    return p->a[--(p->top)];


}


int main()
{
    my_stack s;
    s.top=0;

    push(&s,10);
    push(&s,12);
    push(&s,9);
    push(&s,188);
    push(&s,188);
    push(&s,78);
    push(&s,78);
    push(&s,78);
    push(&s,78);
    push(&s,78);
    push(&s,78);
    push(&s,78);
    cout<<endl;
    cout<< pop(&s)<<endl;
    cout<< pop(&s)<<endl;
    cout<< pop(&s)<<endl;
    cout<< pop(&s)<<endl;
    cout<< pop(&s)<<endl;
    cout<< pop(&s)<<endl;
    cout<< pop(&s)<<endl;
    cout<< pop(&s)<<endl;
    cout<< pop(&s)<<endl;
    cout<< pop(&s)<<endl;
    cout<< pop(&s)<<endl;
    cout<< pop(&s)<<endl;
    cout<< pop(&s)<<endl;






return 0;
}
