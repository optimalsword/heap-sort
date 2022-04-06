<h1><b>Heap Sort Data Structure</b></h1>
The min-heap data structure provided is implemented such that
for each node in the binary tree, each node in its subtree is less than it. This is
true recursively for every subtree.
It is mostly exception safe and efficient
Can be used to make many algorithms, such as Dijskstra's algorithm for the
shortest path, more efficient

Implemented using a vector rather than trying to implement a simulated binary tree with nodes

<h1>Heap Sort</h1>
The actual algorithm to sort a given container. Uses the min-heap data structure
to keep track of the minimum element in an efficient manner
O(nlogn) run time.