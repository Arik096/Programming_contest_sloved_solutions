import java.awt.RenderingHints;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.StringTokenizer;

public class HackerRankRoads 
{
	static class FastReader
    {
        BufferedReader br;
        StringTokenizer st;
 
        public FastReader()
        {
            br = new BufferedReader(new
                     InputStreamReader(System.in));
        }
 
        String next()
        {
            while (st == null || !st.hasMoreElements())
            {
                try
                {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException  e)
                {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
        int nextInt()
        {
            return Integer.parseInt(next());
        }
 
        long nextLong()
        {
            return Long.parseLong(next());
        }
 
        double nextDouble()
        {
            return Double.parseDouble(next());
        }
 
        String nextLine()
        {
            String str = "";
            try
            {
                str = br.readLine();
            }
            catch (IOException e)
            {
                e.printStackTrace();
            }
            return str;
        }
    }	 	
	


	public static void main (String[] args)
	{
		FastReader reader = new FastReader();
		
		int totalNodes = reader.nextInt();
		int totalEdges = reader.nextInt();

		int i;
		Edge[] listEdge = new Edge[totalEdges];

		for (i=0; i<totalEdges; i++)
		{
			listEdge[i] = new Edge();

			listEdge[i].vertice1 = reader.nextInt() - 1;
			listEdge[i].vertice2 = reader.nextInt() - 1;
			listEdge[i].weight = reader.nextInt();
		}

		Arrays.sort (listEdge);

		int[] disjointSet = new int[totalNodes];
		int[] rank = new int[totalNodes];
		
		for (i=0; i<totalNodes; i++)
		{
			disjointSet[i] = i;
			rank[i] = 1;
		}
		
		Graph[] mst = new Graph[totalNodes];
		for (i=0; i<totalNodes; i++)
			mst[i] = new Graph();
		
		//making new MST using kruskal
		
		
		for (i=0; i<totalEdges; i++)
		{
			if (makeUnion (listEdge[i].vertice1, listEdge[i].vertice2, disjointSet, rank) == 1)
			{
				Adjacency temp1 = new Adjacency();
				temp1.node = listEdge[i].vertice2;
				temp1.weight = listEdge[i].weight;
				
				mst[listEdge[i].vertice1].list.add(temp1);
				
				Adjacency temp2 = new Adjacency();
				temp2.node = listEdge[i].vertice1;
				temp2.weight = listEdge[i].weight;
				
				mst[listEdge[i].vertice2].list.add(temp2);
			}
		}
		
		//making an array of size 1 so that i don' have to return values
		
		BigInteger[] pathSum = new BigInteger[1];
		pathSum[0] = new BigInteger("0");
		
		findNodes (mst, 0, -1, pathSum, totalNodes);
		
		System.out.println (pathSum[0].toString(2));
	
	}
	
	// findNodes method finds number of nodes to each side of an edge 
	// and i multiply them, i am using DFS for this method
	
	
	static int findNodes (Graph[] mst, int node, int parent, BigInteger[] pathSum, int totalNodes)
	{
		int sum = 0;
		
		for (int i=0; i<mst[node].list.size(); i++)
		{
			if (mst[node].list.get(i).node != parent)
			{
				int countryNodes =  findNodes (mst, mst[node].list.get(i).node, node, pathSum, totalNodes);
				sum += countryNodes;
				
				BigInteger combi = BigInteger.valueOf(countryNodes * (totalNodes-countryNodes));
				
				char[] temp1 = new char[mst[node].list.get(i).weight + 1];
				Arrays.fill (temp1, '0');
				String temp2 = new String(temp1);
				
				StringBuilder temp3 = new StringBuilder(temp2);
				temp3.setCharAt (0, '1');
				
				String temp4 = new String (temp3);
				
				BigInteger temp5 = new BigInteger(temp4, 2);
				
				combi = combi.multiply (temp5);
				pathSum[0] = pathSum[0].add(combi);
				
			}	
		}
		
		return (sum+1);
	}

	static int makeUnion (int node1, int node2, int[] disjointSet, int[] rank)
	{
		int parent1 = findParent (node1, disjointSet);
		int parent2 = findParent (node2, disjointSet);

		if (parent1 != parent2)
		{
			if (rank[parent1] > rank[parent2])
				disjointSet[parent2] = parent1;
			else if (rank[parent1]< rank[parent2])
				disjointSet[parent1] = parent2;
			else
			{
				disjointSet[parent2] = parent1;
				rank[parent1] += 1;
			}

			return 1;
		}
		else
			return 0;
	}

	static int findParent (int node, int[] disjointSet)
	{
		if (node != disjointSet[node])
		{
			int newParent = findParent (disjointSet[node], disjointSet);
			disjointSet[node] = newParent;

			return newParent;
		}
		else
			return node;
	}
}

class Edge implements Comparable<Edge>
{
	int vertice1;
	int vertice2;

	int weight;

	public int compareTo (Edge temp)
	{
		return (this.weight - temp.weight);
	}
}

class Graph
{
	ArrayList<Adjacency> list = new ArrayList<>();
}

class Adjacency
{
	int node;
	int weight;
}