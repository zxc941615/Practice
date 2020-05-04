import sys

def f(n):
	if n %2 == 0:
		return n/2
	else:
		return 3*n+1
def count(i):
	num = i
	answer = []
	answer.append(i)
	while i > 1:
		i = f(i)
		num = f(num)
		if num != 1:
			answer.append(int(num))
		else:
			answer.append(1)
			break
	return len(answer)

low = input("input first integer: ")
high = input("input second integer: ")

low_in = int(low)
high_in = int(high)
ans = 0

while(low_in <= high_in):
	if ans < count(low_in):
		ans = count(low_in)
	low_in += 1


print(ans)