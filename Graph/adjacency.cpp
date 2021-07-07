// adjacency list representation

#include<bits/stdc++.h>
using namespace std;

class Graph{
	int V;
	list<int> *l;
public:
	Graph(int v){
		V=v;
		l=new list<int>[V];
	}

	void addEdge(int i, int j, bool undir=true){
		
		l[i].push_back(j);
		if(undir){
			l[j].push_back(i);
		}
	}

	void printGraph(int V){
		for(int i=0;i<V;i++){
			cout<<i<<"-->";
			for(auto x:l[i]){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
};

int main(){
	Graph g(5);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(3,0);
	g.addEdge(4,2);

	g.printGraph(5);



	return 0;
}
