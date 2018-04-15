import heapq

class Node:
	def __init__(self,data,freq):
		self.freq = freq
		self.data = data
		self.right = None
		self.left = None

class huffman_coding:		
	def huffman(self, data):
		freq = []
		for i in data:
			freq.append(i[0])
		heapq.heapify(freq)
		num1 = heapq.heappop()
		num2 = heapq.heappop()
		new_freq = num1+num2
		node1 =
		node_new = Node("$",new_freq)





def main():
	coding = []
	H = huffman_coding()
	for i in range(4):
		freq,data = input().split(" ")
		coding.append([int(freq),int(data)])
	H.huffman(coding)
	
main()