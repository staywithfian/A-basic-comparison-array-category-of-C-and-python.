
size = 5
stack_dynamic = [None] * size  # Pre-allocated fixed size
for i in range(size):
    stack_dynamic[i] = i + 1
print("Stack Dynamic:", stack_dynamic)
