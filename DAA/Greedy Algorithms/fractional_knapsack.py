def fractional_knapsack(results , W):
	results.sort(key = lambda a:a[2],reverse = True)
	bag = []
	while(W > 0 and len(results)>1):
		
		if(W -results[0][1] > 0):
			bag.append([1,results[0][0]])
			results.pop(0)
			W= W-results[0][1]
			
		else:
			ratio_toadd = W/results[0][1]
			print(ratio_toadd)
			bag.append([ratio_toadd,results[0][0]])
			break;

	print(bag)
def main():
	results = []
	W = 100
	for i in range(5):
		val,wgt = input().split(" ")
		ratio = float(val)/float(wgt)
		results.append([int(val),int(wgt),float(ratio)])
	fractional_knapsack(results , W)
main()