/**
 * TOPIC: Graphs!
 * 
 * Graph:
 * 
    ┌─┐             ┌─┐
    │A│      ┌──────┤C│
    └┬┘      │      └┬┘
     │       │       │
     │       │       │
     │       │       │
     │       │       │
    ┌┴┬──────┘      ┌┴┐
    │B│             │D│
    └─┴─────────────┴─┘
 
 * 
 */

/**
 * QUESTIONS:
 * 1. Create both an adjacency list and adjacency
 *    matrix for the above graph
 * 
 * 2. What is the difference between a "sparse" and "dense"
 *    graph? How do we define those terms?
 * 
 * 3. What are the advantages/disadvantages of an adjacency
 *    list? There are a few of each so really think through this.
 * 
 * 4. What are the advantages/disadvantages of an adjacency
 *    matrix?
 * 
 * 5. Maximum number of edges in:
 *      a. an undirected graph
 *      b. a directed graph 
 * 
 * 6. Which graph representation do we use for BFS/DFS? Why?
 * 
 * 7. Describe how BFS with a FIFO queue operates on a graph. Use
 *    the above graph as an example, describe how the algorithm 
 *    tracks visited nodes.
 * 
 * 8. Describe how DFS with a LIFO queue operates on a graph!
 * 
 * 
 * ANSWERS:
 * 1. Adjacency List:
 *      A -> B
 *      B -> C -> D
 *      C -> B -> D
 *      D -> B -> C
 *    
 *    Adjacency Matrix:
 *       A B C D
 *      ┌─┬─┬─┬─┐
       A│ │X│ │ │
        ├─┼─┼─┼─┤
       B│X│ │X│X│
        ├─┼─┼─┼─┤
       C│ │X│ │X│
        ├─┼─┼─┼─┤
       D│ │X│X│ │
        └─┴─┴─┴─┘

 * 2. A graph is "sparse" if |E| is close to |V|. It is "dense"
 *    if |E| is close to |V|^2. Basically whether the graph is more
 *    or less "full".
 * 
 * 3. Adjacency List:
 *      advantages:
 *          a. saves space on sparse graphs
 *          b. really easy to visit all edges from a vertex,
 *             you just iterate down the linked list.
 *             the size of each linked list is the degree of
 *             the vertex.
 *          c. visiting all edges from a vertex is O(degree(v))
 *      disadvantages:
 *          a. checking for the existence of an edge from a 
 *             vertex is slow.
 *          b. must store pointers, which *COULD* waste more
 *             space than the list would save.
 * 
 * 4. Adjacency Matrix:
 *      advantages:
 *          a. saves space on dense graphs (although if you're
 *             just using one bit for each entry in the matrix,
 *             even a sparse matrix would be better than a list...)
 *          b. checking for an edge from a vertex can be done in
 *             constant time.
 *      disadvantages:
 *          a. must visit ALL POSSIBLE entries in a row to visit 
 *             all edges from a vertex. O(|V|).
 * 
 * 5. Max nodes (yeah this one isn't super intuitive):
 *      a. with |V| nodes, you can have |V|*(|V|-1)/2 edges.
 *         if self loops are allowed, you can have (|V|^2)/2.
 *      b. with |V| nodes, you can have |V|*(|V|-1) edges.
 *         if self loops are allowed, you can have |V|^2.
 * 
 *      NOTE: Using our big-O techniques, we can typically refer
 *            to them as |V|^2, but the above answers are "more"
 *            accurate.
 * 
 * 6. We use an adjacency list. When looking for edges which connect
 *    to a given vertex, it is quicker to look through a linked list
 *    of existing edges than an array of possible edges.
 * 
 * 7. Rough BFS algorithm:
 *       a. Starting at a vertex, "visit" all vertexes within
 *          1 edge from it. 
 *       b. When you "visit" a node, mark that it
 *          has been visited and add it to the FIFO queue. 
 *       c. After visiting all adjacent verticies, begin with
 *          the *FIRST* node in the queue.
 *       d. Visit (and add to the queue) all adjacent nodes from 
 *          THAT node. If an adjacent node has been visited, skip it.
 *       e. repeat C->D until the queue is empty.
 *       
 *    NOTE: I highly HIGHLY recommend drawing a FIFO queue and
 *          going through BFS step by step to see *HOW* it does
 *          all of the 1-hop nodes and then the 2-hop, 3-hop, etc.
 * 
 * 8. Rough DFS algorithm:
 *       a. Starting at a vertex, visit all the adjacent nodes
 *          within 1 edge from it. 
 *       b. When you visit a node, makr that it has been visited
 *          and add it to the LIFO queue. 
 *       c. After visiting all adjacent verticies, begin with the
 *          *TOP of the stack*. This causes the algorithm to 
 *          evaluate a child->grand-child->grand-grand-child->etc
 *       d. When you hit a dead-end, process the top node as you
 *          did before. 
 * 
 */