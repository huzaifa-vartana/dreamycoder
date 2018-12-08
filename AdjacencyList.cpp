#include<iostream>
#include"LinkedList.cpp"
using namespace std;

void AdjacencyList(list* ptr, int u, int v)
{
	ptr[u].addnode(v);
//	ptr[v].addnode(u);
}
int main()
{
	list* ptr = new list[4];
	AdjacencyList(ptr, 0, 2);
	AdjacencyList(ptr, 0,4);
	AdjacencyList(ptr, 1,8);
	for(int i=0; i<4; i++)
	{
	   	cout<<i<<"|"<<"->";
		ptr[i].display();
		cout<<"\n";
	}
	
}
