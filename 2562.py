nums = list()

for i in range(9):
    nums.append(int(input()))

max = nums[0]
index = None
for i in range(1, 9):
    if (nums[i] > max):
        max = nums[i]
        index = i

print(max)
print(index + 1)