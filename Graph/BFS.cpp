// BFS

#include<bits/stdc++.h>
using namespace std;

class Graph{
	int V;
	list<int> *li;
public:
	Graph(int v){
		V=v;
		li=new list<int>[V];
	}

	void addEdge(int i, int j, bool undir=true){
		
		li[i].push_back(j);
		if(undir){
			li[j].push_back(i);
		}
	}

	void printGraph(int V){
		cout<<"Graph Edge List:"<<endl;
		for(int i=0;i<V;i++){
			cout<<i<<"-->";
			for(auto x:li[i]){
				cout<<x<<" ";
			}
				cout<<endl;
		}
	}

	void bfs(int sv){
		queue<int> q;
		bool *visited = new bool[V]{0};

		q.push(sv);
		visited[sv]=true;

		cout<<"Breath First Search:"<<endl;

		while(!q.empty()){
			int x=q.front();
			cout<<x<<" ";
			q.pop();
			for(auto nb:li[x]){ 
				if(!visited[nb]){
					q.push(nb);
					visited[nb]=true;
				} 
			}
		}
	}

};

int main(){
	Graph g(7);
	g.addEdge(1,0);
	g.addEdge(1,2);
	g.addEdge(4,0);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(3,5);
	g.addEdge(4,5);
	g.addEdge(6,5);

	

	g.printGraph(5);

	g.bfs(1);


	return 0;
}
