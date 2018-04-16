import heapq
from collections import defaultdict


def encode(frequency):
    heap = [[weight, [symbol, '']] for symbol, weight in frequency.items()]
    heapq.heapify(heap)
    while len(heap) > 1:
        lo = heapq.heappop(heap)
        hi = heapq.heappop(heap)
        for pair in lo[1:]:
            pair[1] = '0' + pair[1]
        for pair in hi[1:]:
            pair[1] = '1' + pair[1]
        heapq.heappush(heap, [lo[0] + hi[0]] + lo[1:] + hi[1:])
    return sorted(heapq.heappop(heap)[1:])
def decode(text,new_freq):

	deco =""
	n=len(text)
	i=0
	while(i<n):
		for k,v in new_freq.items():
			len_v =len(v)
			print(text[i:len_v+i])
			if(len(text) >len_v and text[i:len_v+i] == v):
				deco=deco+k
				i = i+ len_v
				break

	return deco

data = "The frog at the bottom of the well drifts off into the great ocean"
frequency = defaultdict(int)
for symbol in data:
    frequency[symbol] += 1

huff = encode(frequency)
new_freq ={}
for i in huff:
	new_freq[i[0]] =i[1]
new_data =""
for ch in data:
	new_data=new_data+new_freq[ch]
print(decode(new_data,new_freq))
