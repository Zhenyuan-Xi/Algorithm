/*
Given a connected undirected graph, tell if its minimum spanning tree is unique. 
Definition 1 (Spanning Tree): Consider a connected, undirected graph G = (V, E). 
A spanning tree of G is a subgraph of G, say T = (V', E'), with the following properties: 
 1. V' = V. 
 2. T is connected and acyclic. 
Definition 2 (Minimum Spanning Tree): Consider an edge-weighted, connected, undirected graph G = (V, E). 
The minimum spanning tree T = (V, E') of G is the spanning tree that has the smallest total cost. 
The total cost of T means the sum of the weights on all the edges in E'. 
即求次小生成树,并比较两棵生成树是否相同

Input
The first line contains a single integer t (1 <= t <= 20), the number of test cases. Each case represents a graph. 
It begins with a line containing two integers n and m (1 <= n <= 100), the number of nodes and edges. 
Each of the following m lines contains a triple (xi, yi, wi), indicating that xi and yi are connected by an edge with weight = wi. 
For any two nodes, there is at most one edge connecting them.
Output
For each input, if the MST is unique, print the total cost of it, or otherwise print the string 'Not Unique!'.

Input
2
3 3
1 2 1
2 3 2
3 1 3
4 4
1 2 2
2 3 2
3 4 2
4 1 2
Output
3
Not Unique!
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<vector<int> > VII;
typedef vector<char> VC;
typedef vector<string> VS;
typedef pair<int,int> PII;
#define REP(i,s,t) for(int i=(s);i<(t);i++)
#define RREP(i,s,t) for(int i=(s);i>=(t);i--)
#define ALL(x) (x).begin(),(x).end()
#define FILL(x,v) memset(x,v,sizeof(x))
#define LEN(x) sizeof(x)/sizeof(x[0])
#define MP(x,y) make_pair(x,y)
const int INF=0x3f3f3f3f;
const int dx[]={-1,0,1,0},dy[]={0,-1,0,1}; //i=3-i
/*----------------------------------------------*/
const int N=110;
int mat[N][N];
int vis[N];
int dist[N];
int pre[N]; //记录前驱节点
int res; //记录最小生成树权值和
int mmax[N][N]; //记录从节点u到节点v的最大边权
int used[N][N]; //记录边u->v是否在最小生成树中

int prim(int n){
    int u=1,res=0;
    FILL(vis,0);
    FILL(mmax,0);
    FILL(used,0);
    vis[u]=1;
    dist[u]=0;
    pre[u]=0;
    REP(i,2,n+1){
        dist[i]=mat[u][i];
        pre[i]=1;
    }
    int mmin=INF;
    REP(i,1,n+1){
        mmin=INF;
        REP(j,1,n+1){
            if(!vis[j]&&mmin>dist[j]){
                mmin=dist[j];
                u=j;
            }
        }
        if(mmin==INF) return res;
        vis[u]=1;
        res+=mmin;
        used[u][pre[u]]=used[pre[u]][u]=1; //设置当前边在最小生成树中
        REP(j,1,n+1){
            if(vis[j]) mmax[u][j]=mmax[j][u]=max(mmax[j][pre[u]],dist[u]); //更新u->j的最大边权
            if(!vis[j]&&dist[j]>mat[u][j]){
                dist[j]=mat[u][j];
                pre[j]=u; //设置j的前驱节点为u
            }
        }
    }
}

int smst(int n){ //求次小生成树,对于没使用过的边u->v,假如当前最小生成树,则必产生环,删除环中即u->v的最大边权,得到一个当前次小生成树。
                 //枚举每个未使用的边,得到一个全局次小生成树
    int mst=INF;
    REP(i,1,n+1){
        REP(j,i+1,n+1){
            if(mat[i][j]!=INF&&!used[i][j]) mst=min(mst,res+mat[i][j]-mmax[i][j]);
        }
    }
    if(mst==INF) return -1;
    return mst;
}

int main(){
    int t,n,m;cin>>t;
    while(t--){
        cin>>n>>m;
        REP(i,1,n+1){
            REP(j,i+1,n+1){
                mat[i][j]=mat[j][i]=INF; //标记未连通的边的权值为INF
            }
        }
        int u,v,w;
        while(m--){
            scanf("%d%d%d",&u,&v,&w);
            mat[u][v]=mat[v][u]=w;
        }
        res=prim(n);
        if(res==smst(n)) cout<<"Not Unique!"<<endl; //比较最小生成树和次小生成树的权值和是否相等
        else cout<<res<<endl;
    }
}
