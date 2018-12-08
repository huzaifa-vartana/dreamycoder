// Breath-First-Search Algorithm
#include<iostream>
using namespace std;

struct node {
	int info;
	node *next;
};

class Queue {
	private :
		node *front, *rear;
		
	public :
	Queue()
	{
		front = rear = NULL;
	}	
	
	void Enqueue(int value)
	{
		node *temp = new node;
		temp->info = value;
		temp->next = NULL;
		if(temp==NULL)
		{
			front = temp;
			rear  = temp;
		}
		else
		{
			rear->next = temp;
			rear = temp;
		}
	}
	
	int Dequeue()
	{
		node *temp = new node;
		int value;
		if(front == NULL)
		{
			cout<<"\nQueue Is Empty\n ";
		}
		else
		{
		temp = front;
		value = temp->info;
		front = front->next;
		delete temp;
	    }
	}
	
	void display()
	{
		node *temp = new node;
		temp = front;
		while(temp!=NULL)
		{
			cout<<temp->info<<endl;
			temp = temp->next;
		}
	}
	
	bool isEmpty()
	{
		return (front == NULL);
	}
};


class Graph {
	private :
		int **A;  //Stores The Edges Between Two Vertices
		int n;   // Number of Vertices
	
	public :
	
	Graph(int Size)
	{
		n = Size;
		A = new int*[n];
		for(int i=0; i<Size; i++)
		{
			A[i] = new int[n];
		}
		for(int i=0; i<Size; i++)
		for(int j=0; j<Size; j++)
		   A[i][j] = 0;
	}
	
	bool isConnected(int u, int v)
	{
		return (A[u][v]==1);
	}
	
	void addEdge(int u, int v)
	{
		A[u][v] = A[v][u] = 1;
	}	
	
	void BFS(int s)
	{
		Queue Q;
		bool* explored = new bool[n];
		
		for(int i=0; i<n; i++)
		{
			explored[i] = 0;
		}
		
		Q.Enqueue(s);
		explored[s] = true;
		cout << "Breadth first Search starting from vertex ";
        cout << s << " : " << endl;
        
        while(!Q.isEmpty())
        {
        	int v = Q.Dequeue();
        	cout << v << " ";
        	
        for (int w = 1; w <= n; ++w)
            if (isConnected(v, w) && !explored[w]) {
                Q.enqueue(w);
                explored[w] = true;
            }
    }
    cout << endl;
		}
	}
};

