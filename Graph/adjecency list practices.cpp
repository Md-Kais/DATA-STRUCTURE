#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const double PI = acos(-1);

#define PB push_back
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (abs(a * b) / gcd(a, b))
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

class Node
{
public:
    int vertex;
    Node *next;
};

class Graph
{
public:
    int NumOfVertices;
    Node **adjList;
};

Node *createNode(int v)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->vertex = v;
    new_node->next = NULL;
    return new_node;
}

Graph *createAGraph(int vertices)
{

    Graph *graph = (Graph *)malloc(sizeof(Graph));
    graph->NumOfVertices = vertices;

    graph->adjList = (Node **)malloc(sizeof(Node *));

    for (int i = 0; i < vertices; i++)
    {

        graph->adjList[i] = NULL;
    }

    return graph;
}

void addEdge(Graph *graph, int s, int d)
{
    // create adjecency list of s;
    Node *new_node = createNode(d);
    new_node->next = graph->adjList[s];
    graph->adjList[s] = new_node;

    // create adjecency list of d;
    new_node = createNode(s);
    new_node->next = graph->adjList[d];
    graph->adjList[d] = new_node;
}

void print_adjecency_list(Graph *graph)
{
    for (int i = 0; i < graph->NumOfVertices; i++)
    {
        cout << "adjecency list of vertex " << i << endl;
        Node *tmp = graph->adjList[i];
        while (tmp)
        {
            cout << tmp->vertex << "-->";
            tmp = tmp->next;
        }

        cout << endl;
    }
}

int main()
{
    // cout<< "Enter how_many vertices in the Graph";
    Graph *graph = createAGraph(4);
    addEdge(graph, 0, 3);
    addEdge(graph, 0, 2);
    addEdge(graph, 0, 1);
    addEdge(graph, 1, 2);

    // cout<< graph->adjList[3]->vertex<<endl;

    print_adjecency_list(graph);

    return 0;
}
