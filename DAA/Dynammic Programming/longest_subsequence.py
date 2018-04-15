def main():
	numbers = []
	for i in range(7):
		num = int(input())
		numbers.append(num)
	memo = [None for _ in numbers]
	memo[0] = [0,-1]
	for i in range(1,7):
		max_num = 0
		max_i = -1
		for k in range(i):
			if( numbers[i] > numbers[k] and memo[k][0] + 1 > max_num ):
				max_num = memo[k][0]+1
				max_i = k
		memo[i] = [max_num,max_i]
	m = [0,0]
	j = 0
	dp = memo
	for i in range(7):
		if dp[i][0] > m[0]:
			m = dp[i]
			j = i
	subseq = [numbers[j]]
	while m[1] != -1:
		subseq.append(numbers[m[1]])
		m = dp[m[1]]
	print(subseq)



main()