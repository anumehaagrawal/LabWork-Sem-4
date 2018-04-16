def floyd_warshall(data):
	n=len(data)
	dist = [[999 for i in range(len(data))] for k in range(len(data))]
	for v1,v2,d in data:
		dist[v1][v2] = d

	for i in range(n):
		for j in range(n):
			for k in range(n):
				dist[j][k] = min(dist[j][k],dist[j][i]+dist[i][k])
	print(dist)
def main():
	data =[]
	for i in range(4):
		v1,v2,dist = input().split(" ")
		data.append([int(v1),int(v2),int(dist)])
	floyd_warshall(data)
main()