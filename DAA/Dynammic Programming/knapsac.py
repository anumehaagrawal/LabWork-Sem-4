
def knapsack(values:list,weights:list,C:int):
	rows = len(values)+1
	cols = C+1
	values = [0]+values[:]
	weights = [0]+weights[:]
	dp_array = [[0 for i in range(cols)]  for k in range(rows)]
	for i in range(1,rows):
		for j in range(1,cols):
			if(j<weights[i]):
				dp_array[i][j] = dp_array[i-1][j]
			else:
				dp_array[i][j] = max(dp_array[i-1][j],dp_array[i-1][j-weights[i]]+values[i])
	values_choose =[]
	i = rows -1
	j= cols-1
	while i>0 and j>0:
		if(dp_array[i][j] != dp_array[i-1][j]):
			values_choose.append(values[i])
			j=j-weights[i]
			i = i-1
		else:
			i=i-1
	return dp_array[rows-1][cols-1],values_choose
def main():
	values = []
	weights =[]
	C = 10
	for i in range(6):
		val,wgt = input().split(" ")
		values.append(int(val))
		weights.append(int(wgt))
	print(knapsack(values,weights,C))
main()