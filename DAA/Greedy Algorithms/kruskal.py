from dsu_rank import Node
from dsu_rank import dsu
def main():
	t=[]
	edge=[]
	vtoe=dict()

	for i in range(5):
		u,v,e=input().split()
		edge.append(int(e))
		vtoe[int(e)]=[int(u),int(v)]
	edge=sorted(edge)
	
	krus=dsu(4)
	for i in range(4):
		krus.makeset(i)
	
	for i in range(len(edge)):
		ends=vtoe.get(edge[i])

		print(krus.findset(ends[0]).key,krus.findset(ends[1]).key,edge[i])
		if krus.findset(ends[0]) != krus.findset(ends[1]):

			krus.union(ends[0],ends[1])
			t.append(edge[i])
		
	print(t)
main()