using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    
    static void Main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */
        int n = Convert.ToInt32(Console.ReadLine());
        for(int i = 0; i < n; i++){
            string str = Console.ReadLine();
            string[] num = str.Split(' ');
            Graph g = new Graph(Convert.ToInt32(num[0]));
            int e = Convert.ToInt32(num[1]);
            for(int j = 0; j < e; j++) {
                str = Console.ReadLine();
                num = str.Split(' ');
                g.addEdge(Convert.ToInt32(num[0]) - 1, Convert.ToInt32(num[1]) - 1);
            }
            int s = Convert.ToInt32(Console.ReadLine()) - 1;
            //Console.WriteLine("Fuck {0}", s);
            BreadthFirstPaths bfs = new BreadthFirstPaths(g, s);
            
            for(int j = 0; j < g.V(); j++){
                if(bfs.hasPath(j) && j != s) Console.Write("{0} ", bfs.DistTo(j)*6);
                else if(!bfs.hasPath(j) && j != s) Console.Write("{0} ", -1);
            }
            Console.WriteLine();
        }
    }
}

public class Graph
{
    private LinkedList<int>[] adj;
    private int e;
    private int v;

    public Graph(int v)
    {
        this.v = v;
        adj = new LinkedList<int>[v];
        for (int i = 0; i < v; i++)
        {
            adj[i] = new LinkedList<int>();
        }
        this.e = 0;
    }

    public void addEdge(int v, int w)
    {
        adj[v].AddLast(w);
        adj[w].AddLast(v);
        e++;
    }

    public int V()
    {
        return v;
    }

    public int E()
    {
        return e;
    }

    public IEnumerable<int> Adj(int v)
    {
        return adj[v];
    }
}

public class BreadthFirstPaths
{
    private Boolean[] marked;
    private int[] edgeTo;
    private int[] distTo;
    private int s;

    public BreadthFirstPaths(Graph G, int s)
    {
        this.s = s;
        marked = new Boolean[G.V()];
        edgeTo = new int[G.V()];
        distTo = new int[G.V()];
        for (int i = 0; i < G.V(); i++) distTo[i] = -1;
        bfs(G, s);
    }

    private void bfs(Graph G, int s)
    {
        Queue<int> q = new Queue<int>();
        marked[s] = true;
        distTo[s] = 0;
        q.Enqueue(s);
        while (q.Count != 0)
        {
            int v = q.Dequeue();
            foreach (int w in G.Adj(v))
            {
                if (!marked[w])
                {
                    q.Enqueue(w);
                    marked[w] = true;
                    distTo[w] = distTo[v] + 1;
                    edgeTo[w] = v;
                }
            }
        }
    }

    public Boolean hasPath(int v)
    {
        return marked[v];
    }
    
    public int DistTo(int v){
        return distTo[v];
    }
    
    public IEnumerable<int> pathTo(int v)
    {
        if (!hasPath(v)) return null;
        Stack<int> st = new Stack<int>();
        for (int i = v; i != s; i = edgeTo[i])
        {
            st.Push(i);
        }
        st.Push(s);
        return st;
    }
}