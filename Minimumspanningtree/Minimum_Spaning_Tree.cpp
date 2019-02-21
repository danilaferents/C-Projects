#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
vector<pair<int,int> > MinimumSpaningTree(vector <pair<int,pair<int,int> > > graph,int *cost,int numberheaps)
{
    int n=graph.size();
    vector<pair<int,int> > tree;
    sort(graph.begin(),graph.end());
    vector<int> set(numberheaps);
    for(int i=0;i<numberheaps;i++)
    {
        set[i]=i;
    }

    for(int i=0;i<n;i++)
    {
        int beg=graph[i].second.first, end=graph[i].second.second, helpcost=graph[i].first;
        if(set[beg]!=set[end])
        {
            *cost+=helpcost;
            tree.push_back(make_pair(beg,end));
            int oldset=set[beg],newset=set[end];
            for (int j=0;j<numberheaps;j++)
            {
                if(set[j]==set[oldset])
                    set[j]=newset;
            }
        }
    }
    return tree;
}

