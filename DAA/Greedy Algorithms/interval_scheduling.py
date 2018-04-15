def interval_schedule(time_int):
	time_int.sort(key = lambda a : a[1])
	intervals = []
	print(time_int)
	while len(time_int)>0:
		intervals.append(time_int[0])
		start = time_int[0][0]
		end = time_int[0][1]
		time_int.pop(0)
		time_new = []
		for i in time_int:
			if(i[0] > end):
				time_new.append(i)
		time_int = time_new
		time_int.sort(key = lambda a :a[1])
	print(intervals)
				
def main():
	time = []
	for i in range(5):
		start,end = input().split(" ")
		time.append([int(start),int(end)])
	interval_schedule(time)
main()
