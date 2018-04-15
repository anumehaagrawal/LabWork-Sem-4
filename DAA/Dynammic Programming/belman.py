class Graph:
	def __init__(self,v):
		self.V=v
		self.graph =[]

	def addEdge(self,u,v,w):
		self.graph.append([u,v,w])

	def bellman(self,source):
		dist = [float("Inf")]*self.V
		dist[source] = 0

		for i in range(self.V-1):
			for u,v,w in self.graph:
				if(dist[u] is not float("Inf") and dist[u]+w<dist[v]):
					dist[v] = dist[u]+w
		print(dist)
		for u,v,w in self.graph:
			if(dist[u] is not float("Inf") and dist[u]+w <dist[v]):
				print("Negative cycle")
				return 


def main():
	g=Graph(5)
	g.addEdge(0, 1, -1)
	g.addEdge(0, 2, 4)
	g.addEdge(1, 2, 3)
	g.addEdge(1, 3, 2)
	g.addEdge(1, 4, 2)
	g.addEdge(3, 2, 5)
	g.addEdge(3, 1, 1)
	g.addEdge(4, 3, -3)
	 
	#Print the solution
	g.bellman(0)
main()