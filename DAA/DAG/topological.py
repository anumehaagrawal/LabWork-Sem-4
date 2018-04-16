from collections import defaultdict
class Graph:

	def __init__(self,vertices):
		self.V = vertices
		self.graph = defaultdict(list)

	def addEdge(self,u,v):
		self.graph[u].append(v)

	def topoutil(self,v,visited,stack):
		visited[v] = True
		for i in self.graph[v]:
			if visited[i] == False:
				self.topoutil(i,visited,stack)
		stack.insert(0,v)


	def topological(self):
		visited = [False]*self.V
		stack = []
		for i in range(self.V):
			if visited[i] == False:
				self.topoutil(i,visited,stack)
		print(stack)
def main():
	g= Graph(6)
	g.addEdge(5, 2);
	g.addEdge(5, 0);
	g.addEdge(4, 0);
	g.addEdge(4, 1);
	g.addEdge(2, 3);
	g.addEdge(3, 1);
	 
	print ("Following is a Topological Sort of the given graph")
	g.topological()
main()