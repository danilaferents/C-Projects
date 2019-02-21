#include "TwoConnectedRibs.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>
#include "gtest/gtest.h"
using namespace std;
namespace  {
    TEST(TestsTwoConnectedRibs,TestFindMaxConnectedRibs1)
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
        tree=FindMaxConnectedRibs(graph,&costofgraph);
        vector<pair<int,int> > exptree;
        beg=3;end=4;
        exptree.push_back(make_pair(beg,end));
        beg=0;end=4;
        exptree.push_back(make_pair(beg,end));
        for(int i=0; i<exptree.size(); ++i)
        {
            ASSERT_EQ(tree[i].first,exptree[i].first);
            ASSERT_EQ(tree[i].second,exptree[i].second);
        }
        ASSERT_EQ(costofgraph,18);
    }
    TEST(TestsTwoConnectedRibs,TestFindMaxConnectedRibs2)
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
        tree=FindMaxConnectedRibs(graph,&costofgraph);
        vector<pair<int,int> > exptree;
        beg=3;end=2;
        exptree.push_back(make_pair(beg,end));
        beg=0;end=3;
        exptree.push_back(make_pair(beg,end));
        for(int i=0; i<exptree.size(); ++i)
        {
            ASSERT_EQ(tree[i].first,exptree[i].first);
            ASSERT_EQ(tree[i].second,exptree[i].second);
        }
        ASSERT_EQ(costofgraph,15);
    }
    TEST(TestsTwoConnectedRibs,TestFindMaxConnectedRibs3)
    {
        vector <pair<int,pair<int,int> > > graph;
        int costofgraph=0;
        vector<pair<int,int> > tree;
        int cost=8,beg=0,end=1;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        tree=FindMaxConnectedRibs(graph,&costofgraph);
        vector<pair<int,int> > exptree;
        //cout<<exptree.size();
        for(int i=0; i<tree.size(); ++i)
        {
            ASSERT_EQ(tree[i].first,exptree[i].first);
            ASSERT_EQ(tree[i].second,exptree[i].second);
        }
        ASSERT_EQ(costofgraph,-1);
    }
    TEST(TestsTwoConnectedRibs,TestFindMaxConnectedRibs4)
    {
        vector <pair<int,pair<int,int> > > graph;
        int costofgraph=0;
        vector<pair<int,int> > tree;
        int cost=3,beg=0,end=1;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=5;beg=1;end=2;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        tree=FindMaxConnectedRibs(graph,&costofgraph);
        vector<pair<int,int> > exptree;
        beg=1;end=2;
        exptree.push_back(make_pair(beg,end));
        beg=0;end=1;
        exptree.push_back(make_pair(beg,end));
        for(int i=0; i<exptree.size(); ++i)
        {
            ASSERT_EQ(tree[i].first,exptree[i].first);
            ASSERT_EQ(tree[i].second,exptree[i].second);
        }
        ASSERT_EQ(costofgraph,8);
    }
    TEST(TestsTwoConnectedRibs,TestFindMaxConnectedRibs5)
    {
        vector <pair<int,pair<int,int> > > graph;
        int costofgraph=0;
        vector<pair<int,int> > tree;
        int cost=3,beg=0,end=1;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=3;beg=2;end=3;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        tree=FindMaxConnectedRibs(graph,&costofgraph);
        vector<pair<int,int> > exptree;
        for(int i=0; i<tree.size(); ++i)
        {
            ASSERT_EQ(tree[i].first,exptree[i].first);
            ASSERT_EQ(tree[i].second,exptree[i].second);
        }
        ASSERT_EQ(costofgraph,-1);
    }
    TEST(TestsTwoConnectedRibs,TestFindMaxConnectedRibs6)
    {
        vector <pair<int,pair<int,int> > > graph;
        int costofgraph=0;
        vector<pair<int,int> > tree;
        int cost=3,beg=0,end=1;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=5;beg=1;end=2;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=1;beg=1;end=4;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        cost=3;beg=1;end=5;
        graph.push_back(make_pair(cost,make_pair(beg,end)));
        tree=FindMaxConnectedRibs(graph,&costofgraph);
        vector<pair<int,int> > exptree;
        beg=1;end=2;
        exptree.push_back(make_pair(beg,end));
        beg=0;end=1;
        exptree.push_back(make_pair(beg,end));
        for(int i=0; i<exptree.size(); ++i)
        {
            ASSERT_EQ(tree[i].first,exptree[i].first);
            ASSERT_EQ(tree[i].second,exptree[i].second);
        }
        ASSERT_EQ(costofgraph,8);
    }
}
//g++ -std=c++11 -stdlib=libc++ TwoConnectedRibs.cpp  TwoConnectedRibsTests.cpp TwoConnectedRibsmain.cc -lgtest -lpthread -o TwoConnectedRibs
//valgrind --leak-check=full --leak-resolution=high ./TwoConnectedRibs
