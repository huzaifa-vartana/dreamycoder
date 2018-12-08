#include<iostream>
using namespace std;
#define SIZE 4
class Graph {
	private :
		int Array[SIZE][SIZE];
	public :
		Graph()
		{
			
			for(int i=0; i<SIZE; i++)
			{
				for(int j=0; j<SIZE; j++)
				{
					Array[i][j] = 0;
				}
			}
		}
		
	void Adjacency(int i, int j)
	{
		Array[i][j] = 1;
		Array[j][i] = 1;
	}
	
	void display()
	{
		for(int i=0; i<SIZE; i++)
			{
				for(int j=0; j<SIZE; j++)
				{
					cout<<Array[i][j];
				}
				cout<<endl;
			}
	}	
};

int main()
{
	Graph g1;
	g1.Adjacency(0,1);
	g1.Adjacency(0,2);
	g1.Adjacency(1,2);
	g1.Adjacency(2,0);
	g1.Adjacency(2,3);
	g1.display();
}
