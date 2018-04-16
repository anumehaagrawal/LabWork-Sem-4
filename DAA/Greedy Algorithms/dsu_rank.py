class Node:
	def __init__(self,key=None):
		self.rank=0
		self.key=key
		self.parent=None
		self.color='white'
class dsu:
	def __init__(self,n):
		self.nodes=[-1 for i in range(n)]
		self.n=n
		self.parent_set=[]

	def makeset(self,x):
		new_node=Node(x)
		new_node.parent=new_node
		self.nodes[x]=new_node

	def findset(self,x):
		node=self.nodes[x]
		while node.parent != node:
			node= node.parent
		return node

	def union(self,x,y):
		xr=self.findset(x)
		yr=self.findset(y)
		x_n=self.nodes[x]
		y_n=self.nodes[y]
		if(xr.rank>yr.rank):
			y_n.parent=x_n
		elif(xr.rank<yr.rank):
			x_n.parent=y_n
		else:
			y_n.parent=x_n
			x_n.rank=x_n.rank+1

	def printset(self):
		for i in range(self.n):
			node_par=self.nodes[i].parent
			if not node_par in self.parent_set:
				self.parent_set.append(node_par)
				print(node_par.key,i)
			else:
				print(node_par.key , i)


def main():
	graph=dsu(8)
	for i in range(8):
		graph.makeset(i)
	graph.union(4,5)
	graph.union(3,4)
	#graph.printset()
main()

