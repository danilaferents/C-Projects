#include "Minimum_Spaning_Tree.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>
#include "gtest/gtest.h"
using namespace std;
namespace  {
    TEST(TestsMinimumSpanningTree,TestMinimumSpanningTree1)
    {
        vector <pair<int,pair<int,int> > > graph;
        int costofgraph=0;
        vector<pair<int,int> > tree;
        int cost=3,beg=0,end=1;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=1;beg=1;end=2;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=1;beg=0;end=2;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=5;beg=2;end=3;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=5;beg=0;end=3;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=7;beg=0;end=4;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=11;beg=3;end=4;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        tree=MinimumSpaningTree(graph,&costofgraph,5);
        vector<pair<int,int> > exptree;
        beg=0;end=2;
        exptree.push_back(make_pair(beg,end));
        beg=1;end=2;
        exptree.push_back(make_pair(beg,end));
        beg=0;end=3;
        exptree.push_back(make_pair(beg,end));
        beg=0;end=4;
        exptree.push_back(make_pair(beg,end));
        for(int i=0; i<exptree.size(); ++i)
        {
            ASSERT_EQ(tree[i].first,exptree[i].first);
            ASSERT_EQ(tree[i].second,exptree[i].second);
        }
        ASSERT_EQ(costofgraph,14);
    }
    TEST(TestsMinimumSpanningTree,TestMinimumSpanningTree2)
    {
        vector <pair<int,pair<int,int> > > graph;
        int costofgraph=0;
        vector<pair<int,int> > tree;
        int cost=8,beg=0,end=3;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=2;beg=0;end=4;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=5;beg=0;end=2;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=7;beg=3;end=2;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=9;beg=1;end=6;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=3;beg=2;end=6;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=5;beg=2;end=5;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=4;beg=2;end=7;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=1;beg=4;end=7;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        tree=MinimumSpaningTree(graph,&costofgraph,8);
        vector<pair<int,int> > exptree;
        beg=4;end=7;
        exptree.push_back(make_pair(beg,end));
        beg=0;end=4;
        exptree.push_back(make_pair(beg,end));
        beg=2;end=6;
        exptree.push_back(make_pair(beg,end));
        beg=2;end=7;
        exptree.push_back(make_pair(beg,end));
        beg=2;end=5;
        exptree.push_back(make_pair(beg,end));
        beg=3;end=2;
        exptree.push_back(make_pair(beg,end));
        beg=1;end=6;
        exptree.push_back(make_pair(beg,end));
        for(int i=0; i<exptree.size(); ++i)
        {
            ASSERT_EQ(tree[i].first,exptree[i].first);
            ASSERT_EQ(tree[i].second,exptree[i].second);
        }
        ASSERT_EQ(costofgraph,31);
    }
    TEST(TestsMinimumSpanningTree,TestMinimumSpanningTree3)
    {
        vector <pair<int,pair<int,int> > > graph;
        int costofgraph=0;
        vector<pair<int,int> > tree;
        int cost=8,beg=0,end=1;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        tree=MinimumSpaningTree(graph,&costofgraph,2);
        vector<pair<int,int> > exptree;
        beg=0;end=1;
        exptree.push_back(make_pair(beg,end));
        for(int i=0; i<exptree.size(); ++i)
        {
            ASSERT_EQ(tree[i].first,exptree[i].first);
            ASSERT_EQ(tree[i].second,exptree[i].second);
        }
        ASSERT_EQ(costofgraph,8);
    }
    TEST(TestsMinimumSpanningTree,TestMinimumSpanningTree4)
    {
        vector <pair<int,pair<int,int> > > graph;
        int costofgraph=0;
        vector<pair<int,int> > tree;
        int cost=1,beg=0,end=1;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=3;beg=0;end=4;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=6;beg=1;end=4;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=3;beg=1;end=2;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=2;beg=2;end=4;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=2;beg=2;end=3;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=1;beg=3;end=4;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=2;beg=0;end=3;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        tree=MinimumSpaningTree(graph,&costofgraph,5);
        vector<pair<int,int> > exptree;
        beg=0;end=1;
        exptree.push_back(make_pair(beg,end));
        beg=3;end=4;
        exptree.push_back(make_pair(beg,end));
        beg=0;end=3;
        exptree.push_back(make_pair(beg,end));
        beg=2;end=3;
        exptree.push_back(make_pair(beg,end));
        for(int i=0; i<exptree.size(); ++i)
        {
            ASSERT_EQ(tree[i].first,exptree[i].first);
            ASSERT_EQ(tree[i].second,exptree[i].second);
        }
        ASSERT_EQ(costofgraph,6);
    }
}
//g++ -std=c++11 -stdlib=libc++ Minimum_Spaning_Tree.cpp  Minimum_Spanning_Tree_Tests.cpp Minimum_Spaning_Tree_main.cc -lgtest -lpthread -o MinimumSpaningTree
//valgrind --leak-check=full --leak-resolution=high ./MinimumSpaningTree
