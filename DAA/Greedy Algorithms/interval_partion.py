def interval_partion(intervals):
    res = []
    intervals.sort(key=lambda a: a[0])
    intervals.sort(key=lambda a: a[1])
    c = 0
    n=len(intervals)
    while True:
        l = []
        prev = 0
        for i, interval in enumerate(intervals):
            if interval is not None and interval[0] >= prev:
                l.append(interval)
                prev = interval[1]
                c += 1
                intervals[i] = None
        res.append(l)
        if c == n:
            break
    print(res)

				
def main():
	time = []
	for i in range(5):
		start,end = input().split(" ")
		time.append([int(start),int(end)])
	interval_partion(time)
main()
