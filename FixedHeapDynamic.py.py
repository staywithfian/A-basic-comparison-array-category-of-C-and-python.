class FixedHeap:
    def __init__(self, size):
        self.size = size
        self.arr = [None] * size
    
    def __setitem__(self, idx, val):
        if 0 <= idx < self.size:
            self.arr[idx] = val
        else:
            raise IndexError("Index out of bounds")
    
    def __repr__(self):
        return str(self.arr)

fh = FixedHeap(5)
for i in range(5):
    fh[i] = i + 1
print("Fixed Heap Dynamic:", fh)
