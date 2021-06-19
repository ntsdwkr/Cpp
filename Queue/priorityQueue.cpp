// Min Priority Queue

#include <bits/stdc++.h>
using namespace std;

class priorityQueue{
    vector<int> pq;
    public:
    priorityQueue(){
        
    }
    
    bool isEmpty(){
        return pq.size()==0;
    }
    
    int getSize(){
        return pq.size();
    }
    
    int getMin(){
        if(isEmpty()) return 0;
        return pq[0];
    }
    
    void insert(int n){
        pq.push_back(n);
        int cI=pq.size() - 1; // child index
        
        while(cI > 0){
            int pI=(cI-1)/2; // parent index
        
            if(pq[cI] < pq[pI]){
                swap(pq[cI], pq[pI]);
            }
            else 
                break;
            cI=pI; 
        }
    }
    
    int removeMin(){
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        
        int pI=0;
        int lC=2*pI+1;
        int rC=2*pI+2;
        
        while(lC < pq.size()){
            int mI=pI;
            
            if(pq[lC] < pq[mI]) mI=lC;
            if(rC < pq.size() && pq[rC] < pq[mI]) mI=rC;
            if(mI==pI) break;
            
            swap(pq[mI], pq[pI]);
            
            pI=mI;
            lC=2*pI+1; //leftChild
            rC=2*pI+2; //rightChild
        }
        
        return ans;
    }
    
};

int main() {
  priorityQueue p;
    
	p.insert(10);
	p.insert(3);
	p.insert(15);
	p.insert(2);
	p.insert(8);
	p.insert(7);
	p.insert(9);
	p.insert(3);
	p.insert(20);
	
	cout<<p.isEmpty()<<endl;
	cout<<p.getMin()<<endl;
	cout<<p.getSize()<<endl;
	
	cout<<p.removeMin()<<endl;
	cout<<p.getMin()<<endl;
  
  
	return 0;
}
