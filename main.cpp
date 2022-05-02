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
 * 9. Find the shortest path between node C and all other nodes
 *    in the following graph (Dijkstra's):
 *    
 * 
         ┌─┬─┐      3        ┌─┬─┐        1
         │A│x├───────────────┤B│x├───────────────┐
         └─┼─┘               ├─┼─┘               │
           │                 │ │                 │
           │         7       │ │               ┌─┼─┐
          1│ ┌───────────────┘ │5              │E│x│
           │ │                 │               └─┼─┘
           │ │                 │                 │
         ┌─┼─┤               ┌─┼─┐               │
         │C│0├───────────────┤D│x├───────────────┘
         └─┴─┘        2      └─┴─┘       7
      NOTE: the 0 and 'x' indicate distances, and remember
 */