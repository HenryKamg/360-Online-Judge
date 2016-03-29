#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cstdio>
#define lc idx<<1
#define rc idx<<1|1
#define lson l,mid,lc
#define rson mid+1,r,rc
#define N 300010
using namespace std;

int n,m;
char s[N];
struct node 
{
    bool ok;   ///整段是否为‘*’
    bool ls,rs; ///左右端点是否为‘*’
    int num;   
} tree[N<<2];

void push_up(int idx,int l,int r) 
{
    tree[idx].ok=tree[lc].ok&&tree[rc].ok;
    if(tree[idx].ok) {
        tree[idx].num=r-l;
        tree[idx].ls=tree[idx].rs=1;
    } else {
        tree[idx].num=tree[lc].num+tree[rc].num;
        if(tree[lc].rs&&tree[rc].ls)
            tree[idx].num++;
        tree[idx].ls=tree[lc].ls;
        tree[idx].rs=tree[rc].rs;
    }
}

void build(int l,int r,int idx) 
{
    if(l==r) {
        tree[idx].num=0;
        if(s[l]=='.') {
            tree[idx].ls=tree[idx].rs=1;
            tree[idx].ok=1;
        } else {
            tree[idx].ls=tree[idx].rs=0;
            tree[idx].ok=0;
        }
        return;
    }
    int mid=(l+r)>>1;
    build(lson);
    build(rson);
    push_up(idx,l,r);
}

void update(int l,int r,int idx,int pos) 
{
    if(l==r) {
        if(s[l]=='.') {
            tree[idx].ls=tree[idx].rs=1;
            tree[idx].ok=1;
        } else {
            tree[idx].ls=tree[idx].rs=0;
            tree[idx].ok=0;
        }
        return ;
    }
    int mid=(l+r)>>1;
    if(pos<=mid) {
        update(lson,pos);
    } else {
        update(rson,pos);
    }
    push_up(idx,l,r);
}


int main() 
{
    //freopen("test.in","r",stdin);
    while(~scanf("%d%d",&n,&m)) {
        scanf("%s",s+1);
        build(1,n,1);
        char c[2];
        int pos;
        while(m--) {
            scanf("%d%s",&pos,c);
            if(c[0]=='.'&&s[pos]=='.') {
                printf("%d\n",tree[1].num);
                continue;
            }
            if(c[0]!='.'&&s[pos]!='.') {
                printf("%d\n",tree[1].num);
                s[pos]=c[0];
                continue;
            }
            s[pos]=c[0];
            update(1,n,1,pos);
            printf("%d\n",tree[1].num);
        }
    }
    return 0;
}