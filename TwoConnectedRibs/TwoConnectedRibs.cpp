#include "TwoConnectedRibs.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
vector<pair<int,int> > FindMaxConnectedRibs(vector <pair<int,pair<int,int> > > graph,int *cost)
{
    *cost=-1;
    int n=graph.size();
    vector<pair<int,int> > tree;
    for(int i=0;i<n;i++)
    {
        int beg=graph[i].second.first, end=graph[i].second.second, helpcost=graph[i].first;
        for(int j=0;(j<n)&&(i!=j);j++)
        {
            int beg1=graph[j].second.first, end1=graph[j].second.second, helpcost1=graph[j].first;
            if ((beg1==beg)||(beg1==end)||(end1==end)||(end1==beg))
            {
                if (*cost==-1)
                {
                    tree.push_back(make_pair(0,0));//{0,0}
                    tree.push_back(make_pair(0,0));
                }
                if (*cost<(helpcost1+helpcost))
                {
                    *cost=helpcost1+helpcost;
                    tree[0].first=beg;tree[0].second=end;
                    tree[1].first=beg1;tree[1].second=end1;
                }
            }
        }
    }
    return tree;
}
